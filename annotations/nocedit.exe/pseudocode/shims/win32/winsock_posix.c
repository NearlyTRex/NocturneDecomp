/* POSIX socket wrappers - called from winsock.cpp to avoid name collisions.
 *
 * The extern "C" guard keeps symbols unmangled even when this file is compiled
 * as C++ (which the CMake shim target does via LANGUAGE CXX). winsock.cpp
 * declares these inside its own extern "C" block, so linkage must match. */

/* Compiles to nothing on Windows, where winsock_win32.c is the backend and
 * none of these headers exist. See the note at the top of that file. */
#if !defined(_WIN32)

#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif

int nocturne_socket_socket(int domain, int type, int protocol) {
    return socket(domain, type, protocol);
}

int nocturne_socket_accept(int sockfd, struct sockaddr *addr, unsigned int *addrlen) {
    return accept(sockfd, addr, addrlen);
}

int nocturne_socket_bind(int sockfd, const struct sockaddr *addr, unsigned int addrlen) {
    return bind(sockfd, addr, addrlen);
}

int nocturne_socket_connect(int sockfd, const struct sockaddr *addr, unsigned int addrlen) {
    return connect(sockfd, addr, addrlen);
}

int nocturne_socket_getsockname(int sockfd, struct sockaddr *addr, unsigned int *addrlen) {
    return getsockname(sockfd, addr, addrlen);
}

int nocturne_socket_listen(int sockfd, int backlog) {
    return listen(sockfd, backlog);
}

int nocturne_socket_recv(int sockfd, void *buf, unsigned long len, int flags) {
    return (int)recv(sockfd, buf, len, flags);
}

int nocturne_socket_recvfrom(int sockfd, void *buf, unsigned long len, int flags,
                             struct sockaddr *from, unsigned int *fromlen) {
    return (int)recvfrom(sockfd, buf, len, flags, from, fromlen);
}

int nocturne_socket_send(int sockfd, const void *buf, unsigned long len, int flags) {
    return (int)send(sockfd, buf, len, flags);
}

int nocturne_socket_sendto(int sockfd, const void *buf, unsigned long len, int flags,
                           const struct sockaddr *to, unsigned int tolen) {
    return (int)sendto(sockfd, buf, len, flags, to, tolen);
}

/* The game passes Winsock's numbers for the socket-level options: SOL_SOCKET is
 * 0xffff there and each option has its own value. Those with the same meaning
 * and argument here are translated; any other is passed on and refused. */
static void win32_socket_option(int *level, int *optname) {
    if (*level != 0xffff)
        return;
    *level = SOL_SOCKET;
    switch (*optname) {
    case 0x0004:
        *optname = SO_REUSEADDR;
        break;
    case 0x0008:
        *optname = SO_KEEPALIVE;
        break;
    case 0x0020:
        *optname = SO_BROADCAST;
        break;
    case 0x1001:
        *optname = SO_SNDBUF;
        break;
    case 0x1002:
        *optname = SO_RCVBUF;
        break;
    default:
        break;
    }
}

int nocturne_socket_setsockopt(int sockfd, int level, int optname, const void *optval,
                               unsigned int optlen) {
    win32_socket_option(&level, &optname);
    return setsockopt(sockfd, level, optname, optval, optlen);
}

int nocturne_socket_shutdown(int sockfd, int how) {
    return shutdown(sockfd, how);
}

int nocturne_socket_close(int fd) {
    return close(fd);
}

int nocturne_socket_ioctl(int fd, unsigned long request, void *argp) {
    if (request == 0x8004667EUL) {
        /* FIONBIO with nowhere to read the setting from is a fault, as in Winsock. */
        if (argp == NULL) {
            errno = EFAULT;
            return -1;
        }
        int flags = fcntl(fd, F_GETFL, 0);
        if (flags < 0)
            return -1;
        int nonblock = *(unsigned int *)argp != 0;
        flags = nonblock ? (flags | O_NONBLOCK) : (flags & ~O_NONBLOCK);
        return fcntl(fd, F_SETFL, flags);
    }
    return ioctl(fd, request, argp);
}

struct hostent *nocturne_socket_gethostbyname(const char *name) {
    return gethostbyname(name);
}

unsigned long nocturne_socket_inet_addr(const char *cp) {
    return (unsigned long)inet_addr(cp);
}

int nocturne_socket_gethostname(char *name, unsigned long namelen) {
    return gethostname(name, namelen);
}

struct servent *nocturne_socket_getservbyport(int port, const char *proto) {
    return getservbyport(port, proto);
}

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* !_WIN32 */
