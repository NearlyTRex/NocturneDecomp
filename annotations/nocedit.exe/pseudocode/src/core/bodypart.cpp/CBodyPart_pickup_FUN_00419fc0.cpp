// Name: core_bodypart.cpp_CBodyPart_pickup_FUN_00419fc0
// Address: 00419fc0
// Address Range: [[00419fc0, 00419fce]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_pickup_FUN_00419fc0(CBodyPart * this_ptr, CDemonActor * carrier)

#include "nocturne.h"

void __cdecl
core_bodypart_cpp_CBodyPart_pickup_FUN_00419fc0(CBodyPart *this_ptr,CDemonActor *carrier)

{
  *(CDemonActor **)(this_ptr->field1_0x158 + 0xdd0) = carrier;
  return;
}


// Assembly code:
// 00419fc0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_CBodyPart_pickup_FUN_00419fc0
//   XREF to: Stack[0x4] (READ)
// 00419fc4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00419fc8: MOV dword ptr [EDX + 0xf28],EAX
// 00419fce: RET
