/* POSIX socket wrappers - called from winsock.cpp to avoid name collisions.
 *
 * The extern "C" guard keeps symbols unmangled even when this file is compiled
 * as C++ (which the CMake shim target does via LANGUAGE CXX). winsock.cpp
 * declares these inside its own extern "C" block, so linkage must match. */

/* Compiles to nothing on Windows, where winsock_win32.c is the backend and
 * none of these headers exist. See the note at the top of that file. */
#if !defined(_WIN32)

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

int nocturne_socket_socket(int domain, int type, int protocol) {
    return socket(domain, type, protocol);
}

int nocturne_socket_accept(int sockfd, struct sockaddr* addr, unsigned int* addrlen) {
    return accept(sockfd, addr, addrlen);
}

int nocturne_socket_bind(int sockfd, const struct sockaddr* addr, unsigned int addrlen) {
    return bind(sockfd, addr, addrlen);
}

int nocturne_socket_connect(int sockfd, const struct sockaddr* addr, unsigned int addrlen) {
    return connect(sockfd, addr, addrlen);
}

int nocturne_socket_getsockname(int sockfd, struct sockaddr* addr, unsigned int* addrlen) {
    return getsockname(sockfd, addr, addrlen);
}

int nocturne_socket_listen(int sockfd, int backlog) {
    return listen(sockfd, backlog);
}

int nocturne_socket_recv(int sockfd, void* buf, unsigned long len, int flags) {
    return (int)recv(sockfd, buf, len, flags);
}

int nocturne_socket_recvfrom(int sockfd, void* buf, unsigned long len, int flags,
                   struct sockaddr* from, unsigned int* fromlen) {
    return (int)recvfrom(sockfd, buf, len, flags, from, fromlen);
}

int nocturne_socket_send(int sockfd, const void* buf, unsigned long len, int flags) {
    return (int)send(sockfd, buf, len, flags);
}

int nocturne_socket_sendto(int sockfd, const void* buf, unsigned long len, int flags,
                 const struct sockaddr* to, unsigned int tolen) {
    return (int)sendto(sockfd, buf, len, flags, to, tolen);
}

int nocturne_socket_setsockopt(int sockfd, int level, int optname,
                     const void* optval, unsigned int optlen) {
    return setsockopt(sockfd, level, optname, optval, optlen);
}

int nocturne_socket_shutdown(int sockfd, int how) {
    return shutdown(sockfd, how);
}

int nocturne_socket_close(int fd) {
    return close(fd);
}

int nocturne_socket_ioctl(int fd, unsigned long request, void* argp) {
    if (request == 0x8004667EUL) {
        int flags = fcntl(fd, F_GETFL, 0);
        if (flags < 0) return -1;
        int nonblock = argp && *(unsigned int*)argp != 0;
        flags = nonblock ? (flags | O_NONBLOCK) : (flags & ~O_NONBLOCK);
        return fcntl(fd, F_SETFL, flags);
    }
    return ioctl(fd, request, argp);
}

struct hostent* nocturne_socket_gethostbyname(const char* name) {
    return gethostbyname(name);
}

unsigned long nocturne_socket_inet_addr(const char* cp) {
    return (unsigned long)inet_addr(cp);
}

int nocturne_socket_gethostname(char* name, unsigned long namelen) {
    return gethostname(name, namelen);
}

struct servent* nocturne_socket_getservbyport(int port, const char* proto) {
    return getservbyport(port, proto);
}

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* !_WIN32 */
