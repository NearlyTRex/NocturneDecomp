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
typedef int GET_HOSTNAME_FUNC(char* name, int namelen);

// Function Definition: GET_HOST_BY_NAME_FUNC
typedef struct HOSTENT* GET_HOST_BY_NAME_FUNC(char* name);

// Function Definition: GET_SERV_BY_PORT_FUNC
typedef struct SERVENT* GET_SERV_BY_PORT_FUNC(int port, char* proto);

// Structure: HOSTENT
typedef struct HOSTENT {
    char* h_name;
    char** h_aliases;
    short h_addrtype;
    short h_length;
    char** h_addr_list;
} HOSTENT;

// Function Definition: HOST_TO_NETWORK_LONG_FUNC
typedef ulong HOST_TO_NETWORK_LONG_FUNC(ulong hostlong);

// Function Definition: HOST_TO_NETWORK_SHORT_FUNC
typedef ushort HOST_TO_NETWORK_SHORT_FUNC(ushort hostshort);

// Function Definition: INET_ADDR_FUNC
typedef ulong INET_ADDR_FUNC(char* cp);

// Typedef: LPWSADATA
// pointer to WSADATA
typedef struct WSADATA* LPWSADATA;

// Function Definition: NETWORK_TO_HOST_SHORT_FUNC
typedef ushort NETWORK_TO_HOST_SHORT_FUNC(ushort netshort);

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
    short sin_family;
    ushort sin_port;
    int sin_addr;
    char zero[8];
} SOCKADDR;

// Structure: SOCKADDR_IN
#pragma pack(push, 1)
typedef struct SOCKADDR_IN {
    ushort sin_family;
    ushort sin_port;
    uint sin_addr;
    char padding_0x08[8];
} SOCKADDR_IN;
#pragma pack(pop)

// Structure: WSADATA
#pragma pack(push, 1)
typedef struct WSADATA {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char* lpVendorInfo;
} WSADATA;
#pragma pack(pop)

// Function Definition: WSA_CLEANUP_FUNC
typedef int WSA_CLEANUP_FUNC(void);

// Function Definition: WSA_STARTUP_FUNC
typedef int WSA_STARTUP_FUNC(WORD wVersionRequested, LPWSADATA lpWSAData);

// Typedef: _SOCKET
// Unsigned Integer (compiler-specific size)
typedef uint _SOCKET;

// Function Definition: ACCEPT_FUNC
typedef _SOCKET ACCEPT_FUNC(_SOCKET s, struct SOCKADDR* addr, int* addrlen);

// Function Definition: BIND_FUNC
typedef int BIND_FUNC(_SOCKET s, struct SOCKADDR* addr, int namelen);

// Function Definition: CLOSE_SOCKET_FUNC
typedef int CLOSE_SOCKET_FUNC(_SOCKET s);

// Function Definition: CONNECT_FUNC
typedef int CONNECT_FUNC(_SOCKET s, struct SOCKADDR* name, int namelen);

// Function Definition: GET_SOCK_NAME_FUNC
typedef int GET_SOCK_NAME_FUNC(_SOCKET s, struct SOCKADDR* name, int* namelen);

// Function Definition: IOCTL_SOCKET_FUNC
typedef int IOCTL_SOCKET_FUNC(_SOCKET s, long cmd, ulong* argp);

// Function Definition: LISTEN_FUNC
typedef int LISTEN_FUNC(_SOCKET s, int backlog);

// Function Definition: RECV_FROM_FUNC
typedef int RECV_FROM_FUNC(_SOCKET s, char* buf, int len, int flags, struct SOCKADDR* from, int* fromlen);

// Function Definition: RECV_FUNC
typedef int RECV_FUNC(_SOCKET s, char* buf, int len, int flags);

// Function Definition: SEND_FUNC
typedef int SEND_FUNC(_SOCKET s, char* buf, int len, int flags);

// Function Definition: SEND_TO_FUNC
typedef int SEND_TO_FUNC(_SOCKET s, char* buf, int len, int flags, struct SOCKADDR* to, int tolen);

// Function Definition: SET_SOCK_OPT_FUNC
typedef int SET_SOCK_OPT_FUNC(_SOCKET s, int level, int optname, char* optval, int optlen);

// Function Definition: SHUTDOWN_FUNC
typedef int SHUTDOWN_FUNC(_SOCKET s, int how);

// =============================================================================
// WINSOCK FUNCTIONS
// =============================================================================
//
// Winsock function declarations.
// The CRT transform in transforms.py converts crt_wsock32_c_* calls to
// standard winsock function names (e.g., crt_wsock32_c_recv_FUN_XXXX -> recv).
//
// Implementations are in shims/winsock.cpp (POSIX BSD sockets).
//
// =============================================================================

// ---------------------------------------------------------------------------
// Byte Order Conversion
// ---------------------------------------------------------------------------

extern ushort htons(ushort hostshort);
extern ulong htonl(ulong hostlong);
extern ushort ntohs(ushort netshort);
extern ulong ntohl(ulong netlong);

// ---------------------------------------------------------------------------
// Winsock Initialization
// ---------------------------------------------------------------------------

extern int WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
extern int WSACleanup(void);

// ---------------------------------------------------------------------------
// Socket Operations
// ---------------------------------------------------------------------------

extern _SOCKET accept(_SOCKET s, struct SOCKADDR* addr, int* addrlen);
extern int bind(_SOCKET s, const struct SOCKADDR* addr, int namelen);
extern int closesocket(_SOCKET s);
extern int connect(_SOCKET s, const struct SOCKADDR* name, int namelen);
extern int getsockname(_SOCKET s, struct SOCKADDR* name, int* namelen);
extern int ioctlsocket(_SOCKET s, long cmd, uint* argp);
extern int listen(_SOCKET s, int backlog);
extern int recv(_SOCKET s, char* buf, int len, int flags);
extern int recvfrom(_SOCKET s, char* buf, int len, int flags, struct SOCKADDR* from, int* fromlen);
extern int send(_SOCKET s, const char* buf, int len, int flags);
extern int sendto(_SOCKET s, const char* buf, int len, int flags, const struct SOCKADDR* to, int tolen);
extern int setsockopt(_SOCKET s, int level, int optname, const char* optval, int optlen);
extern int shutdown(_SOCKET s, int how);

// ---------------------------------------------------------------------------
// Name Resolution
// ---------------------------------------------------------------------------

extern struct HOSTENT* gethostbyname(const char* name);
extern ulong inet_addr(const char* cp);
extern int gethostname(char* name, int namelen);
extern struct SERVENT* getservbyport(int port, const char* proto);

// ---------------------------------------------------------------------------
// Socket Creation
// ---------------------------------------------------------------------------

extern _SOCKET socket(int af, int type, int protocol);

