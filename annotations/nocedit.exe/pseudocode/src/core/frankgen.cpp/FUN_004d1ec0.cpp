// Name: core_frankgen.cpp_FUN_004d1ec0
// Address: 004d1ec0
// Address Range: [[004d1ec0, 004d1f1b]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d1ec0()

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d1ec0(uint param_1, uint
   param_2, uint param_3) */

float10 core_frankgen_cpp_FUN_004d1ec0
                  (uint param_1,uint param_2,uint param_3,uint param_4,
                  int param_5,float param_6,float param_7)

{
  float10 in_ST0;
  double dVar1;
  double dVar2;
  
  *(float *)(param_5 + 0x48c) = param_6 * param_7 + *(float *)(param_5 + 0x48c);
  dVar1 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(param_2,param_1));
  *(float *)(param_5 + 0x48c) = *(float *)(param_5 + 0x48c) - (float)(int)ROUND(dVar2);
  return (float10)dVar1;
}
