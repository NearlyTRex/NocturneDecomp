// Name: support_trisock.cpp_copyIPAddress_FUN_005e16f0
// Address: 005e16f0
// Address Range: [[005e16f0, 005e16fe]]
// Convention: __cdecl
// Signature: uint * support_trisock.cpp_copyIPAddress_FUN_005e16f0(uint * dest_ip, uint * src_ip)
// Cross-references:
//   support_trisock.cpp_convertSockAddr_FUN_005e1960 (005e1960) at 005e198c [UNCONDITIONAL_CALL]

#include "nocturne.h"

uint * __cdecl support_trisock_cpp_copyIPAddress_FUN_005e16f0(uint *dest_ip,uint *src_ip)

{
  *dest_ip = *src_ip;
  return dest_ip;
}


// Assembly code:
// 005e16f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: support_trisock.cpp_copyIPAddress_FUN_005e16f0
//   XREF to: Stack[0x4] (READ)
// 005e16f4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005e16f8: MOV EAX,dword ptr [EAX]
// 005e16fa: MOV dword ptr [EDX],EAX
// 005e16fc: MOV EAX,EDX
// 005e16fe: RET
