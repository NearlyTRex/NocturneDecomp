// Name: core_event.cpp_FUN_004b1a59
// Address: 004b1a59
// Address Range: [[004b1a59, 004b1a6e]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1a59()

#include "nocturne.h"

char core_event_cpp_FUN_004b1a59
               (char param_1,undefined2 param_2,undefined4 param_3,undefined2 *param_4)

{
  *(char *)(param_4 + 1) = (char)param_2;
  *param_4 = param_2;
  return param_1 + -0x77;
}


// Assembly code:
// 004b1a59: PUSH ECX
//   Label: core_event.cpp_FUN_004b1a59
// 004b1a5a: ADD AL,0x89
// 004b1a5c: ADC ESI,EBX
// 004b1a5e: ENTER 0x4c2,0x0
// 004b1a62: MOV EAX,EAX
// 004b1a64: MOV byte ptr [ECX + 0x2],DL
// 004b1a67: MOV word ptr [ECX],DX
// 004b1a6a: FMULP ST0
// 004b1a6c: RET 0x4
