// Name: core_disease.cpp_FUN_0045c040
// Address: 0045c040
// Address Range: [[0045c040, 0045c0c7]]
// Convention: unknown
// Signature: undefined4 core_disease_cpp_FUN_0045c040(CDemonActor *param_1)

#include "nocturne.h"

uint core_disease_cpp_FUN_0045c040(CDemonActor *param_1)

{
  byte *position;
  int iVar1;
  
  iVar1 = core_weapon_cpp_FUN_0057b880(param_1);
  position = &param_1->field_0x20;
  if (iVar1 != 0) {
    core_fire_cpp_FUN_004a39d0(0x01C73654,position,&param_1->field_0x30,&param_1[4].field_0x38);
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"wp_disease_throw.wav",(CVector3f *)position);
    *(uint *)&param_1[4].field_0x40 = 0;
    *(uint *)&param_1[4].field_0x3c = *(uint *)&param_1[4].field_0x40;
    *(uint *)&param_1[4].field_0x38 = *(uint *)&param_1[4].field_0x3c;
    *(uint *)&param_1[2].field_0x50 = 0x40000000;
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,param_1,"wp_nomana.wav",(CVector3f *)position);
  return 0;
}
