// Name: core_melee.cpp_FUN_0050ebe0
// Address: 0050ebe0
// Address Range: [[0050ebe0, 0050ec0e]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050ebe0()
// Cross-references:
//   core_melee.cpp_FUN_0050eb50 (0050eb50) at 0050eb82 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_FUN_0050ebe0(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_melee_cpp_FUN_0050ebe0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0x598) = 0x3f800000;
  *(undefined4 *)(in_stack_00000004 + 0x58c) = in_stack_0000000c;
  *(undefined4 *)(in_stack_00000004 + 0x594) = *(undefined4 *)(in_stack_00000004 + 0x598);
  *(undefined4 *)(in_stack_00000004 + 0x590) = in_stack_00000008;
  return;
}


// Assembly code:
// 0050ebe0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_melee.cpp_FUN_0050ebe0
//   XREF to: Stack[0x4] (READ)
// 0050ebe4: MOV dword ptr [EAX + 0x598],0x3f800000
// 0050ebee: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0050ebf2: FLD float ptr [EAX + 0x598]
// 0050ebf8: MOV dword ptr [EAX + 0x58c],EDX
// 0050ebfe: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0050ec02: FSTP float ptr [EAX + 0x594]
// 0050ec08: MOV dword ptr [EAX + 0x590],EDX
// 0050ec0e: RET
