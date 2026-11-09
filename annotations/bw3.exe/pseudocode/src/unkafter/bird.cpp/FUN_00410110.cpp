// Name: unkafter_bird.cpp_FUN_00410110
// Address: 00410110
// Address Range: [[00410110, 004101b1]]
// Convention: unknown
// Signature: void unkafter_bird_cpp_FUN_00410110(CCharacter *param_1,int param_2)

#include "nocturne.h"

void unkafter_bird_cpp_FUN_00410110(CCharacter *param_1,int param_2)

{
  float fVar1;
  CDemonActorType *pCVar2;
  byte *puVar3;
  
  pCVar2 = (CDemonActorType *)(**(code **)(*(int *)&param_1->field_0x154 + 0xcc))(param_1);
  if (pCVar2 == &g_CBirdClassInfo) {
    fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
    *(float *)&param_1->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&param_1->field_0x2538 = 0;
      (**(code **)(*(int *)&param_1->field_0x154 + 0xa8))(param_1,0x32,0x41c80000);
      core_charactr_cpp_FUN_00431ce0(param_1);
      puVar3 = &DAT_005b6452;
    }
    else {
      if ((*(float *)(param_2 + 4) <= 0.0) || (*(int *)&param_1->field_0x26fc != 0))
      goto LAB_00410173;
      puVar3 = &DAT_005b6456;
    }
    unkafter_bird_cpp_FUN_00410030(&param_1->field_0x158,puVar3);
  }
LAB_00410173:
  core_charactr_cpp_FUN_00430d60(param_1,param_2);
  return;
}
