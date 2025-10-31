// Name: core_dynamite.cpp_FUN_0049cf70
// Address: 0049cf70
// Address Range: [[0049cf70, 0049cf8b]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cf70()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5381 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_dynamite.cpp_FUN_0049cf70(undefined4 param_1) */

undefined4 core_dynamite_cpp_FUN_0049cf70(void)

{
  int in_stack_00000004;
  
  if (0.0 < *(float *)(in_stack_00000004 + 0x578)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 0049cf70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dynamite.cpp_FUN_0049cf70
//   XREF to: Stack[0x4] (READ)
// 0049cf74: FLD float ptr [EAX + 0x578]
// 0049cf7a: FLDZ
// 0049cf7c: FCOMPP
// 0049cf7e: FNSTSW AX
// 0049cf80: SAHF
// 0049cf81: JNC 0x0049cf89
//   XREF to: 0049cf89 (CONDITIONAL_JUMP)
// 0049cf83: MOV EAX,0x1
// 0049cf88: RET
// 0049cf89: XOR EAX,EAX
//   Label: LAB_0049cf89
// 0049cf8b: RET
