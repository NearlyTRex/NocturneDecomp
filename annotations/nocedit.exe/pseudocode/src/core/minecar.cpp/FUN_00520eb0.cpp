// Name: core_minecar.cpp_FUN_00520eb0
// Address: 00520eb0
// Address Range: [[00520eb0, 00520f1e]]
// Convention: unknown
// Signature: undefined core_minecar.cpp_FUN_00520eb0()

#include "nocturne.h"

/* Signature: byte actors_other_minecar.cpp_FUN_00520eb0(uint param_1, uint
   param_2) */

void core_minecar_cpp_FUN_00520eb0(void)

{
  int in_stack_00000004;
  float in_stack_0000000c;
  
  core_platfrm_cpp_FUN_0054cc30();
  if (((*(int *)(in_stack_00000004 + 0x2d4) == 3) || (*(int *)(in_stack_00000004 + 0x2d4) == 4)) &&
     (in_stack_0000000c = *(float *)(in_stack_00000004 + 0x72c) - in_stack_0000000c,
     *(float *)(in_stack_00000004 + 0x72c) = in_stack_0000000c, in_stack_0000000c < 0.0)) {
    *(uint *)(in_stack_00000004 + 0x72c) = 0x3dcccccd;
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    return;
  }
  return;
}
