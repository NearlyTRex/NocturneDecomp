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

// Function Definition: _gethostname
typedef int (*_gethostname)(char* name, int namelen);

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

// =============================================================================
// WINSOCK FUNCTION STUBS
// =============================================================================
//
// Inline function stubs for Winsock functions.
// The CRT transform in transforms.py converts crt_wsock32_c_* calls to
// standard winsock function names (e.g., crt_wsock32_c_recv_FUN_XXXX -> recv).
// These stubs provide declarations so the code compiles.
//
// Note: These are stub implementations that return error values.
// For actual runtime execution, link against ws2_32.lib or equivalent.
//
// =============================================================================

// ---------------------------------------------------------------------------
// Byte Order Conversion
// ---------------------------------------------------------------------------

inline ushort htons(ushort hostshort) {
    return (ushort)(((hostshort & 0xFF) << 8) | ((hostshort >> 8) & 0xFF));
}

inline ulong htonl(ulong hostlong) {
    return ((hostlong & 0xFF) << 24) |
           ((hostlong & 0xFF00) << 8) |
           ((hostlong >> 8) & 0xFF00) |
           ((hostlong >> 24) & 0xFF);
}

inline ushort ntohs(ushort netshort) {
    return htons(netshort);
}

inline ulong ntohl(ulong netlong) {
    return htonl(netlong);
}

// ---------------------------------------------------------------------------
// Winsock Initialization
// ---------------------------------------------------------------------------

inline int WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData) {
    (void)wVersionRequested; (void)lpWSAData;
    return 0;  // Success
}

inline int WSACleanup(void) {
    return 0;  // Success
}

// ---------------------------------------------------------------------------
// Socket Operations
// ---------------------------------------------------------------------------

inline SOCKET accept(SOCKET s, struct SOCKADDR* addr, int* addrlen) {
    (void)s; (void)addr; (void)addrlen;
    return (SOCKET)-1;  // INVALID_SOCKET
}

inline int bind(SOCKET s, const struct SOCKADDR* addr, int namelen) {
    (void)s; (void)addr; (void)namelen;
    return -1;  // SOCKET_ERROR
}

inline int closesocket(SOCKET s) {
    (void)s;
    return 0;
}

inline int connect(SOCKET s, const struct SOCKADDR* name, int namelen) {
    (void)s; (void)name; (void)namelen;
    return -1;  // SOCKET_ERROR
}

inline int getsockname(SOCKET s, struct SOCKADDR* name, int* namelen) {
    (void)s; (void)name; (void)namelen;
    return -1;  // SOCKET_ERROR
}

inline int ioctlsocket(SOCKET s, long cmd, ulong* argp) {
    (void)s; (void)cmd; (void)argp;
    return -1;  // SOCKET_ERROR
}

inline int listen(SOCKET s, int backlog) {
    (void)s; (void)backlog;
    return -1;  // SOCKET_ERROR
}

inline int recv(SOCKET s, char* buf, int len, int flags) {
    (void)s; (void)buf; (void)len; (void)flags;
    return -1;  // SOCKET_ERROR
}

inline int recvfrom(SOCKET s, char* buf, int len, int flags, struct SOCKADDR* from, int* fromlen) {
    (void)s; (void)buf; (void)len; (void)flags; (void)from; (void)fromlen;
    return -1;  // SOCKET_ERROR
}

inline int send(SOCKET s, const char* buf, int len, int flags) {
    (void)s; (void)buf; (void)len; (void)flags;
    return -1;  // SOCKET_ERROR
}

inline int sendto(SOCKET s, const char* buf, int len, int flags, const struct SOCKADDR* to, int tolen) {
    (void)s; (void)buf; (void)len; (void)flags; (void)to; (void)tolen;
    return -1;  // SOCKET_ERROR
}

inline int setsockopt(SOCKET s, int level, int optname, const char* optval, int optlen) {
    (void)s; (void)level; (void)optname; (void)optval; (void)optlen;
    return -1;  // SOCKET_ERROR
}

inline int shutdown(SOCKET s, int how) {
    (void)s; (void)how;
    return 0;
}

// ---------------------------------------------------------------------------
// Name Resolution
// ---------------------------------------------------------------------------

inline struct HOSTENT* gethostbyname(const char* name) {
    (void)name;
    return (struct HOSTENT*)0;
}

inline ulong inet_addr(const char* cp) {
    (void)cp;
    return 0xFFFFFFFF;  // INADDR_NONE
}

inline int gethostname(char* name, int namelen) {
    (void)name; (void)namelen;
    return -1;  // SOCKET_ERROR
}

inline struct SERVENT* getservbyport(int port, const char* proto) {
    (void)port; (void)proto;
    return (struct SERVENT*)0;
}

// ---------------------------------------------------------------------------
// Socket Creation (if socket() is called)
// ---------------------------------------------------------------------------

inline SOCKET socket(int af, int type, int protocol) {
    (void)af; (void)type; (void)protocol;
    return (SOCKET)-1;  // INVALID_SOCKET
}

