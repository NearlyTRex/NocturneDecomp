// Name: core_prye.cpp_CPrye_processDamage_FUN_00523e50
// Address: 00523e50
// Address Range: [[00523e50, 00524167]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_processDamage_FUN_00523e50(CPrye *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_processDamage_FUN_00523e50(CPrye *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  int iVar1;
  SMotion *pSVar2;
  uint uVar3;
  float fVar4;
  int desired_state_index;
  
  if (*(int *)&this_ptr->field_0x27b0 != 0) {
    return;
  }
  if (*(int *)&g_CGamePtr->field_0x1f4 != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x250 == 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  core_hero_cpp_CHero_stopNearbyInteraction_FUN_004d3af0((CHero *)this_ptr);
  if ((((0.0 < *(float *)&this_ptr->field_0xcdcc) &&
       (iVar1 = *(int *)(damage_info + 0x30), 0xb < iVar1)) && (iVar1 != 0x66)) &&
     ((iVar1 != 0x6f && (iVar1 != 0x69)))) {
    *(uint *)(damage_info + 4) = 0;
    return;
  }
  *(uint *)&this_ptr->field_0xcdcc = _DAT_005e34f8;
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790
                    (*(CDemonActor **)(damage_info + 0x38),"CBugs");
  if (iVar1 != 0) {
    *(uint *)&this_ptr->field_0xcdcc = 0x3e19999a;
  }
  fVar4 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x158;
  *(float *)&this_ptr->field_0x2538 = fVar4;
  if (0.0 < fVar4) {
    if (0.0 < *(float *)(damage_info + 4)) {
      iVar1 = *(int *)(damage_info + 0x30);
      if ((((iVar1 != 0x69) && (iVar1 != 0x6f)) &&
          ((iVar1 != 0x66 &&
           (((*(int *)&this_ptr->field_0x20ba4 == 0 && (*(int *)&this_ptr->field_0x20c20 == 0)) &&
            (*(int *)&this_ptr->field_0x20b64 == 0)))))) &&
         ((iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(uint *)(damage_info + 0x34),g_CTommyGunClassInfo.name_hash),
          iVar1 == 0 || (iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.333), iVar1 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)this_ptr_00,0x31,1);
      }
      iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x20cf4);
      if (iVar1 == 0) {
        uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"prye-pain?.wav");
        *(uint *)&this_ptr->field_0x20cf4 = uVar3;
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2538 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf0))(this_ptr);
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr_00);
    if ((*(int *)(pSVar2 + 0x24) != 0x36) &&
       (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                           ((CMotionController *)this_ptr_00), *(int *)(pSVar2 + 0x24) != 0x35)) {
      if ((*(int *)&this_ptr->field_0x20ba4 == 0) && (*(int *)&this_ptr->field_0x20c20 == 0)) {
        if (*(int *)(damage_info + 0x30) == 1) {
          desired_state_index = 0x34;
          iVar1 = 1;
        }
        else {
          iVar1 = 1;
          fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,100.0);
          desired_state_index = (fVar4 <= _DAT_005cd757) + 0x32;
        }
      }
      else {
        iVar1 = 1;
        desired_state_index = 0x1a;
        *(uint *)&this_ptr->field_0x20ba4 = 0;
        *(uint *)&this_ptr->field_0x20c20 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,desired_state_index,iVar1);
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x20cf4);
      if (*(int *)(damage_info + 0x30) != 1) {
        uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"prye-death?.wav");
        *(uint *)&this_ptr->field_0x20cf4 = uVar3;
      }
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004cee30
                (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
    }
    if (*(int *)&this_ptr->field_0x20c24 == *(int *)&this_ptr->field_0x25b0) {
      *(uint *)&this_ptr->field_0x20c24 = 0;
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
    if (*(int *)&this_ptr->field_0x2628 == *(int *)&this_ptr->field_0x20c24) {
      *(uint *)&this_ptr->field_0x20c24 = 0;
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
  }
  if (0.0 < *(float *)(damage_info + 4)) {
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60((CCharacter *)this_ptr,damage_info);
  return;
}
