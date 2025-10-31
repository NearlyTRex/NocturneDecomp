#pragma once

// Function Definition: WSACleanup
typedef int (*WSACleanup)(void);

// Function Definition: WSAStartup
typedef int (*WSAStartup)(WORD wVersionRequested, LPWSADATA lpWSAData);

// Function Definition: accept
typedef SOCKET (*accept)(SOCKET s, SOCKADDR* addr, int* addrlen);

// Function Definition: bind
typedef int (*bind)(SOCKET s, SOCKADDR* addr, int namelen);

// Function Definition: closesocket
typedef int (*closesocket)(SOCKET s);

// Function Definition: connect
typedef int (*connect)(SOCKET s, SOCKADDR* name, int namelen);

// Function Definition: gethostbyname
typedef HOSTENT* (*gethostbyname)(char* name);

// Function Definition: gethostname
typedef int (*gethostname)(char* name, int namelen);

// Function Definition: getservbyport
typedef SERVENT* (*getservbyport)(int port, char* proto);

// Function Definition: getsockname
typedef int (*getsockname)(SOCKET s, SOCKADDR* name, int* namelen);

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
typedef int (*recvfrom)(SOCKET s, char* buf, int len, int flags, SOCKADDR* from, int* fromlen);

// Function Definition: send
typedef int (*send)(SOCKET s, char* buf, int len, int flags);

// Function Definition: sendto
typedef int (*sendto)(SOCKET s, char* buf, int len, int flags, SOCKADDR* to, int tolen);

// Function Definition: setsockopt
typedef int (*setsockopt)(SOCKET s, int level, int optname, char* optval, int optlen);

// Function Definition: shutdown
typedef int (*shutdown)(SOCKET s, int how);

