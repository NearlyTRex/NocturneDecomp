// Name: core_set.cpp_CDemonSet_FUN_00570ea0
// Address: 00570ea0
// Address Range: [[00570ea0, 00570eb6]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570ea0(CDemonSet * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055cc94 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570ec0 (00570ec0) at 00570ef7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570ea0(CDemonSet *this_ptr)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  
  this_ptr->cameras[in_stack_00000008].field17_0x1a0 = in_stack_0000000c;
  return;
}


// Assembly code:
// 00570ea0: IMUL EAX,dword ptr [ESP + 0x8],0x1a4
//   Label: core_set.cpp_CDemonSet_FUN_00570ea0
//   XREF to: Stack[0x8] (READ)
// 00570ea8: ADD EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00570eac: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00570eb0: MOV dword ptr [EAX + 0x1a4],EDX
// 00570eb6: RET
