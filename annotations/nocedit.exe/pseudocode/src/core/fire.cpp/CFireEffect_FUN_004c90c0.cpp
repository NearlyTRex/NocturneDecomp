// Name: core_fire.cpp_CFireEffect_FUN_004c90c0
// Address: 004c90c0
// Address Range: [[004c90c0, 004c91d6]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c90c0(CFireEffect * this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c90c0(CFireEffect *this_ptr)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  uint in_EDX;
  int iVar3;
  float10 fVar4;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  
  fVar4 = (float10)1 +
          (SQRT((float10)(in_stack_0000000c[2] - in_stack_00000008[2]) *
                (float10)(in_stack_0000000c[2] - in_stack_00000008[2]) +
                (float10)(*in_stack_0000000c - *in_stack_00000008) *
                (float10)(*in_stack_0000000c - *in_stack_00000008) +
                ((float10)in_stack_0000000c[1] - (float10)in_stack_00000008[1]) *
                (float10)(float)((float10)in_stack_0000000c[1] - (float10)in_stack_00000008[1])) *
          (float10)8) / (float10)in_stack_00000010;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_stack_00000008[2]));
  iVar1 = (int)ROUND(fVar4);
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_FUN_004c9060(this_ptr);
      iVar3 = iVar3 + 1;
      iVar2 = extraout_EAX;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}
