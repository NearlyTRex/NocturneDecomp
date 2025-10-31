// Name: cockpit_pkbmpset.cpp_alignTo4ByteBoundary_FUN_0054bcc0
// Address: 0054bcc0
// Address Range: [[0054bcc0, 0054bcc9]]
// Convention: __cdecl
// Signature: int cockpit_pkbmpset.cpp_alignTo4ByteBoundary_FUN_0054bcc0(int value)

#include "nocturne.h"

int __cdecl cockpit_pkbmpset_cpp_alignTo4ByteBoundary_FUN_0054bcc0(int value)

{
  return value + 3U & 0xfffffffc;
}


// Assembly code:
// 0054bcc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_pkbmpset.cpp_alignTo4ByteBoundary_FUN_0054bcc0
//   XREF to: Stack[0x4] (READ)
// 0054bcc4: ADD EAX,0x3
// 0054bcc7: AND AL,0xfc
// 0054bcc9: RET
