// Name: core_ladder.cpp_FUN_00502610
// Address: 00502610
// Address Range: [[00502610, 0050261d]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502610()
// Function calls:
//   core_ladder.cpp_FUN_00502a70

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502610(undefined4 param_1) */

void core_ladder_cpp_FUN_00502610(void)

{
  core_ladder_cpp_FUN_00502a70();
  return;
}


// Assembly code:
// 00502610: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_ladder.cpp_FUN_00502610
//   XREF to: Stack[0x4] (READ)
// 00502614: PUSH EDX
// 00502615: CALL core_ladder.cpp_FUN_00502a70
//   XREF to: 00502a70 (UNCONDITIONAL_CALL)
// 0050261a: ADD ESP,0x4
// 0050261d: RET
