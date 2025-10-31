// Name: shape_meshlod.cpp_FUN_00515e90
// Address: 00515e90
// Address Range: [[00515e90, 00515eba]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00515e90()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516000 (00516000) at 005163a4 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00517630 (00517630) at 005182d0 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00518490 (00518490) at 0051856b [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ee30 (0051ee30) at 0051ee3a [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00515e90(undefined4 param_1, undefined4 param_2) */

undefined4 shape_meshlod_cpp_FUN_00515e90(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == *(int *)(in_stack_00000004 + 0x10)) {
    return 0;
  }
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0x14)) {
    if (in_stack_00000008 == *(int *)(in_stack_00000004 + 0x18)) {
      return 2;
    }
    return 0xffffffff;
  }
  return 1;
}


// Assembly code:
// 00515e90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_00515e90
//   XREF to: Stack[0x4] (READ)
// 00515e94: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00515e98: CMP EDX,dword ptr [EAX + 0x10]
// 00515e9b: JZ 0x005151dd
//   XREF to: 005151dd (CONDITIONAL_JUMP)
// 00515ea1: CMP EDX,dword ptr [EAX + 0x14]
// 00515ea4: JZ 0x005151d7
//   XREF to: 005151d7 (CONDITIONAL_JUMP)
// 00515eaa: CMP EDX,dword ptr [EAX + 0x18]
// 00515ead: JNZ 0x00515eb5
//   XREF to: 00515eb5 (CONDITIONAL_JUMP)
// 00515eaf: MOV EAX,0x2
// 00515eb4: RET
// 00515eb5: MOV EAX,0xffffffff
//   Label: LAB_00515eb5
// 00515eba: RET
