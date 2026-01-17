#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINSOCK - System Header
// =============================================================================

// Structure: HOSTENT
typedef struct HOSTENT {
    char* h_name;
    char** h_aliases;
    short h_addrtype;
    short h_length;
    char** h_addr_list;
} HOSTENT;

// Typedef: LPWSADATA
// pointer to WSADATA
typedef struct WSADATA* LPWSADATA;

// Typedef: PHOSTENT
// pointer to HOSTENT
typedef struct HOSTENT* PHOSTENT;

// Typedef: PSERVENT
// pointer to SERVENT
typedef struct SERVENT* PSERVENT;

// Typedef: PSOCKADDR
// pointer to SOCKADDR
typedef struct SOCKADDR* PSOCKADDR;

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

// Typedef: SOCKET
// Unsigned Integer (compiler-specific size)
typedef uint SOCKET;

// Function Definition: WSACleanup
typedef int (*WSACleanup)(void);

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

// Function Definition: WSAStartup
typedef int (*WSAStartup)(WORD wVersionRequested, LPWSADATA lpWSAData);

// Function Definition: accept
typedef SOCKET (*accept)(SOCKET s, struct SOCKADDR* addr, int* addrlen);

// Function Definition: bind
typedef int (*bind)(SOCKET s, struct SOCKADDR* addr, int namelen);

// Function Definition: closesocket
typedef int (*closesocket)(SOCKET s);

// Function Definition: connect
typedef int (*connect)(SOCKET s, struct SOCKADDR* name, int namelen);

// Function Definition: gethostbyname
typedef struct HOSTENT* (*gethostbyname)(char* name);

// Function Definition: gethostname
typedef int (*gethostname)(char* name, int namelen);

// Function Definition: getservbyport
typedef struct SERVENT* (*getservbyport)(int port, char* proto);

// Function Definition: getsockname
typedef int (*getsockname)(SOCKET s, struct SOCKADDR* name, int* namelen);

// Function Definition: htonl
typedef ulong (*htonl)(ulong hostlong);

// Function Definition: htons
typedef ushort (*htons)(ushort hostshort);

// Function Definition: inet_addr
typedef ulong (*inet_addr)(char* cp);

// Function Definition: ioctlsocket
typedef int (*ioctlsocket)(SOCKET s, long cmd, ulong* argp);

// Function Definition: listen
typedef int (*listen)(SOCKET s, int backlog);

// Function Definition: ntohs
typedef ushort (*ntohs)(ushort netshort);

// Function Definition: recv
typedef int (*recv)(SOCKET s, char* buf, int len, int flags);

// Function Definition: recvfrom
typedef int (*recvfrom)(SOCKET s, char* buf, int len, int flags, struct SOCKADDR* from, int* fromlen);

// Function Definition: send
typedef int (*send)(SOCKET s, char* buf, int len, int flags);

// Function Definition: sendto
typedef int (*sendto)(SOCKET s, char* buf, int len, int flags, struct SOCKADDR* to, int tolen);

// Function Definition: setsockopt
typedef int (*setsockopt)(SOCKET s, int level, int optname, char* optval, int optlen);

// Function Definition: shutdown
typedef int (*shutdown)(SOCKET s, int how);

