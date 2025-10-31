#pragma once

// Structure: HOSTENT
typedef struct HOSTENT {
    char* h_name;
    char** h_aliases;
    short h_addrtype;
    short h_length;
    char** h_addr_list;
} HOSTENT;

// Structure: SERVENT
typedef struct SERVENT {
    char* s_name;
    char** s_aliases;
    int s_port;
    char* s_proto;
} SERVENT;

// Structure: SOCKADDR
typedef struct SOCKADDR {
    ushort sa_family;
    char sa_data[14];
} SOCKADDR;

// Structure: SOCKADDR_IN
typedef struct SOCKADDR_IN {
    ushort sin_family;
    ushort sin_port;
    uint sin_addr;
    char padding_0x08[8];
} SOCKADDR_IN;

// Structure: WSADATA
typedef struct WSADATA {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char* lpVendorInfo;
} WSADATA;

