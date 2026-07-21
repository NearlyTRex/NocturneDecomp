// Name: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
// Address: 0040a240
// Address Range: [[0040a240, 0040a285]]
// Convention: __cdecl
// Signature: float * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(int param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

float * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(int param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  byte local_10 [12];
  
  pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                              (param_1 + 0x3c,local_10,param_3);
  *param_2 = *pfVar1 + *(float *)(param_1 + 0x20);
  param_2[1] = pfVar1[1] + *(float *)(param_1 + 0x24);
  param_2[2] = pfVar1[2] + *(float *)(param_1 + 0x28);
  return param_2;
}
