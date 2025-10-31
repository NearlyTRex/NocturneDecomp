// Name: support_trisock.cpp_getIPAddress_FUN_005e1930
// Address: 005e1930
// Address Range: [[005e1930, 005e1936]]
// Convention: __cdecl
// Signature: uint support_trisock.cpp_getIPAddress_FUN_005e1930(SNetworkAddr * net_addr)
// Cross-references:
//   support_trisock.cpp_buildSockaddrIn_FUN_005e19d0 (005e19d0) at 005e19f6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

uint __cdecl support_trisock_cpp_getIPAddress_FUN_005e1930(SNetworkAddr *net_addr)

{
  return net_addr->ip_address;
}


// Assembly code:
// 005e1930: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_trisock.cpp_getIPAddress_FUN_005e1930
//   XREF to: Stack[0x4] (READ)
// 005e1934: MOV EAX,dword ptr [EAX]
// 005e1936: RET
