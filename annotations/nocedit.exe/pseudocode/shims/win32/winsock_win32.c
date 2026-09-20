/* Winsock backend for the Windows lane - the counterpart to winsock_posix.c,
 * selected by CMake on CMAKE_SYSTEM_NAME. Exactly one of the two is compiled.
 *
 * Same eighteen entry points, same signatures, same extern "C" linkage, so
 * winsock.cpp is identical on both platforms and its own extern block still
 * describes this file correctly. The names keep their posix_ prefix for that
 * reason: they name a contract, not an implementation.
 *
 * The indirection earns its keep twice here. winsock.cpp defines functions
 * called socket, bind, recv and so on -- the Winsock API is what the game
 * speaks -- and on this target those are also the names of the real thing.
 * Routing through a file that includes no project header lets both sets exist
 * without one shadowing the other.
 *
 * This file includes <winsock2.h> and nothing from include/. That is load
 * bearing: system/winsock.h declares SOCKET, sockaddr and hostent with the
 * decompiled binary's layouts, and pulling both in here would collide. */

/* Compiles to nothing off Windows. CMake already picks one backend per target,
 * but the guard is what makes that a property of the file rather than of one
 * build system: the shim compile report walks the whole tree with the host
 * compiler, and would otherwise stop here on <winsock2.h>. */
#if defined(_WIN32)

#include <winsock2.h>
#include <ws2tcpip.h>

#ifdef __cplusplus
extern "C" {
#endif

/* The socket calls are the one part of Winsock that needs the library wound up
 * first; on POSIX there is no equivalent step. Doing it here rather than in
 * winsock.cpp's WSAStartup keeps the platform difference inside the backend --
 * and the game's own WSAStartup is a shim that never reaches the host, so this
 * is the only place it can happen. Winsock reference-counts the calls and the
 * process teardown releases them, so there is no matching WSACleanup. */
static void win32_socket_init(void) {
    static int started = 0;
    if (!started) {
        WSADATA wsa;
        WSAStartup(MAKEWORD(2, 2), &wsa);
        started = 1;
    }
}

/* SOCKET is UINT_PTR, so it is 64-bit wide on this target while the contract
 * these functions implement passes descriptors as int. The truncation is safe
 * in practice -- Windows allocates socket handles from the bottom of the
 * handle space, the same reason a SOCKET has always survived a round trip
 * through a BSD-shaped int -- but it is a truncation, so it is spelled out
 * rather than left to an implicit conversion. */
#define SOCK(fd)  ((SOCKET)(UINT_PTR)(unsigned int)(fd))
#define UNSOCK(s) ((int)(unsigned int)(UINT_PTR)(s))

int posix_socket(int domain, int type, int protocol) {
    win32_socket_init();
    return UNSOCK(socket(domain, type, protocol));
}

int posix_accept(int sockfd, struct sockaddr* addr, unsigned int* addrlen) {
    int len = addrlen ? (int)*addrlen : 0;
    SOCKET s = accept(SOCK(sockfd), addr, addrlen ? &len : NULL);
    if (addrlen) *addrlen = (unsigned int)len;
    return UNSOCK(s);
}

int posix_bind(int sockfd, const struct sockaddr* addr, unsigned int addrlen) {
    return bind(SOCK(sockfd), addr, (int)addrlen);
}

int posix_connect(int sockfd, const struct sockaddr* addr, unsigned int addrlen) {
    return connect(SOCK(sockfd), addr, (int)addrlen);
}

int posix_getsockname(int sockfd, struct sockaddr* addr, unsigned int* addrlen) {
    int len = addrlen ? (int)*addrlen : 0;
    int rc = getsockname(SOCK(sockfd), addr, addrlen ? &len : NULL);
    if (addrlen) *addrlen = (unsigned int)len;
    return rc;
}

int posix_listen(int sockfd, int backlog) {
    return listen(SOCK(sockfd), backlog);
}

int posix_recv(int sockfd, void* buf, unsigned long len, int flags) {
    return recv(SOCK(sockfd), (char*)buf, (int)len, flags);
}

int posix_recvfrom(int sockfd, void* buf, unsigned long len, int flags,
                   struct sockaddr* from, unsigned int* fromlen) {
    int flen = fromlen ? (int)*fromlen : 0;
    int rc = recvfrom(SOCK(sockfd), (char*)buf, (int)len, flags,
                      from, fromlen ? &flen : NULL);
    if (fromlen) *fromlen = (unsigned int)flen;
    return rc;
}

int posix_send(int sockfd, const void* buf, unsigned long len, int flags) {
    return send(SOCK(sockfd), (const char*)buf, (int)len, flags);
}

int posix_sendto(int sockfd, const void* buf, unsigned long len, int flags,
                 const struct sockaddr* to, unsigned int tolen) {
    return sendto(SOCK(sockfd), (const char*)buf, (int)len, flags,
                  to, (int)tolen);
}

int posix_setsockopt(int sockfd, int level, int optname,
                     const void* optval, unsigned int optlen) {
    return setsockopt(SOCK(sockfd), level, optname,
                      (const char*)optval, (int)optlen);
}

int posix_shutdown(int sockfd, int how) {
    return shutdown(SOCK(sockfd), how);
}

int posix_close(int fd) {
    return closesocket(SOCK(fd));
}

int posix_ioctl(int fd, unsigned long request, void* argp) {
    /* The FIONBIO the caller tests for is 0x8004667E, which is the value
     * Winsock uses as well -- the encoding came from BSD -- so the request
     * passes straight through and needs no translation. There is no fcntl
     * path here because ioctlsocket sets non-blocking mode directly. */
    return ioctlsocket(SOCK(fd), (long)request, (u_long*)argp);
}

struct hostent* posix_gethostbyname(const char* name) {
    win32_socket_init();
    return gethostbyname(name);
}

unsigned long posix_inet_addr(const char* cp) {
    return (unsigned long)inet_addr(cp);
}

int posix_gethostname(char* name, unsigned long namelen) {
    win32_socket_init();
    return gethostname(name, (int)namelen);
}

struct servent* posix_getservbyport(int port, const char* proto) {
    win32_socket_init();
    return getservbyport(port, proto);
}

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _WIN32 */
