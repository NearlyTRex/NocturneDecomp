// Name: core_firestff.cpp_FUN_004a4d00
// Address: 004a4d00
// Address Range: [[004a4d00, 004a4db6]]
// Convention: unknown
// Signature: undefined4 core_firestff_cpp_FUN_004a4d00(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_firestff_cpp_FUN_004a4d00(CDemonActor *param_1)

{
  CSound *this_ptr;
  int iVar1;
  byte auStack_18 [12];
  
  auStack_18._0_4_ = *(uint *)&param_1->field_0x20;
  auStack_18._8_4_ = *(uint *)&param_1->field_0x28;
  auStack_18._4_4_ = *(float *)&param_1->field_0x24 + _DAT_005c0b45;
  iVar1 = core_weapon_cpp_FUN_0057b880(param_1);
  if (iVar1 != 0) {
    core_fire_cpp_FUN_004a3f70(0x01C73654,auStack_18,0,*(uint *)&param_1[2].field_0x54);
    this_ptr = 0x02CF5680;
    *(uint *)&param_1[2].field_0x50 = 0x3f800000;
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (this_ptr,param_1,"wp_firestaff.wav",(CVector3f *)auStack_18);
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,param_1,"?wp_nomana.wav" + 1,(CVector3f *)auStack_18);
  *(uint *)&param_1[2].field_0x50 = 0x3f800000;
  return 0;
}
