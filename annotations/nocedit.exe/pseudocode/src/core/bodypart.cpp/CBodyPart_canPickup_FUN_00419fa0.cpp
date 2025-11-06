// Name: core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0
// Address: 00419fa0
// Address Range: [[00419fa0, 00419fbe]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0(CBodyPart * this_ptr, CDemonActor * picker)

#include "nocturne.h"

int __cdecl
core_bodypart_cpp_CBodyPart_canPickup_FUN_00419fa0(CBodyPart *this_ptr,CDemonActor *picker)

{
  if ((*(int *)this_ptr->field1_0x158 == 0) && (*(int *)(this_ptr->field1_0x158 + 0xb6c) == 0)) {
    return 3;
  }
  return 0;
}


// Assembly code:
// 00419fa0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0
//   XREF to: Stack[0x4] (READ)
// 00419fa4: CMP dword ptr [EAX + 0x158],0x0
// 00419fab: JNZ 0x00419fb6
//   XREF to: 00419fb6 (CONDITIONAL_JUMP)
// 00419fad: CMP dword ptr [EAX + 0xcc4],0x0
// 00419fb4: JZ 0x00419fb9
//   XREF to: 00419fb9 (CONDITIONAL_JUMP)
// 00419fb6: XOR EAX,EAX
//   Label: LAB_00419fb6
// 00419fb8: RET
// 00419fb9: MOV EAX,0x3
//   Label: LAB_00419fb9
// 00419fbe: RET
