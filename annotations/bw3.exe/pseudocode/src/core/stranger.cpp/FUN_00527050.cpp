// Name: core_stranger.cpp_FUN_00527050
// Address: 00527050
// Address Range: [[00527050, 00527095]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00527050(CCharacter *param_1,CDemonActor *param_2,CVector3f *param_3)

#include "nocturne.h"

void core_stranger_cpp_FUN_00527050(CCharacter *param_1,CDemonActor *param_2,CVector3f *param_3)

{
  int iVar1;
  
  if (param_2 == *(CDemonActor **)&param_1[2].field_0x708c) {
    iVar1 = *(int *)&param_1->field_0x154;
    *(uint *)&param_1[2].field_0x708c = 0;
    (**(code **)(iVar1 + 0x144))(param_1,0);
  }
  core_charactr_cpp_FUN_00430810(param_1,param_2,param_3);
  return;
}
