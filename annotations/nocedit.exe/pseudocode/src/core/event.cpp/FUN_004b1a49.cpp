// Name: core_event.cpp_FUN_004b1a49
// Address: 004b1a49
// Address Range: [[004b1a49, 004b1a55]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1a49()

#include "nocturne.h"

void core_event_cpp_FUN_004b1a49
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *(short *)(param_4 + 1) = (short)param_2;
  *param_4 = param_2;
  return;
}


// Assembly code:
// 004b1a49: PUSH ECX
//   Label: core_event.cpp_FUN_004b1a49
// 004b1a4a: PUSH ES
// 004b1a4b: MOV word ptr [ECX + 0x4],DX
// 004b1a4f: MOV dword ptr [ECX],EDX
// 004b1a51: FMULP ST0
// 004b1a53: RET 0x4
