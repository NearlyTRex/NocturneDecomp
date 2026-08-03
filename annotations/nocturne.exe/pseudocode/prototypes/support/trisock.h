#pragma once

// Function prototypes for support/trisock.cpp
// Generated from Ghidra function signatures

// Original: support_trisock.cpp_staticInit_FUN_00548aa0
// Address: 00548aa0
void __cdecl staticInit(void);

// Original: support_trisock.cpp_copyIPAddress_FUN_00548ae0
// Address: 00548ae0
uint * __cdecl copyIPAddress(uint *dest_ip,uint *src_ip);

// Original: support_trisock.cpp_parseIPAddress_FUN_00548af0
// Address: 00548af0
uint * __cdecl parseIPAddress(uint *result_ptr,char *dotted_decimal_string);

// Original: support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40
// Address: 00548b40
uint8_t * __cdecl buildIPAddressOrDie(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4);

// Original: support_trisock.cpp_formatIPAddress_FUN_00548bb0
// Address: 00548bb0
void __cdecl formatIPAddress(char *output_buffer,uchar *ip_bytes);

// Original: support_trisock.cpp_parseIPComponents_FUN_00548bf0
// Address: 00548bf0
int __cdecl parseIPComponents(uint *result_ptr,char *dotted_decimal_string);

// Original: support_trisock.cpp_buildIPAddress_FUN_00548c60
// Address: 00548c60
int __cdecl buildIPAddress(uint8_t *dest_ip,int octet1,int octet2,int octet3,int octet4);

// Original: support_trisock.cpp_extractIPOctets_FUN_00548cd0
// Address: 00548cd0
void __cdecl extractIPOctets(uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr);

// Original: support_trisock.cpp_getIPAddress_FUN_00548d20
// Address: 00548d20
uint __cdecl getIPAddress(SNetworkAddr *net_addr);

// Original: support_trisock.cpp_createNetworkAddr_FUN_00548d30
// Address: 00548d30
void __cdecl createNetworkAddr(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port);

// Original: support_trisock.cpp_convertSockAddr_FUN_00548d50
// Address: 00548d50
SOCKADDR_IN * __cdecl convertSockAddr(SNetworkAddr *dest_addr,SOCKADDR *src_addr);

// Original: support_trisock.cpp_buildSockaddrIn_FUN_00548dc0
// Address: 00548dc0
SOCKADDR_IN * __stack_esi buildSockaddrIn(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer);

// Original: support_trisock.cpp_formatSocketAddress_FUN_00548e20
// Address: 00548e20
void __cdecl formatSocketAddress(char *output_buffer,SNetworkAddr *network_addr);

// Original: support_trisock.cpp_shouldNeverBeCalled1_FUN_00548e70
// Address: 00548e70
int __cdecl shouldNeverBeCalled1(int unknown1,int unknown2);

// Original: support_trisock.cpp_shouldNeverBeCalled2_FUN_00548ea0
// Address: 00548ea0
int __cdecl shouldNeverBeCalled2(int unknown1,int unknown2);

// Original: support_trisock.cpp_invalidateSocket_FUN_00548ed0
// Address: 00548ed0
_SOCKET * __cdecl invalidateSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_bindSocketWrapper_FUN_00548ee0
// Address: 00548ee0
_SOCKET * __cdecl bindSocketWrapper(_SOCKET *socket_handle,int flags);

// Original: support_trisock.cpp_createSocket_FUN_00548f00
// Address: 00548f00
int __cdecl createSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_createUDPSocket_FUN_00548f30
// Address: 00548f30
int __cdecl createUDPSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_isSocketValid_FUN_00548f60
// Address: 00548f60
int __cdecl isSocketValid(_SOCKET *socket_handle);

// Original: support_trisock.cpp_bindSocket_FUN_00548f70
// Address: 00548f70
int __cdecl bindSocket(_SOCKET *socket_handle,uint16_t port);

// Original: support_trisock.cpp_connectSocket_FUN_00548fc0
// Address: 00548fc0
int __cdecl connectSocket(_SOCKET *socket_handle,SNetworkAddr *dest_addr);

// Original: support_trisock.cpp_receiveSocketData_FUN_00549010
// Address: 00549010
int __cdecl receiveSocketData(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr);

// Original: support_trisock.cpp_performSocketOperation_FUN_00549090
// Address: 00549090
int __cdecl performSocketOperation(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *dest_addr);

// Original: support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110
// Address: 00549110
int __cdecl bindAndInvalidateSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_listenSocket_FUN_00549150
// Address: 00549150
int __cdecl listenSocket(_SOCKET *socket_handle);

// Original: support_trisock.cpp_acceptConnection_FUN_00549170
// Address: 00549170
int __cdecl acceptConnection(_SOCKET *listen_socket,SNetworkAddr *client_addr,_SOCKET *new_socket);

// Original: support_trisock.cpp_getSocketName_FUN_005491e0
// Address: 005491e0
int __cdecl getSocketName(_SOCKET *socket_handle,SNetworkAddr *out_address);

// Original: support_trisock.cpp_setSocketBlocking_FUN_00549240
// Address: 00549240
int __cdecl setSocketBlocking(_SOCKET *socket_handle,int blocking_mode);

// Original: support_trisock.cpp_startupWinsock_FUN_00549280
// Address: 00549280
int __cdecl startupWinsock(void);
