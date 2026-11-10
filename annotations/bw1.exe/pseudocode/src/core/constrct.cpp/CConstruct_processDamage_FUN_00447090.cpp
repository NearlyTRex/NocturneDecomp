// Name: core_constrct.cpp_CConstruct_processDamage_FUN_00447090
// Address: 00447090
// Address Range: [[00447090, 00447192]]
// Convention: __cdecl
// Signature: void __cdecl core_constrct_cpp_CConstruct_processDamage_FUN_00447090(CConstruct *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_constrct_cpp_CConstruct_processDamage_FUN_00447090(CConstruct *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  int force_immediate;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc31c);
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc314);
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc304);
  this_ptr_00 = &this_ptr->field_0x158;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr_00);
  if (*(int *)(pSVar2 + 0x24) != 0xc) {
    fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
    *(float *)&this_ptr->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&this_ptr->field_0x2538 = 0x3f800000;
      uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                        (this_ptr,"stick-leaps.wav");
      *(uint *)&this_ptr->field_0xc320 = uVar4;
      core_construc_cpp_FUN_004472a0(this_ptr);
    }
    else {
      force_immediate = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr_00,iVar3 + 7,force_immediate);
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc318);
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"stick-hurt_growl.wav");
        *(uint *)&this_ptr->field_0xc318 = uVar4;
      }
    }
    *(uint *)(damage_info + 8) = 0;
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00((CEnemy *)this_ptr,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)this_ptr_00,0xe,1);
  return;
}
