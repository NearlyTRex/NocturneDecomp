// Name: unkafter_stranger.cpp_FUN_0045de30
// Address: 0045de30
// Address Range: [[0045de30, 0045de75]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045de30(CCharacter *param_1,CDemonActor *param_2,CVector3f *param_3)

#include "nocturne.h"

void unkafter_stranger_cpp_FUN_0045de30(CCharacter *param_1,CDemonActor *param_2,CVector3f *param_3)

{
  int iVar1;
  
  if (param_2 == *(CDemonActor **)&param_1[2].field_0x41d8) {
    iVar1 = *(int *)&param_1->field_0x2b0;
    *(uint *)&param_1[2].field_0x41d8 = 0;
    (**(code **)(iVar1 + 0x150))(param_1,0);
  }
  core_charactr_cpp_FUN_00427a60(param_1,param_2,param_3);
  return;
}
