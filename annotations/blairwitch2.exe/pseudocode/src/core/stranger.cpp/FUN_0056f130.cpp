// Name: core_stranger.cpp_FUN_0056f130
// Address: 0056f130
// Address Range: [[0056f130, 0056f186]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0056f130(CCharacter *param_1,int param_2,CVector3f *param_3)

#include "nocturne.h"

void core_stranger_cpp_FUN_0056f130(CCharacter *param_1,int param_2,CVector3f *param_3)

{
  int iVar1;
  
  if (*(int *)(&param_1->field_0x2620 + param_2 * 0x78) == *(int *)&param_1[2].field_0x41d8) {
    iVar1 = *(int *)&param_1->field_0x2b0;
    *(uint *)&param_1[2].field_0x41d8 = 0;
    (**(code **)(iVar1 + 0x150))(param_1,0);
  }
  core_charactr_cpp_FUN_00428d60(param_1,param_2,param_3);
  return;
}
