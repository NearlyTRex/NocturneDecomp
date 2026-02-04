#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINSOCK - System Header
// =============================================================================

// Forward declarations
struct HOSTENT;
struct SERVENT;

// Function Definition: GET_HOSTNAME_FUNC
typedef int (*GET_HOSTNAME_FUNC)(char* name, int namelen);

// Function Definition: GET_HOST_BY_NAME_FUNC
typedef struct HOSTENT* (*GET_HOST_BY_NAME_FUNC)(char* name);

// Function Definition: GET_SERV_BY_PORT_FUNC
typedef struct SERVENT* (*GET_SERV_BY_PORT_FUNC)(int port, char* proto);

// Structure: HOSTENT
typedef struct HOSTENT {
    char* h_name;
    char** h_aliases;
    short h_addrtype;
    short h_length;
    char** h_addr_list;
} HOSTENT;

// Function Definition: HOST_TO_NETWORK_LONG_FUNC
typedef ulong (*HOST_TO_NETWORK_LONG_FUNC)(ulong hostlong);

// Function Definition: HOST_TO_NETWORK_SHORT_FUNC
typedef ushort (*HOST_TO_NETWORK_SHORT_FUNC)(ushort hostshort);

// Function Definition: INET_ADDR_FUNC
typedef ulong (*INET_ADDR_FUNC)(char* cp);

// Typedef: LPWSADATA
// pointer to WSADATA
typedef struct WSADATA* LPWSADATA;

// Function Definition: NETWORK_TO_HOST_SHORT_FUNC
typedef ushort (*NETWORK_TO_HOST_SHORT_FUNC)(ushort netshort);

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

// Function Definition: ACCEPT_FUNC
typedef SOCKET (*ACCEPT_FUNC)(SOCKET s, struct SOCKADDR* addr, int* addrlen);

// Function Definition: BIND_FUNC
typedef int (*BIND_FUNC)(SOCKET s, struct SOCKADDR* addr, int namelen);

// Function Definition: CLOSE_SOCKET_FUNC
typedef int (*CLOSE_SOCKET_FUNC)(SOCKET s);

// Function Definition: CONNECT_FUNC
typedef int (*CONNECT_FUNC)(SOCKET s, struct SOCKADDR* name, int namelen);

// Function Definition: GET_SOCK_NAME_FUNC
typedef int (*GET_SOCK_NAME_FUNC)(SOCKET s, struct SOCKADDR* name, int* namelen);

// Function Definition: IOCTL_SOCKET_FUNC
typedef int (*IOCTL_SOCKET_FUNC)(SOCKET s, long cmd, ulong* argp);

// Function Definition: LISTEN_FUNC
typedef int (*LISTEN_FUNC)(SOCKET s, int backlog);

// Function Definition: RECV_FROM_FUNC
typedef int (*RECV_FROM_FUNC)(SOCKET s, char* buf, int len, int flags, struct SOCKADDR* from, int* fromlen);

// Function Definition: RECV_FUNC
typedef int (*RECV_FUNC)(SOCKET s, char* buf, int len, int flags);

// Function Definition: SEND_FUNC
typedef int (*SEND_FUNC)(SOCKET s, char* buf, int len, int flags);

// Function Definition: SEND_TO_FUNC
typedef int (*SEND_TO_FUNC)(SOCKET s, char* buf, int len, int flags, struct SOCKADDR* to, int tolen);

// Function Definition: SET_SOCK_OPT_FUNC
typedef int (*SET_SOCK_OPT_FUNC)(SOCKET s, int level, int optname, char* optval, int optlen);

// Function Definition: SHUTDOWN_FUNC
typedef int (*SHUTDOWN_FUNC)(SOCKET s, int how);

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

// Function Definition: WSA_CLEANUP_FUNC
typedef int (*WSA_CLEANUP_FUNC)(void);

// Function Definition: WSA_STARTUP_FUNC
typedef int (*WSA_STARTUP_FUNC)(WORD wVersionRequested, LPWSADATA lpWSAData);

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

