// Name: support_trisock.cpp_createNetworkAddr_FUN_005e1940
// Address: 005e1940
// Address Range: [[005e1940, 005e1954]]
// Convention: __cdecl
// Signature: void support_trisock.cpp_createNetworkAddr_FUN_005e1940(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
// Cross-references:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540f66 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToHost_FUN_0053f860 (0053f860) at 0053f8b5 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053f947 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
support_trisock_cpp_createNetworkAddr_FUN_005e1940
          (SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)

{
  dest_addr->ip_address = *ip_address_ptr;
  dest_addr->port = port;
  return;
}


// Assembly code:
// 005e1940: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_trisock.cpp_createNetworkAddr_FUN_005e1940
//   XREF to: Stack[0x4] (READ)
// 005e1944: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005e1948: MOV EDX,dword ptr [EDX]
// 005e194a: MOV dword ptr [EAX],EDX
// 005e194c: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005e1950: MOV word ptr [EAX + 0x4],DX
// 005e1954: RET
