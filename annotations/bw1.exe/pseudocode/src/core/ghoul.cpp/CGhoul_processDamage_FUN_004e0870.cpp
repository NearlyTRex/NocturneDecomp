// Name: core_ghoul.cpp_CGhoul_processDamage_FUN_004e0870
// Address: 004e0870
// Address Range: [[004e0870, 004e0c31]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004e0870(CGhoul *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004e0870(CGhoul *this_ptr,SDamageInfo *damage_info)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar2;
  CGhoul *pCVar3;
  SMotion *pSVar4;
  int iVar5;
  uint uVar6;
  CMotionList *this_ptr_01;
  int iVar7;
  float10 fVar8;
  char *motion_name;
  char acStack_78 [100];
  float fStack_14;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) &&
     (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->base).base.model.base), *(int *)(pSVar4 + 0x24) == 0)) {
    this_ptr->heal_timer = 30.0;
    this_ptr->dark_waypoint = (CDemonActor *)0x0;
    this_ptr->is_berserk = 1;
    pCVar1 = &(this_ptr->base).base.base.location;
    this_ptr->stuck_timer = 1.0;
    if ((CLocation *)&this_ptr->prev_position != pCVar1) {
      (this_ptr->prev_position).x = (pCVar1->position).x;
      (this_ptr->prev_position).y = (this_ptr->base).base.base.location.position.y;
      (this_ptr->prev_position).z = (this_ptr->base).base.base.location.position.z;
    }
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"@go berzerk\n" + 1);
  }
  if (*(int *)(damage_info + 0x30) == 0x6c) {
    this_ptr->stun_timer = 4.0;
  }
  core_ghoul_cpp_CGhoul_processDismemberment_FUN_004e05b0(this_ptr,damage_info);
  pCVar2 = (this_ptr->base).victim;
  if ((pCVar2 != (CCharacter *)0x0) &&
     (pCVar3 = (CGhoul *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
     pCVar3 == this_ptr)) {
    pCVar2 = (this_ptr->base).victim;
    (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
  }
  iVar7 = this_ptr->part_indices[10];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar7 * 4) == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    iVar7 = (this_ptr->base).special_form_flag;
    (this_ptr->base).base.hit_points = 0.0;
    if (iVar7 != 0) {
      core_charactr_cpp_CCharacter_shatter_FUN_00430c40((CCharacter *)this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
      return;
    }
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((*(int *)(pSVar4 + 0x24) != 10) && (*(int *)(pSVar4 + 0x24) != 9)) {
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[10] * 4) == 0)
      {
        this_ptr->lives_left = 0;
      }
      else {
        this_ptr->lives_left = this_ptr->lives_left + -1;
      }
      iVar7 = 6;
      if (*(int *)&(this_ptr->base).base.field_0x3004 < 1) {
        iVar5 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
        if (iVar5 != 0) {
          iVar7 = 7;
        }
      }
      else {
        iVar5 = 0;
        pCVar3 = this_ptr;
        if (0 < *(int *)&(this_ptr->base).base.field_0x3004) {
          do {
            if (*(int *)&(pCVar3->base).base.field_0x3008 == this_ptr->part_indices[9]) {
              iVar7 = 8;
              break;
            }
            iVar5 = iVar5 + 1;
            pCVar3 = (CGhoul *)((int)&(pCVar3->base).base.base.orient + 8);
          } while (iVar5 < *(int *)&(this_ptr->base).base.field_0x3004);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar7,1);
      iVar7 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[2]);
      if (iVar7 == 0) {
        uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"ghoul-die-!-?.wav @1.6");
        this_ptr->sfx_handles[2] = uVar6;
      }
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(4.0,10.0);
      fVar8 = (float10)fStack_14 * (float10)_DAT_005e3e01;
      this_ptr->arise_timer = 0xa0000;
      iVar7 = round(0x32,0x41c80000);
      this_ptr->spasm_timer = (int)ROUND(fVar8);
      (**(code **)(iVar7 + 0xa8))(this_ptr);
    }
  }
  else {
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    iVar7 = *(int *)(pSVar4 + 0x24);
    if (((iVar7 == 0) || (iVar7 == 0xb || (iVar7 == 0xc || iVar7 == 2))) ||
       (iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.25), iVar7 != 0)) {
      iVar5 = 1;
      iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,(iVar7 == 0) + 3,iVar5);
    }
    else {
      core_actor_cpp_getRandomInt_FUN_0040cc60(1,2);
      _sprintf(acStack_78,"guul flinch%d");
      iVar7 = 1;
      motion_name = acStack_78;
      this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                              (&(this_ptr->base).base.model.base);
      iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                        (this_ptr_01,motion_name,iVar7);
      this_ptr->flinch_blend_weight = 1.0;
      this_ptr->flinch_motion_index = iVar7;
    }
    iVar7 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar7 == 0) {
      uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ghoul-mad-!-?.wav");
      this_ptr->sfx_handles[1] = uVar6;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
