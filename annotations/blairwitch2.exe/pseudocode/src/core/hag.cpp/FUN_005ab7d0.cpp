// Name: core_hag.cpp_FUN_005ab7d0
// Address: 005ab7d0
// Address Range: [[005ab7d0, 005ab8c7]]
// Convention: unknown
// Signature: void core_hag_cpp_FUN_005ab7d0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hag_cpp_FUN_005ab7d0(CDemonActor *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(float *)&param_1[0x66].field_0x78 <= 0.0) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005f0c96;
  }
  fVar1 = *(float *)&param_1[0xd].field_0x284 - *(float *)(param_2 + 4);
  *(float *)&param_1[0xd].field_0x284 = fVar1;
  if (0.0 < fVar1) {
    core_enemy_cpp_FUN_00488890(param_1,param_2);
    if (*(int *)(param_2 + 0x38) == *(int *)&param_1[0x62].field_0x190) {
      *(uint *)&param_1[0x62].field_0x194 = *(uint *)&param_1[0x65].field_0x274;
    }
    *(uint *)&param_1[0x66].field_0x4c = 0;
    if (param_1[0x66].field_0x8c != '\0') {
      iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[0x67].field_0x1e0);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                          (param_1,&param_1[0x66].field_0x8c);
        *(uint *)&param_1[0x67].field_0x1e0 = uVar3;
        return;
      }
    }
  }
  else {
    if (param_1[0x66].field_0x18b != '\0') {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,param_1,&param_1[0x66].field_0x18b,(CVector3f *)&param_1->field_0x20);
    }
    *(uint *)&param_1[0xd].field_0x284 = 0;
    unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[0x62].field_0x210,"@Death" + 1);
  }
  return;
}
