// Name: core_tvbat.cpp_FUN_005e4d70
// Address: 005e4d70
// Address Range: [[005e4d70, 005e4d7e]]
// Convention: unknown
// Signature: undefined core_tvbat.cpp_FUN_005e4d70()
// Cross-references:
//   core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320 (005e7320) at 005e7373 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_tvbat.cpp_FUN_005e4d70(undefined4 param_1) */

void core_tvbat_cpp_FUN_005e4d70(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0xc068) = 0x40400000;
  return;
}


// Assembly code:
// 005e4d70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_tvbat.cpp_FUN_005e4d70
//   XREF to: Stack[0x4] (READ)
// 005e4d74: MOV dword ptr [EAX + 0xc068],0x40400000
// 005e4d7e: RET
