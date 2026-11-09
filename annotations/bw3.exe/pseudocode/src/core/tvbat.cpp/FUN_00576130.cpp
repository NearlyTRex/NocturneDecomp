// Name: core_tvbat.cpp_FUN_00576130
// Address: 00576130
// Address Range: [[00576130, 00576193]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_00576130(int param_1,int param_2)

#include "nocturne.h"

void core_tvbat_cpp_FUN_00576130(int param_1,int param_2)

{
  float fVar1;
  CGore *this_ptr;
  
  if (*(int *)(param_1 + 0x27b0) == 0) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    this_ptr = g_CGorePtr;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      core_gore_cpp_FUN_004ce9c0
                (this_ptr,(CVector3f *)(param_1 + 0x20),(CVector3f *)0x0,10,BLOOD_TYPE_RED);
      *(uint *)(param_1 + 0xd210) = 1;
    }
    core_enemy_cpp_FUN_00489b80(param_1,param_2);
  }
  return;
}
