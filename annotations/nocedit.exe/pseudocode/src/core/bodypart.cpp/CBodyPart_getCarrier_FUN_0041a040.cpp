// Name: core_bodypart.cpp_CBodyPart_getCarrier_FUN_0041a040
// Address: 0041a040
// Address Range: [[0041a040, 0041a04a]]
// Convention: __cdecl
// Signature: CDemonActor * core_bodypart.cpp_CBodyPart_getCarrier_FUN_0041a040(CBodyPart * this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_0041a040(CBodyPart *this_ptr)

{
  return *(CDemonActor **)(this_ptr->field1_0x158 + 0xdd0);
}


// Assembly code:
// 0041a040: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_CBodyPart_getCarrier_FUN_0041a040
//   XREF to: Stack[0x4] (READ)
// 0041a044: MOV EAX,dword ptr [EAX + 0xf28]
// 0041a04a: RET
