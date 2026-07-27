// Name: core_stranger.cpp_FUN_0053d700
// Address: 0053d700
// Address Range: [[0053d700, 0053d78a]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0053d700(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_stranger_cpp_FUN_0053d700(void)

{
  float fVar1;
  float10 fVar2;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  uint uVar3;
  
  if ((((float)0.01 <= in_stack_00000008) &&
      (fVar1 = SQRT(in_stack_00000008 * in_stack_00000008 - in_stack_0000000c * in_stack_0000000c) /
               in_stack_00000008, fVar1 < 1.0)) && (0.0 <= fVar1)) {
    uVar3 = 0x53d752;
    fVar2 = (float10)acos((float10)fVar1);
    if (in_stack_0000000c < 0.0) {
      fVar1 = *in_stack_00000004 - (float)fVar2;
    }
    else {
      fVar1 = *in_stack_00000004 + (float)fVar2;
    }
    *in_stack_00000004 = fVar1;
    fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*in_stack_00000004,uVar3);
    *in_stack_00000004 = fVar1;
  }
  return;
}
