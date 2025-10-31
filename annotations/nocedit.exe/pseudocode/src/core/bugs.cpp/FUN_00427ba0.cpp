// Name: core_bugs.cpp_FUN_00427ba0
// Address: 00427ba0
// Address Range: [[00427ba0, 00427bcb]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427ba0()
// Cross-references:
//   core_bugs.cpp_FUN_00425b70 (00425b70) at 00425c62 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00555090 (00555090) at 005552e5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00427ba0(undefined4 param_1, undefined4 param_2)
    */

float core_bugs_cpp_FUN_00427ba0(void)

{
  float in_stack_00000004;
  float in_stack_00000008;
  
  if (in_stack_00000008 < in_stack_00000004) {
    return in_stack_00000004;
  }
  return in_stack_00000008;
}


// Assembly code:
// 00427ba0: SUB ESP,0x4
//   Label: core_bugs.cpp_FUN_00427ba0
// 00427ba3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00427ba7: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00427bab: FNSTSW AX
// 00427bad: SAHF
// 00427bae: JBE 0x00427bbe
//   XREF to: 00427bbe (CONDITIONAL_JUMP)
// 00427bb0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00427bb4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4] (DATA)
// 00427bb7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00427bba: ADD ESP,0x4
// 00427bbd: RET
// 00427bbe: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00427bbe
//   XREF to: Stack[0x8] (READ)
// 00427bc2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4] (DATA)
// 00427bc5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00427bc8: ADD ESP,0x4
// 00427bcb: RET
