// Name: core_stranger.cpp_FUN_00526ff0
// Address: 00526ff0
// Address Range: [[00526ff0, 00527046]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00526ff0(CCharacter *param_1,int param_2,CVector3f *param_3)

#include "nocturne.h"

void core_stranger_cpp_FUN_00526ff0(CCharacter *param_1,int param_2,CVector3f *param_3)

{
  int iVar1;
  
  if (*(int *)(&param_1->field_0x25b0 + param_2 * 0x78) == *(int *)&param_1[2].field_0x708c) {
    iVar1 = *(int *)&param_1->field_0x154;
    *(uint *)&param_1[2].field_0x708c = 0;
    (**(code **)(iVar1 + 0x144))(param_1,0);
  }
  core_charactr_cpp_FUN_00431c40(param_1,param_2,param_3);
  return;
}
