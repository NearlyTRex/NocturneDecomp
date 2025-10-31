// Name: core_dynamite.cpp_FUN_0049cf90
// Address: 0049cf90
// Address Range: [[0049cf90, 0049cfa6]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cf90()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c6590 (005c6590) at 005c65d3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_dynamite.cpp_FUN_0049cf90(undefined4 param_1) */

bool core_dynamite_cpp_FUN_0049cf90(void)

{
  int in_stack_00000004;
  
  return (*(uint *)(in_stack_00000004 + 0x578) & 0x7fffffff) == 0;
}


// Assembly code:
// 0049cf90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dynamite.cpp_FUN_0049cf90
//   XREF to: Stack[0x4] (READ)
// 0049cf94: TEST dword ptr [EAX + 0x578],0x7fffffff
// 0049cf9e: SETZ AL
// 0049cfa1: AND EAX,0xff
// 0049cfa6: RET
