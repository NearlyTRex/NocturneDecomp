// Name: core_dracbrid.cpp_FUN_00465370
// Address: 00465370
// Address Range: [[00465370, 004653f4]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_00465370(float param_1,float param_2,float param_3)

#include "nocturne.h"

void core_dracbrid_cpp_FUN_00465370(float param_1,float param_2,float param_3)

{
  float *unaff_ESI;
  byte bVar1;
  float afStackY_1000 [1016];
  float fStack_18;
  float fStack_c;
  
  bVar1 = 0;
  fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
  param_1 = fStack_c + param_1;
  fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
  param_2 = fStack_c + param_2;
  fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
  param_3 = fStack_c + param_3;
  fStack_18 = param_1;
  *(float *)(&stack0xffffffec + (uint)bVar1 * -8) = (&param_2)[(uint)bVar1 * -2];
  *(float *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       (&param_3)[(uint)bVar1 * -2 + (uint)bVar1 * -2];
  *unaff_ESI = fStack_18;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(float *)(&stack0xffffffec + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(float *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
