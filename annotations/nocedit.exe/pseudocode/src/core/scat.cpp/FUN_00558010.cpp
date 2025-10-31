// Name: core_scat.cpp_FUN_00558010
// Address: 00558010
// Address Range: [[00558010, 00558036]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558010()
// Cross-references:
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005575e7 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557ea0 (00557ea0) at 00557fb0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00558010(undefined4 param_1) */

undefined4 core_scat_cpp_FUN_00558010(void)

{
  int in_stack_00000004;
  
  if (((*(int *)(in_stack_00000004 + 0x1fbd4) != 0) && (*(int *)(in_stack_00000004 + 0x1fbe8) != 0))
     && (*(int *)(*(int *)(in_stack_00000004 + 0x1fbe8) + 0x2e0) == 8)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00558010: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_scat.cpp_FUN_00558010
//   XREF to: Stack[0x4] (READ)
// 00558014: CMP dword ptr [EAX + 0x1fbd4],0x0
// 0055801b: JZ 0x00558034
//   XREF to: 00558034 (CONDITIONAL_JUMP)
// 0055801d: MOV ECX,dword ptr [EAX + 0x1fbe8]
// 00558023: TEST ECX,ECX
// 00558025: JZ 0x00558034
//   XREF to: 00558034 (CONDITIONAL_JUMP)
// 00558027: CMP dword ptr [ECX + 0x2e0],0x8
// 0055802e: JZ 0x00556e44
//   XREF to: 00556e44 (CONDITIONAL_JUMP)
// 00558034: XOR EAX,EAX
//   Label: LAB_00558034
// 00558036: RET
