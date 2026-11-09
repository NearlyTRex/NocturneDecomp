// Name: core_tvbat.cpp_FUN_005813c0
// Address: 005813c0
// Address Range: [[005813c0, 00581423]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_005813c0(int param_1,int param_2)

#include "nocturne.h"

void core_tvbat_cpp_FUN_005813c0(int param_1,int param_2)

{
  float fVar1;
  CGore *this_ptr;
  
  if (*(int *)(param_1 + 0x281c) == 0) {
    fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x25a8) = fVar1;
    this_ptr = g_CGorePtr;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x25a8) = 0;
      core_gore_cpp_FUN_004c9850
                (this_ptr,(CVector3f *)(param_1 + 0x20),(CVector3f *)0x0,10,BLOOD_TYPE_RED);
      *(uint *)(param_1 + 0x10cb4) = 1;
    }
    core_enemy_cpp_FUN_00488890(param_1,param_2);
  }
  return;
}
