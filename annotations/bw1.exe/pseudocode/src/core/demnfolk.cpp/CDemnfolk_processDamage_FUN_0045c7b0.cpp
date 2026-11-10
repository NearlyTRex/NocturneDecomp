// Name: core_demnfolk.cpp_CDemnfolk_processDamage_FUN_0045c7b0
// Address: 0045c7b0
// Address Range: [[0045c7b0, 0045c9d2]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_processDamage_FUN_0045c7b0(CDemnfolk *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_CDemnfolk_processDamage_FUN_0045c7b0(CDemnfolk *this_ptr,SDamageInfo *damage_info)

{
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)&this_ptr->field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"@ShotInvulnerable" + 1);
    return;
  }
  unkafter_demnfolk_cpp_FUN_0045c4a0(this_ptr,damage_info);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf8))(this_ptr);
  *(float *)&this_ptr->field_0x2538 =
       *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc340 * 4) == 0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
  }
  *(uint *)&this_ptr->field_0xc1e4 = 0x3f99999a;
  if (0.0 < *(float *)&this_ptr->field_0x2538) {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
    iVar2 = iVar2 + 0xf;
    if (iVar2 == 0x12) {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      if (iVar3 != 1) {
        iVar2 = 0xf;
      }
    }
    if (*(int *)(damage_info + 0x28) == 4) {
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.6);
      if (iVar3 != 0) {
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,1);
        iVar2 = iVar2 + 9;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
    if (*(float *)&this_ptr->field_0xc344 <= 0.0) {
      *(uint *)&this_ptr->field_0xc344 = 0x40000000;
      iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc34c);
      if (iVar2 == 0) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x14c))(this_ptr);
        core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00((CEnemy *)this_ptr,damage_info);
        return;
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    if ((*(int *)(pSVar1 + 0x24) != 0x1a) && (*(int *)(pSVar1 + 0x24) != 0x19)) {
      unkafter_demnfolk_cpp_FUN_0045bfa0(this_ptr);
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      iVar2 = iVar2 + 0x14;
      if ((*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc340 * 4) == 0) &&
         (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc33c * 4) != 0)) {
        iVar2 = 0x1f;
      }
      iVar3 = _stricmp(&this_ptr->field_0x24a8,"D_SHERIFF.dfm");
      if (iVar3 == 0) {
        iVar2 = 0x18;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc34c);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x150))(this_ptr);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00((CEnemy *)this_ptr,damage_info);
  return;
}
