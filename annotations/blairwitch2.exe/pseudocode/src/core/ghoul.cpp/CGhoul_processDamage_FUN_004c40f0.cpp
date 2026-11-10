// Name: core_ghoul.cpp_CGhoul_processDamage_FUN_004c40f0
// Address: 004c40f0
// Address Range: [[004c40f0, 004c44b1]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004c40f0(CGhoul *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004c40f0(CGhoul *this_ptr,SDamageInfo *damage_info)

{
  byte *puVar1;
  CDeformableModelInstance *pCVar2;
  CCharacter *pCVar3;
  CGhoul *pCVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CMotionList *this_ptr_00;
  float10 fVar8;
  char *motion_name;
  char acStack_78 [100];
  float fStack_14;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) &&
     (iVar5 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model),
     *(int *)(iVar5 + 0x24) == 0)) {
    this_ptr->heal_timer = 30.0;
    this_ptr->dark_waypoint = (CDemonActor *)0x0;
    this_ptr->is_berserk = 1;
    puVar1 = &(this_ptr->base).base.base.field_0x20;
    this_ptr->stuck_timer = 1.0;
    if (&this_ptr->prev_position != (CVector3f *)puVar1) {
      (this_ptr->prev_position).x = *(float *)puVar1;
      (this_ptr->prev_position).y = *(float *)&(this_ptr->base).base.base.field_0x24;
      (this_ptr->prev_position).z = *(float *)&(this_ptr->base).base.base.field_0x28;
    }
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"@go berzerk\n" + 1);
  }
  if (*(int *)(damage_info + 0x30) == 0x6c) {
    this_ptr->stun_timer = 4.0;
  }
  core_ghoul_cpp_CGhoul_processDismemberment_FUN_004c3e30(this_ptr,damage_info);
  pCVar3 = (this_ptr->base).victim;
  if ((pCVar3 != (CCharacter *)0x0) &&
     (pCVar4 = (CGhoul *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
     pCVar4 == this_ptr)) {
    pCVar3 = (this_ptr->base).victim;
    (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
  }
  iVar5 = this_ptr->part_indices[10];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar5 * 4) == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  pCVar2 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    iVar5 = (this_ptr->base).special_form_flag;
    (this_ptr->base).base.hit_points = 0.0;
    if (iVar5 != 0) {
      core_charactr_cpp_CCharacter_shatter_FUN_00427210((CCharacter *)this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
      return;
    }
    iVar5 = core_motion_cpp_FUN_005035c0(pCVar2);
    if ((*(int *)(iVar5 + 0x24) != 10) && (*(int *)(iVar5 + 0x24) != 9)) {
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[10] * 4) == 0)
      {
        this_ptr->lives_left = 0;
      }
      else {
        this_ptr->lives_left = this_ptr->lives_left + -1;
      }
      iVar5 = 6;
      if (*(int *)&(this_ptr->base).base.field_0x3448 < 1) {
        iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
        if (iVar6 != 0) {
          iVar5 = 7;
        }
      }
      else {
        iVar6 = 0;
        pCVar4 = this_ptr;
        if (0 < *(int *)&(this_ptr->base).base.field_0x3448) {
          do {
            if (*(int *)&(pCVar4->base).base.field_0x344c == this_ptr->part_indices[9]) {
              iVar5 = 8;
              break;
            }
            iVar6 = iVar6 + 1;
            pCVar4 = (CGhoul *)((int)&(pCVar4->base).base.base.orient + 8);
          } while (iVar6 < *(int *)&(this_ptr->base).base.field_0x3448);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,iVar5,1);
      iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]);
      if (iVar5 == 0) {
        uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"ghoul-die-!-?.wav @1.6");
        this_ptr->sfx_handles[2] = uVar7;
      }
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(4.0,10.0);
      fVar8 = (float10)fStack_14 * (float10)_DAT_005d9247;
      this_ptr->arise_timer = 0xa0000;
      iVar5 = round(0x32,0x41c80000);
      this_ptr->spasm_timer = (int)ROUND(fVar8);
      (**(code **)(iVar5 + 0xb0))(this_ptr);
    }
  }
  else {
    iVar5 = core_motion_cpp_FUN_005035c0(pCVar2);
    iVar5 = *(int *)(iVar5 + 0x24);
    if (((iVar5 == 0) || (iVar5 == 0xb || (iVar5 == 0xc || iVar5 == 2))) ||
       (iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.25), iVar5 != 0)) {
      iVar6 = 1;
      iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,(iVar5 == 0) + 3,iVar6);
    }
    else {
      core_actor_cpp_getRandomInt_FUN_0040cfc0(1,2);
      _sprintf(acStack_78,"guul flinch%d");
      iVar5 = 1;
      motion_name = acStack_78;
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                              ((CMotionController *)&(this_ptr->base).base.model);
      iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                        (this_ptr_00,motion_name,iVar5);
      this_ptr->flinch_blend_weight = 1.0;
      this_ptr->flinch_motion_index = iVar5;
    }
    iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar5 == 0) {
      uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ghoul-mad-!-?.wav");
      this_ptr->sfx_handles[1] = uVar7;
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
