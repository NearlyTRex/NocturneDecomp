// Name: core_stranger.cpp_FUN_0056bcc0
// Address: 0056bcc0
// Address Range: [[0056bcc0, 0056bd4a]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0056bcc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_stranger_cpp_FUN_0056bcc0(void)

{
  float fVar1;
  float10 fVar2;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if ((((float)_DAT_005ebc55 <= in_stack_00000008) &&
      (fVar1 = SQRT(in_stack_00000008 * in_stack_00000008 - in_stack_0000000c * in_stack_0000000c) /
               in_stack_00000008, fVar1 < 1.0)) && (0.0 <= fVar1)) {
    fVar2 = (float10)fVar1;
    acos();
    if (in_stack_0000000c < 0.0) {
      fVar1 = *in_stack_00000004 - (float)fVar2;
    }
    else {
      fVar1 = *in_stack_00000004 + (float)fVar2;
    }
    *in_stack_00000004 = fVar1;
    fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(*in_stack_00000004);
    *in_stack_00000004 = fVar1;
  }
  return;
}
