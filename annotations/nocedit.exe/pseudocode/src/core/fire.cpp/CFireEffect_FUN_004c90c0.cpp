// Name: core_fire.cpp_CFireEffect_FUN_004c90c0
// Address: 004c90c0
// Address Range: [[004c90c0, 004c91d6]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c90c0(CFireEffect * this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c90c0(CFireEffect *this_ptr)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  double dVar3;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  int local_34;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0
                    ((double)((SQRT((in_stack_0000000c[2] - in_stack_00000008[2]) *
                                    (in_stack_0000000c[2] - in_stack_00000008[2]) +
                                    (*in_stack_0000000c - *in_stack_00000008) *
                                    (*in_stack_0000000c - *in_stack_00000008) +
                                    (in_stack_0000000c[1] - in_stack_00000008[1]) *
                                    (in_stack_0000000c[1] - in_stack_00000008[1])) *
                              (float)8) / in_stack_00000010 + 1.0));
  iVar1 = (int)ROUND(dVar3);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_FUN_004c9060(this_ptr);
      iVar2 = iVar2 + 1;
      iVar1 = extraout_EAX;
    } while (iVar2 < local_34);
  }
  return iVar1;
}
