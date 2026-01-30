// Name: core_stranger.cpp_FUN_005c3750
// Address: 005c3750
// Address Range: [[005c3750, 005c37da]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_005c3750(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_FUN_005c3750(void)

{
  float fVar1;
  double dVar2;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if ((((float)0.01 <= in_stack_00000008) &&
      (dVar2 = (double)(SQRT(in_stack_00000008 * in_stack_00000008 -
                             in_stack_0000000c * in_stack_0000000c) / in_stack_00000008),
      dVar2 < 1.0)) && (0.0 <= dVar2)) {
    dVar2 = acos(dVar2);
    if (in_stack_0000000c < 0.0) {
      fVar1 = *in_stack_00000004 - (float)dVar2;
    }
    else {
      fVar1 = *in_stack_00000004 + (float)dVar2;
    }
    *in_stack_00000004 = fVar1;
    fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(*in_stack_00000004);
    *in_stack_00000004 = fVar1;
  }
  return;
}
