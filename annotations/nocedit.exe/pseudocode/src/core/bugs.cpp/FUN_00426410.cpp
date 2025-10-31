// Name: core_bugs.cpp_FUN_00426410
// Address: 00426410
// Address Range: [[00426410, 0042641d]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00426410()
// Cross-references:
//   core_bugs.cpp_FUN_004250f0 (004250f0) at 0042519c [UNCONDITIONAL_CALL]
// Function calls:
//   core_bugs.cpp_FUN_004272f0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00426410(undefined4 param_1) */

void core_bugs_cpp_FUN_00426410(void)

{
  core_bugs_cpp_FUN_004272f0();
  return;
}


// Assembly code:
// 00426410: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_00426410
//   XREF to: Stack[0x4] (READ)
// 00426414: PUSH EDX
// 00426415: CALL core_bugs.cpp_FUN_004272f0
//   XREF to: 004272f0 (UNCONDITIONAL_CALL)
// 0042641a: ADD ESP,0x4
// 0042641d: RET
