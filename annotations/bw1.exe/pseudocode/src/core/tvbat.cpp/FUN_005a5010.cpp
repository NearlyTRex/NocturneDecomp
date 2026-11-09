// Name: core_tvbat.cpp_FUN_005a5010
// Address: 005a5010
// Address Range: [[005a5010, 005a5073]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_005a5010(int param_1,int param_2)

#include "nocturne.h"

void core_tvbat_cpp_FUN_005a5010(int param_1,int param_2)

{
  float fVar1;
  CGore *this_ptr;
  
  if (*(int *)(param_1 + 0x27b0) == 0) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    this_ptr = g_CGorePtr;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      core_gore_cpp_FUN_004e6060
                (this_ptr,(CVector3f *)(param_1 + 0x20),(CVector3f *)0x0,10,BLOOD_TYPE_RED);
      *(uint *)(param_1 + 0xc424) = 1;
    }
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  }
  return;
}
