#pragma once

// Function prototypes for support/trisock.cpp
// Generated from Ghidra function signatures

// Original: support_trisock.cpp_staticInit_FUN_005e16b0
// Address: 005e16b0
void __cdecl staticInit(void);

// Original: support_trisock.cpp_copyIPAddress_FUN_005e16f0
// Address: 005e16f0
uint * __cdecl copyIPAddress(uint *dest_ip,uint *src_ip);

// Original: support_trisock.cpp_parseIPAddress_FUN_005e1700
// Address: 005e1700
uint __cdecl parseIPAddress(uint *result_ptr,char *dotted_decimal_string);

// Original: support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
// Address: 005e1750
uint8_t * __cdecl buildIPAddressOrDie(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4);

// Original: support_trisock.cpp_formatIPAddress_FUN_005e17c0
// Address: 005e17c0
void __cdecl formatIPAddress(char *output_buffer,uchar *ip_bytes);

// Original: support_trisock.cpp_parseIPComponents_FUN_005e1800
// Address: 005e1800
int __cdecl parseIPComponents(uint *result_ptr,char *dotted_decimal_string);

// Original: support_trisock.cpp_buildIPAddress_FUN_005e1870
// Address: 005e1870
int __cdecl buildIPAddress(uint8_t *dest_ip,int octet1,int octet2,int octet3,int octet4);

// Original: support_trisock.cpp_extractIPOctets_FUN_005e18e0
// Address: 005e18e0
void __cdecl extractIPOctets(uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr);

// Original: support_trisock.cpp_getIPAddress_FUN_005e1930
// Address: 005e1930
uint __cdecl getIPAddress(SNetworkAddr *net_addr);

// Original: support_trisock.cpp_createNetworkAddr_FUN_005e1940
// Address: 005e1940
void __cdecl createNetworkAddr(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port);

// Original: support_trisock.cpp_convertSockAddr_FUN_005e1960
// Address: 005e1960
SOCKADDR_IN * __cdecl convertSockAddr(SNetworkAddr *dest_addr,SOCKADDR *src_addr);

// Original: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
// Address: 005e19d0
SOCKADDR_IN * __stack_esi buildSockaddrIn(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer);

// Original: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
// Address: 005e1a30
void __cdecl formatSocketAddress(char *output_buffer,SNetworkAddr *network_addr);

// Original: support_trisock.cpp_shouldNeverBeCalled1_FUN_005e1a80
// Address: 005e1a80
int __cdecl shouldNeverBeCalled1(int unknown1,int unknown2);

// Original: support_trisock.cpp_shouldNeverBeCalled2_FUN_005e1ab0
// Address: 005e1ab0
int __cdecl shouldNeverBeCalled2(int unknown1,int unknown2);

// Original: support_trisock.cpp_invalidateSocket_FUN_005e1ae0
// Address: 005e1ae0
_SOCKET * __cdecl invalidateSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_bindSocketWrapper_FUN_005e1af0
// Address: 005e1af0
_SOCKET * __cdecl bindSocketWrapper(_SOCKET *socket_handle);

// Original: support_trisock.cpp_createSocket_FUN_005e1b10
// Address: 005e1b10
int __cdecl createSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_createUDPSocket_FUN_005e1b40
// Address: 005e1b40
int __cdecl createUDPSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_isSocketValid_FUN_005e1b70
// Address: 005e1b70
int __cdecl isSocketValid(_SOCKET *socket_handle);

// Original: support_trisock.cpp_bindSocket_FUN_005e1b80
// Address: 005e1b80
int __cdecl bindSocket(_SOCKET *socket_handle,uint16_t port);

// Original: support_trisock.cpp_connectSocket_FUN_005e1bd0
// Address: 005e1bd0
int __cdecl connectSocket(_SOCKET *socket_handle,SNetworkAddr *dest_addr);

// Original: support_trisock.cpp_receiveSocketData_FUN_005e1c20
// Address: 005e1c20
int __cdecl receiveSocketData(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr);

// Original: support_trisock.cpp_performSocketOperation_FUN_005e1ca0
// Address: 005e1ca0
int __cdecl performSocketOperation(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *dest_addr);

// Original: support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
// Address: 005e1d20
int __cdecl bindAndInvalidateSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_listenSocket_FUN_005e1d60
// Address: 005e1d60
int __cdecl listenSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_acceptConnection_FUN_005e1d80
// Address: 005e1d80
int __cdecl acceptConnection(_SOCKET *listen_socket,SNetworkAddr *client_addr,_SOCKET *new_socket);

// Original: support_trisock.cpp_getSocketName_FUN_005e1df0
// Address: 005e1df0
int __cdecl getSocketName(_SOCKET *socket_handle,SNetworkAddr *out_address);

// Original: support_trisock.cpp_setSocketBlocking_FUN_005e1e50
// Address: 005e1e50
int __cdecl setSocketBlocking(_SOCKET *socket_handle,int blocking_mode);

// Original: support_trisock.cpp_setSocketBroadcast_FUN_005e1e90
// Address: 005e1e90
int __cdecl setSocketBroadcast(_SOCKET *socket_handle,int broadcast_flag);

// Original: support_trisock.cpp_startupWinsock_FUN_005e1ec0
// Address: 005e1ec0
int __cdecl startupWinsock(void);

// Original: support_trisock.cpp_cleanupWinsock_FUN_005e1ee0
// Address: 005e1ee0
int __cdecl cleanupWinsock(void);
