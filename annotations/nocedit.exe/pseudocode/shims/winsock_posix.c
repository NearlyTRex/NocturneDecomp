/* POSIX socket wrappers - called from winsock.cpp to avoid name collisions */

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>

int posix_socket(int domain, int type, int protocol) {
    return socket(domain, type, protocol);
}

int posix_accept(int sockfd, struct sockaddr* addr, unsigned int* addrlen) {
    return accept(sockfd, addr, addrlen);
}

int posix_bind(int sockfd, const struct sockaddr* addr, unsigned int addrlen) {
    return bind(sockfd, addr, addrlen);
}

int posix_connect(int sockfd, const struct sockaddr* addr, unsigned int addrlen) {
    return connect(sockfd, addr, addrlen);
}

int posix_getsockname(int sockfd, struct sockaddr* addr, unsigned int* addrlen) {
    return getsockname(sockfd, addr, addrlen);
}

int posix_listen(int sockfd, int backlog) {
    return listen(sockfd, backlog);
}

int posix_recv(int sockfd, void* buf, unsigned long len, int flags) {
    return (int)recv(sockfd, buf, len, flags);
}

int posix_recvfrom(int sockfd, void* buf, unsigned long len, int flags,
                   struct sockaddr* from, unsigned int* fromlen) {
    return (int)recvfrom(sockfd, buf, len, flags, from, fromlen);
}

int posix_send(int sockfd, const void* buf, unsigned long len, int flags) {
    return (int)send(sockfd, buf, len, flags);
}

int posix_sendto(int sockfd, const void* buf, unsigned long len, int flags,
                 const struct sockaddr* to, unsigned int tolen) {
    return (int)sendto(sockfd, buf, len, flags, to, tolen);
}

int posix_setsockopt(int sockfd, int level, int optname,
                     const void* optval, unsigned int optlen) {
    return setsockopt(sockfd, level, optname, optval, optlen);
}

int posix_shutdown(int sockfd, int how) {
    return shutdown(sockfd, how);
}

int posix_close(int fd) {
    return close(fd);
}

int posix_ioctl(int fd, unsigned long request, void* argp) {
    return ioctl(fd, request, argp);
}

struct hostent* posix_gethostbyname(const char* name) {
    return gethostbyname(name);
}

unsigned long posix_inet_addr(const char* cp) {
    return (unsigned long)inet_addr(cp);
}

int posix_gethostname(char* name, unsigned long namelen) {
    return gethostname(name, namelen);
}

struct servent* posix_getservbyport(int port, const char* proto) {
    return getservbyport(port, proto);
}
