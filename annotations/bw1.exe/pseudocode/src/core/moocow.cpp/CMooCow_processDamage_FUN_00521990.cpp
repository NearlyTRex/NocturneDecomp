// Name: core_moocow.cpp_CMooCow_processDamage_FUN_00521990
// Address: 00521990
// Address Range: [[00521990, 00521a54]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_processDamage_FUN_00521990(CMooCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_moocow_cpp_CMooCow_processDamage_FUN_00521990(CMooCow *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  
  core_moocow_cpp_FUN_00521810(this_ptr,damage_info);
  fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    if ((*(int *)(pSVar2 + 0x24) != 7) && (*(int *)(pSVar2 + 0x24) != 6)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,6,1);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
    }
  }
  iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                    (0x02C82A60,*(uint *)&this_ptr->field_0xc1d8);
  if (iVar3 != 0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
    return;
  }
  uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"cow?.wav");
  *(uint *)&this_ptr->field_0xc1d8 = uVar4;
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
