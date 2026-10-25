// =============================================================================
// WINSOCK — the game's socket calls, made on the host's sockets
// =============================================================================
//
// The game speaks Winsock with Winsock's numbers. Each case makes the calls it
// makes, through the function pointers it calls them by, on loopback, and
// checks what arrives.

#include "globals/globals_610000.h"
#include "nocturne_test.h"
#include "system/winsock.h"
#include "win32/shim_init.h"

#include <cstdlib>
#include <cstring>
#include <string>

namespace {

// The values the game passes, which are Winsock's.
const int kAfInet = 2;
const int kSockStream = 1;
const int kSockDgram = 2;
const int kSolSocket = 0xffff;
const long kFionbio = -0x7ffb9982; // 0x8004667E, as the game spells it

ushort port_of(const SOCKADDR &address) {
    return ntohs(address.sin_port);
}

SOCKADDR loopback(ushort port) {
    SOCKADDR address;
    memset(&address, 0, sizeof(address));
    address.sin_family = (short)kAfInet;
    address.sin_port = htons(port);
    address.sin_addr = (int)inet_addr("127.0.0.1");
    return address;
}

// A UDP socket bound to a loopback port the system picks.
_SOCKET bound_udp(SOCKADDR *where) {
    _SOCKET s = g_socketFunc(kAfInet, kSockDgram, 0);
    SOCKADDR address = loopback(0);
    CHECK_EQ(g_bindFunc(s, &address, (int)sizeof(address)), 0);
    int length = (int)sizeof(*where);
    CHECK_EQ(g_getsocknameFunc(s, where, &length), 0);
    return s;
}

void set_env(const char *name, const char *value) {
#if defined(_WIN32)
    _putenv_s(name, value);
#else
    setenv(name, value, 1);
#endif
}

} // namespace

NOCTURNE_TEST(byte_order_is_network_order) {
    shims_init_winsock();
    CHECK_EQ((unsigned)g_htonsFunc(0x1234), 0x3412u);
    CHECK_EQ((unsigned)g_ntohsFunc(0x3412), 0x1234u);
    CHECK_EQ((unsigned long)htonl(0x12345678ul), 0x78563412ul);
    CHECK_EQ((unsigned long)ntohl(0x78563412ul), 0x12345678ul);
}

NOCTURNE_TEST(starting_winsock_reports_the_version_asked_for) {
    shims_init_winsock();
    WSADATA data;
    memset(&data, 0xAB, sizeof(data));
    CHECK_EQ(g_WSAStartupFunc(0x0101, &data), 0);
    CHECK_EQ((unsigned)data.wVersion, 0x0101u);
    CHECK_EQ((unsigned)data.wHighVersion, 0x0101u);
    CHECK_EQ(g_WSAStartupFunc(0x0101, nullptr), 0);
    CHECK_EQ(g_WSACleanupFunc(), 0);
}

// The lobby's datagrams: sent to a port, received with who sent them.
NOCTURNE_TEST(a_datagram_reaches_the_port_it_was_sent_to) {
    shims_init_winsock();
    SOCKADDR here;
    _SOCKET s = bound_udp(&here);
    CHECK(port_of(here) != 0);

    char hello[] = "hello";
    CHECK_EQ(g_sendtoFunc(s, hello, 5, 0, &here, (int)sizeof(here)), 5);
    char got[16] = {};
    SOCKADDR from;
    int from_length = (int)sizeof(from);
    CHECK_EQ(g_recvfromFunc(s, got, (int)sizeof(got), 0, &from, &from_length), 5);
    CHECK_EQ(std::string(got), std::string("hello"));
    CHECK_EQ(port_of(from), port_of(here));

    // Who it came from is optional to ask.
    CHECK_EQ(g_sendtoFunc(s, hello, 5, 0, &here, (int)sizeof(here)), 5);
    CHECK_EQ(g_recvfromFunc(s, got, (int)sizeof(got), 0, nullptr, nullptr), 5);
    CHECK_EQ(g_closesocketFunc(s), 0);
}

// The game's FIONBIO is a negative int; non-blocking, a read with nothing there
// returns at once rather than waiting, and blocking can be put back.
NOCTURNE_TEST(a_socket_can_be_made_non_blocking_with_the_games_fionbio) {
    shims_init_winsock();
    SOCKADDR here;
    _SOCKET s = bound_udp(&here);
    ULONG on = 1;
    CHECK_EQ(g_ioctlsocketFunc(s, kFionbio, &on), 0);
    char got[4];
    CHECK_EQ(g_recvFunc(s, got, (int)sizeof(got), 0), -1);
    ULONG off = 0;
    CHECK_EQ(g_ioctlsocketFunc(s, kFionbio, &off), 0);
    // Nowhere to read the setting from is a fault, as Winsock has it.
    CHECK_EQ(g_ioctlsocketFunc(s, kFionbio, nullptr), -1);
    // Another request goes to the host as it is.
    CHECK(g_ioctlsocketFunc(s, 0x12345, &on) != 0);
    g_closesocketFunc(s);
    // A socket that is not one is refused.
    CHECK_EQ(g_ioctlsocketFunc(s, kFionbio, &on), -1);
}

// The game turns broadcast on with Winsock's SOL_SOCKET and SO_BROADCAST, as
// the lobby needs; the other socket options it could ask for mean the same.
NOCTURNE_TEST(socket_options_are_set_with_winsocks_numbers) {
    shims_init_winsock();
    SOCKADDR here;
    _SOCKET s = bound_udp(&here);
    int on = 1;
    char *value = (char *)&on;
    CHECK_EQ(g_setsockoptFunc(s, kSolSocket, 0x0020, value, 4), 0); // SO_BROADCAST
    CHECK_EQ(g_setsockoptFunc(s, kSolSocket, 0x0004, value, 4), 0); // SO_REUSEADDR
    // SO_KEEPALIVE is a stream socket's: Winsock refuses it on a datagram one.
    _SOCKET stream = g_socketFunc(kAfInet, kSockStream, 0);
    CHECK_EQ(g_setsockoptFunc(stream, kSolSocket, 0x0008, value, 4), 0);
    g_closesocketFunc(stream);
    int size = 65536;
    CHECK_EQ(g_setsockoptFunc(s, kSolSocket, 0x1001, (char *)&size, 4), 0); // SO_SNDBUF
    CHECK_EQ(g_setsockoptFunc(s, kSolSocket, 0x1002, (char *)&size, 4), 0); // SO_RCVBUF
    // An option with no counterpart is refused rather than taken as another.
    CHECK(g_setsockoptFunc(s, kSolSocket, 0x7777, value, 4) != 0);
    // Another level goes through as it is: IPPROTO_IP's TTL.
    CHECK_EQ(g_setsockoptFunc(s, 0, 4, value, 4), 0);

    // A broadcast datagram can now be sent.
    SOCKADDR everyone = loopback(port_of(here));
    everyone.sin_addr = (int)inet_addr("255.255.255.255");
    char ping[] = "x";
    CHECK(g_sendtoFunc(s, ping, 1, 0, &everyone, (int)sizeof(everyone)) >= 0);
    g_closesocketFunc(s);
}

// A stream connection end to end: listen, connect, accept, send, receive, shut.
NOCTURNE_TEST(a_stream_connection_carries_bytes_both_ways) {
    shims_init_winsock();
    _SOCKET server = g_socketFunc(kAfInet, kSockStream, 0);
    SOCKADDR address = loopback(0);
    CHECK_EQ(g_bindFunc(server, &address, (int)sizeof(address)), 0);
    int length = (int)sizeof(address);
    CHECK_EQ(g_getsocknameFunc(server, &address, &length), 0);
    CHECK_EQ(g_listenFunc(server, 1), 0);

    _SOCKET client = g_socketFunc(kAfInet, kSockStream, 0);
    CHECK_EQ(g_connectFunc(client, &address, (int)sizeof(address)), 0);
    SOCKADDR peer;
    int peer_length = (int)sizeof(peer);
    _SOCKET accepted = g_acceptFunc(server, &peer, &peer_length);
    CHECK(accepted != (_SOCKET)-1);

    char word[] = "abc";
    CHECK_EQ(g_sendFunc(client, word, 3, 0), 3);
    char got[8] = {};
    CHECK_EQ(g_recvFunc(accepted, got, (int)sizeof(got), 0), 3);
    CHECK_EQ(std::string(got), std::string("abc"));
    CHECK_EQ(shutdown(client, 2), 0);

    // Accepting without asking who, and on something not listening.
    _SOCKET second = g_socketFunc(kAfInet, kSockStream, 0);
    CHECK_EQ(g_connectFunc(second, &address, (int)sizeof(address)), 0);
    _SOCKET unnamed = g_acceptFunc(server, nullptr, nullptr);
    CHECK(unnamed != (_SOCKET)-1);
    CHECK_EQ(g_acceptFunc(client, &peer, &peer_length), (_SOCKET)-1);
    g_closesocketFunc(unnamed);
    g_closesocketFunc(second);
    g_closesocketFunc(accepted);
    g_closesocketFunc(client);
    g_closesocketFunc(server);

    // A socket of a kind there is none of.
    CHECK_EQ(g_socketFunc(-1, -1, -1), (_SOCKET)-1);
    // getsockname without a length to fill.
    CHECK(g_getsocknameFunc(server, &address, nullptr) != 0);
}

// The game binds INADDR_ANY. With a bind address set, that is taken instead, so
// two instances on one machine can each hold the game's port on their own
// loopback address; a specific address asked for is kept.
NOCTURNE_TEST(any_address_is_the_configured_bind_address_when_there_is_one) {
    shims_init_winsock();
    set_env("NOCTURNE_NET_BIND", "127.0.0.1");
    _SOCKET s = g_socketFunc(kAfInet, kSockDgram, 0);
    SOCKADDR any = loopback(0);
    any.sin_addr = 0;
    CHECK_EQ(g_bindFunc(s, &any, (int)sizeof(any)), 0);
    SOCKADDR here;
    int length = (int)sizeof(here);
    g_getsocknameFunc(s, &here, &length);
    CHECK_EQ((unsigned)here.sin_addr, (unsigned)inet_addr("127.0.0.1"));
    g_closesocketFunc(s);

    // Without one, INADDR_ANY is what is bound.
    set_env("NOCTURNE_NET_BIND", "");
    s = g_socketFunc(kAfInet, kSockDgram, 0);
    CHECK_EQ(g_bindFunc(s, &any, (int)sizeof(any)), 0);
    g_getsocknameFunc(s, &here, &length);
    CHECK_EQ(here.sin_addr, 0);
    g_closesocketFunc(s);

    // No address is the host's to refuse.
    s = g_socketFunc(kAfInet, kSockDgram, 0);
    CHECK(g_bindFunc(s, nullptr, 0) != 0);
    g_closesocketFunc(s);
}

// The lookups go to the host's resolver.
NOCTURNE_TEST(names_resolve_through_the_host) {
    CHECK_EQ((unsigned long)inet_addr("1.2.3.4"), (unsigned long)htonl(0x01020304ul));
    char name[256] = {};
    CHECK_EQ(gethostname(name, (int)sizeof(name)), 0);
    CHECK(name[0] != '\0');
    CHECK(gethostbyname("localhost") != nullptr);
    getservbyport(htons(80), "tcp");
}

NOCTURNE_TEST_MAIN()
