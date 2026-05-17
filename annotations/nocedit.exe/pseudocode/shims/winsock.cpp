// =============================================================================
// WINSOCK SHIM - POSIX socket implementations for Winsock API
// =============================================================================
//
// Maps Winsock functions to POSIX BSD sockets. The actual POSIX calls are
// in winsock_posix.c (a C file) to avoid name collisions between our
// Winsock function names and the POSIX socket headers.
//

#include "system/winsock.h"
#include <cstring>

// POSIX wrappers defined in winsock_posix.c
extern "C" {
    int posix_socket(int domain, int type, int protocol);
    int posix_accept(int sockfd, void* addr, unsigned int* addrlen);
    int posix_bind(int sockfd, const void* addr, unsigned int addrlen);
    int posix_connect(int sockfd, const void* addr, unsigned int addrlen);
    int posix_getsockname(int sockfd, void* addr, unsigned int* addrlen);
    int posix_listen(int sockfd, int backlog);
    int posix_recv(int sockfd, void* buf, unsigned long len, int flags);
    int posix_recvfrom(int sockfd, void* buf, unsigned long len, int flags,
                       void* from, unsigned int* fromlen);
    int posix_send(int sockfd, const void* buf, unsigned long len, int flags);
    int posix_sendto(int sockfd, const void* buf, unsigned long len, int flags,
                     const void* to, unsigned int tolen);
    int posix_setsockopt(int sockfd, int level, int optname,
                         const void* optval, unsigned int optlen);
    int posix_shutdown(int sockfd, int how);
    int posix_close(int fd);
    int posix_ioctl(int fd, unsigned long request, void* argp);
    void* posix_gethostbyname(const char* name);
    unsigned long posix_inet_addr(const char* cp);
    int posix_gethostname(char* name, unsigned long namelen);
    void* posix_getservbyport(int port, const char* proto);
}

// =============================================================================
// Byte Order Conversion
// =============================================================================

ushort htons(ushort hostshort) {
    return (ushort)(((hostshort & 0xFF) << 8) | ((hostshort >> 8) & 0xFF));
}

ulong htonl(ulong hostlong) {
    return ((hostlong & 0xFF) << 24) |
           ((hostlong & 0xFF00) << 8) |
           ((hostlong >> 8) & 0xFF00) |
           ((hostlong >> 24) & 0xFF);
}

ushort ntohs(ushort netshort) {
    return htons(netshort);
}

ulong ntohl(ulong netlong) {
    return htonl(netlong);
}

// =============================================================================
// Winsock Initialization
// =============================================================================

int WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData) {
    if (lpWSAData) {
        memset(lpWSAData, 0, sizeof(WSADATA));
        lpWSAData->wVersion = wVersionRequested;
        lpWSAData->wHighVersion = wVersionRequested;
    }
    return 0; // POSIX sockets need no initialization
}

int WSACleanup(void) {
    return 0;
}

// =============================================================================
// Socket Operations
// =============================================================================

_SOCKET accept(_SOCKET s, struct SOCKADDR* addr, int* addrlen) {
    unsigned int len = addrlen ? (unsigned int)*addrlen : 0;
    int result = posix_accept((int)s, addr, addrlen ? &len : nullptr);
    if (addrlen) *addrlen = (int)len;
    if (result < 0) return (_SOCKET)-1;
    return (_SOCKET)result;
}

int bind(_SOCKET s, const struct SOCKADDR* addr, int namelen) {
    return posix_bind((int)s, addr, (unsigned int)namelen);
}

int closesocket(_SOCKET s) {
    return posix_close((int)s);
}

int connect(_SOCKET s, const struct SOCKADDR* name, int namelen) {
    return posix_connect((int)s, name, (unsigned int)namelen);
}

int getsockname(_SOCKET s, struct SOCKADDR* name, int* namelen) {
    unsigned int len = namelen ? (unsigned int)*namelen : 0;
    int result = posix_getsockname((int)s, name, &len);
    if (namelen) *namelen = (int)len;
    return result;
}

int ioctlsocket(_SOCKET s, long cmd, uint* argp) {
    return posix_ioctl((int)s, (unsigned long)cmd, argp);
}

int listen(_SOCKET s, int backlog) {
    return posix_listen((int)s, backlog);
}

int recv(_SOCKET s, char* buf, int len, int flags) {
    return posix_recv((int)s, buf, (unsigned long)len, flags);
}

int recvfrom(_SOCKET s, char* buf, int len, int flags, struct SOCKADDR* from, int* fromlen) {
    unsigned int slen = fromlen ? (unsigned int)*fromlen : 0;
    int result = posix_recvfrom((int)s, buf, (unsigned long)len, flags,
                                from, fromlen ? &slen : nullptr);
    if (fromlen) *fromlen = (int)slen;
    return result;
}

int send(_SOCKET s, const char* buf, int len, int flags) {
    return posix_send((int)s, buf, (unsigned long)len, flags);
}

int sendto(_SOCKET s, const char* buf, int len, int flags, const struct SOCKADDR* to, int tolen) {
    return posix_sendto((int)s, buf, (unsigned long)len, flags, to, (unsigned int)tolen);
}

int setsockopt(_SOCKET s, int level, int optname, const char* optval, int optlen) {
    return posix_setsockopt((int)s, level, optname, optval, (unsigned int)optlen);
}

int shutdown(_SOCKET s, int how) {
    return posix_shutdown((int)s, how);
}

// =============================================================================
// Name Resolution
// =============================================================================

struct HOSTENT* gethostbyname(const char* name) {
    return (struct HOSTENT*)posix_gethostbyname(name);
}

ulong inet_addr(const char* cp) {
    return (ulong)posix_inet_addr(cp);
}

int gethostname(char* name, int namelen) {
    return posix_gethostname(name, (unsigned long)namelen);
}

struct SERVENT* getservbyport(int port, const char* proto) {
    return (struct SERVENT*)posix_getservbyport(port, proto);
}

// =============================================================================
// Socket Creation
// =============================================================================

_SOCKET socket(int af, int type, int protocol) {
    int fd = posix_socket(af, type, protocol);
    if (fd < 0) return (_SOCKET)-1;
    return (_SOCKET)fd;
}

// =============================================================================
// Shim Init - Wire up global function pointers
// =============================================================================

#include "globals/globals_610000.h"

void shims_init_winsock() {
    g_acceptFunc = accept;
    g_bindFunc = (BIND_FUNC*)bind;
    g_closesocketFunc = closesocket;
    g_connectFunc = (CONNECT_FUNC*)connect;
    g_getsocknameFunc = getsockname;
    g_htonsFunc = htons;
    g_ioctlsocketFunc = (IOCTL_SOCKET_FUNC*)ioctlsocket;
    g_listenFunc = listen;
    g_recvFunc = recv;
    g_recvfromFunc = recvfrom;
    g_sendFunc = (SEND_FUNC*)send;
    g_sendtoFunc = (SEND_TO_FUNC*)sendto;
    g_setsockoptFunc = (SET_SOCK_OPT_FUNC*)setsockopt;
    g_socketFunc = socket;
    g_ntohsFunc = ntohs;
    g_WSAStartupFunc = WSAStartup;
    g_WSACleanupFunc = WSACleanup;
}
