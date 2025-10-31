// Name: core_door.cpp_CDoor_FUN_00480de0
// Address: 00480de0
// Address Range: [[00480de0, 00480dee]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_FUN_00480de0(CDoor * this_ptr)
// Cross-references:
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4e84 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9cda [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_FUN_00480de0(CDoor *this_ptr)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)this_ptr->field19_0x9cc = in_stack_00000008;
  return;
}


// Assembly code:
// 00480de0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_door.cpp_CDoor_FUN_00480de0
//   XREF to: Stack[0x4] (READ)
// 00480de4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00480de8: MOV dword ptr [EDX + 0x9cc],EAX
// 00480dee: RET
