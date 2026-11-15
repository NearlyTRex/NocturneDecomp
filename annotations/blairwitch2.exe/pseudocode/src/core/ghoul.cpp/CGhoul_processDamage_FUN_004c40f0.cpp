// Name: core_ghoul.cpp_CGhoul_processDamage_FUN_004c40f0
// Address: 004c40f0
// Address Range: [[004c40f0, 004c44b1]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004c40f0(CGhoul *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004c40f0(CGhoul *this_ptr,SDamageInfo *damage_info)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar2;
  CDemonActor_vtable *pCVar3;
  float fVar4;
  CGhoul *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  uint uVar8;
  CMotionList *this_ptr_01;
  int iVar9;
  double dVar10;
  float spawn_radius;
  char *motion_name;
  char acStack_78 [100];
  float fStack_14;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) &&
     (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                         (&(this_ptr->base).base.model.base), pSVar6->state_index == 0)) {
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
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"@go berzerk\n" + 1);
  }
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    this_ptr->stun_timer = 4.0;
  }
  core_ghoul_cpp_CGhoul_processDismemberment_FUN_004c3e30(this_ptr,damage_info);
  pCVar2 = (this_ptr->base).victim;
  if ((pCVar2 != (CCharacter *)0x0) &&
     (pCVar5 = (CGhoul *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
     pCVar5 == this_ptr)) {
    pCVar2 = (this_ptr->base).victim;
    (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
  }
  iVar9 = this_ptr->part_indices[10];
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar9] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    iVar9 = (this_ptr->base).special_form_flag;
    (this_ptr->base).base.hit_points = 0.0;
    if (iVar9 != 0) {
      core_charactr_cpp_CCharacter_shatter_FUN_00427210((CCharacter *)this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
    if ((pSVar6->state_index != 10) && (pSVar6->state_index != 9)) {
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
        this_ptr->lives_left = 0;
      }
      else {
        this_ptr->lives_left = this_ptr->lives_left + -1;
      }
      iVar9 = 6;
      if ((this_ptr->base).base.damage_decal_count < 1) {
        iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
        if (iVar7 != 0) {
          iVar9 = 7;
        }
      }
      else {
        iVar7 = 0;
        pCVar5 = this_ptr;
        if (0 < (this_ptr->base).base.damage_decal_count) {
          do {
            if ((pCVar5->base).base.damage_decals[0].part_index == this_ptr->part_indices[9]) {
              iVar9 = 8;
              break;
            }
            iVar7 = iVar7 + 1;
            pCVar5 = (CGhoul *)((int)&(pCVar5->base).base.base.orient + 8);
          } while (iVar7 < (this_ptr->base).base.damage_decal_count);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar9,1);
      iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[2]);
      if (iVar9 == 0) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"ghoul-die-!-?.wav @1.6");
        this_ptr->sfx_handles[2] = uVar8;
      }
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(4.0,10.0);
      fVar4 = (float)_DAT_005d9247;
      this_ptr->arise_timer = 0xa0000;
      pCVar3 = (this_ptr->base).base.base.vtable._ub;
      spawn_radius = 7.00649e-44;
      iVar9 = 0x4c42a9;
      dVar10 = round((double)(fStack_14 * fVar4));
      this_ptr->spasm_timer = (int)ROUND(dVar10);
      (*pCVar3->spawnFlies)((CDemonActor *)this_ptr,iVar9,spawn_radius);
    }
  }
  else {
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
    iVar9 = pSVar6->state_index;
    if (((iVar9 == 0) || (iVar9 == 0xb || (iVar9 == 0xc || iVar9 == 2))) ||
       (iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.25), iVar9 != 0)) {
      iVar7 = 1;
      iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,(iVar9 == 0) + 3,iVar7);
    }
    else {
      core_actor_cpp_getRandomInt_FUN_0040cfc0(1,2);
      _sprintf(acStack_78,"guul flinch%d");
      iVar9 = 1;
      motion_name = acStack_78;
      this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                              (&(this_ptr->base).base.model.base);
      iVar9 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                        (this_ptr_01,motion_name,iVar9);
      this_ptr->flinch_blend_weight = 1.0;
      this_ptr->flinch_motion_index = iVar9;
    }
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar9 == 0) {
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ghoul-mad-!-?.wav");
      this_ptr->sfx_handles[1] = uVar8;
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
