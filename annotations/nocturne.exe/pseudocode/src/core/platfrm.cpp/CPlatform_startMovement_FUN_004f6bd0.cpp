// Name: core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0
// Address: 004f6bd0
// Address Range: [[004f6bd0, 004f6c5f]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0(int param_1,float param_2,uint param_3)

{
  *(float *)(param_1 + 0x2d8) = param_2;
  if (*(float *)(param_1 + 0x2d8) < 0.0) {
    *(uint *)(param_1 + 0x2d8) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x2d8)) {
    *(uint *)(param_1 + 0x2d8) = 0x3f800000;
  }
  *(uint *)(param_1 + 0x2dc) = param_3;
  if (*(float *)(param_1 + 0x2d4) < param_2) {
    *(uint *)(param_1 + 0x2cc) = 3;
  }
  if (param_2 < *(float *)(param_1 + 0x2d4)) {
    *(uint *)(param_1 + 0x2cc) = 4;
  }
  if (*(char *)(param_1 + 0x478) == '\0') {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,param_1 + 0x478);
  return;
}
