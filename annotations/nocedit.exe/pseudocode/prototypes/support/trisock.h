#pragma once

// Function prototypes for support/trisock.cpp
// Generated from Ghidra function signatures

// Original: support_trisock.cpp_staticInit_FUN_005e16b0
// Address: 005e16b0
void staticInit(void);

// Original: support_trisock.cpp_copyIPAddress_FUN_005e16f0
// Address: 005e16f0
uint * copyIPAddress(uint * dest_ip, uint * src_ip);

// Original: support_trisock.cpp_parseIPAddress_FUN_005e1700
// Address: 005e1700
uint parseIPAddress(uint * result_ptr, char * dotted_decimal_string);

// Original: support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
// Address: 005e1750
uint8_t * buildIPAddressOrDie(uchar * dest_ip, int octet1, int octet2, int octet3, int octet4);

// Original: support_trisock.cpp_formatIPAddress_FUN_005e17c0
// Address: 005e17c0
void formatIPAddress(char * output_buffer, uchar * ip_bytes);

// Original: support_trisock.cpp_parseIPComponents_FUN_005e1800
// Address: 005e1800
int parseIPComponents(uint * result_ptr, char * dotted_decimal_string);

// Original: support_trisock.cpp_buildIPAddress_FUN_005e1870
// Address: 005e1870
int buildIPAddress(uint8_t * dest_ip, int octet1, int octet2, int octet3, int octet4);

// Original: support_trisock.cpp_extractIPOctets_FUN_005e18e0
// Address: 005e18e0
void extractIPOctets(uchar * ip_bytes, uint * octet1_ptr, uint * octet2_ptr, uint * octet3_ptr, uint * octet4_ptr);

// Original: support_trisock.cpp_getIPAddress_FUN_005e1930
// Address: 005e1930
uint getIPAddress(SNetworkAddr * net_addr);

// Original: support_trisock.cpp_createNetworkAddr_FUN_005e1940
// Address: 005e1940
void createNetworkAddr(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port);

// Original: support_trisock.cpp_convertSockAddr_FUN_005e1960
// Address: 005e1960
SOCKADDR_IN * convertSockAddr(SOCKADDR_IN * dest_addr, SOCKADDR * src_addr);

// Original: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
// Address: 005e19d0
SOCKADDR_IN * buildSockaddrIn(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer);

// Original: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
// Address: 005e1a30
void formatSocketAddress(char * output_buffer, SNetworkAddr * network_addr);

// Original: support_trisock.cpp_shouldNeverBeCalled_FUN_005e1a80
// Address: 005e1a80
int shouldNeverBeCalled(int unknown1, int unknown2);

// Original: support_trisock.cpp_shouldNeverBeCalled_FUN_005e1ab0
// Address: 005e1ab0
int shouldNeverBeCalled(int unknown1, int unknown2);

// Original: support_trisock.cpp_invalidateSocket_FUN_005e1ae0
// Address: 005e1ae0
void invalidateSocket(SSocketContext * socket_ctx);

// Original: support_trisock.cpp_bindSocketWrapper_FUN_005e1af0
// Address: 005e1af0
SSocketContext * bindSocketWrapper(SSocketContext * socket_ctx);

// Original: support_trisock.cpp_createSocket_FUN_005e1b10
// Address: 005e1b10
int createSocket(SSocketContext * socket_ctx);

// Original: support_trisock.cpp_createUDPSocket_FUN_005e1b40
// Address: 005e1b40
int createUDPSocket(SSocketContext * socket_ctx);

// Original: support_trisock.cpp_isSocketValid_FUN_005e1b70
// Address: 005e1b70
int isSocketValid(SSocketContext * socket_ctx);

// Original: support_trisock.cpp_bindSocket_FUN_005e1b80
// Address: 005e1b80
int bindSocket(uint16_t port, SOCKET * socket_handle);

// Original: support_trisock.cpp_connectSocket_FUN_005e1bd0
// Address: 005e1bd0
int connectSocket(SOCKET * socket_handle, SNetworkAddr * dest_addr);

// Original: support_trisock.cpp_receiveSocketData_FUN_005e1c20
// Address: 005e1c20
int receiveSocketData(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * source_addr);

// Original: support_trisock.cpp_performSocketOperation_FUN_005e1ca0
// Address: 005e1ca0
int performSocketOperation(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * dest_addr);

// Original: support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
// Address: 005e1d20
int bindAndInvalidateSocket(SSocketContext * socket_ctx);

// Original: support_trisock.cpp_listenSocket_FUN_005e1d60
// Address: 005e1d60
int listenSocket(SOCKET * socket_handle);

// Original: support_trisock.cpp_acceptConnection_FUN_005e1d80
// Address: 005e1d80
int acceptConnection(SOCKET * listen_socket, SNetworkAddr * client_addr, SOCKET * new_socket);

// Original: support_trisock.cpp_getSocketName_FUN_005e1df0
// Address: 005e1df0
int getSocketName(SOCKET * socket_handle, SNetworkAddr * param_2);

// Original: support_trisock.cpp_setSocketBlocking_FUN_005e1e50
// Address: 005e1e50
int setSocketBlocking(SOCKET * socket_handle, int blocking_mode);

// Original: support_trisock.cpp_setSocketBroadcast_FUN_005e1e90
// Address: 005e1e90
int setSocketBroadcast(SOCKET * socket_handle, int broadcast_flag);

// Original: support_trisock.cpp_startupWinsock_FUN_005e1ec0
// Address: 005e1ec0
int startupWinsock(void);

// Original: support_trisock.cpp_cleanupWinsock_FUN_005e1ee0
// Address: 005e1ee0
int cleanupWinsock(WORD wVersionRequested, LPWSADATA lpWSAData);
