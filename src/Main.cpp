#include <iostream>

// Needed on windows!
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "crypt32.lib")
#pragma comment(lib, "user32.lib")

#pragma comment(lib, R"(libssl.lib)") //Path to the lib
#pragma comment(lib, R"(libcrypto.lib)") //Path to the lib

#include <openssl/sha.h>


int main()
{
    //Text
    unsigned char data[] = "Example text :)";
    unsigned char hash[SHA512_DIGEST_LENGTH];

    

    SHA512(data, std::strlen((char*)data), hash);
    

    std::cout << "SHA-512 Hash: ";
    for (int i = 0; i < SHA512_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }
    std::cout << std::endl;


    return 0;
}

