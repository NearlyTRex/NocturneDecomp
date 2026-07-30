// Name: core_ghoul.cpp_CGhoul_processDamage_FUN_004ab450
// Address: 004ab450
// Address Range: [[004ab450, 004ab811]]
// Convention: unknown
// Signature: void core_ghoul_cpp_CGhoul_processDamage_FUN_004ab450(CGhoul *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_ghoul_cpp_CGhoul_processDamage_FUN_004ab450(CGhoul *param_1,SDamageInfo *param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar2;
  CDemonActor_vtable *pCVar3;
  float fVar4;
  CGhoul *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  uint uVar8;
  CMotionList *this_ptr_00;
  int iVar9;
  double dVar10;
  float spawn_radius;
  char *motion_name;
  char local_78 [100];
  float local_14;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
  if ((param_1->dark_waypoint != (CDemonActor *)0x0) &&
     (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(param_1->base).base.model.motion_controller), pSVar6->state_index == 0))
  {
    param_1->heal_timer = 30.0;
    param_1->dark_waypoint = (CDemonActor *)0x0;
    param_1->is_berserk = 1;
    pCVar1 = &(param_1->base).base.base.location;
    param_1->stuck_timer = 1.0;
    if ((CLocation *)&param_1->prev_position != pCVar1) {
      (param_1->prev_position).x = (pCVar1->position).x;
      (param_1->prev_position).y = (param_1->base).base.base.location.position.y;
      (param_1->prev_position).z = (param_1->base).base.base.location.position.z;
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"go berzerk\n");
  }
  if (param_2->damage_type == DAMAGE_TYPE_BURN) {
    param_1->stun_timer = 4.0;
  }
  core_ghoul_cpp_CGhoul_processDismemberment_FUN_004ab190(param_1,param_2);
  pCVar2 = (param_1->base).victim;
  if ((pCVar2 != (CCharacter *)0x0) &&
     (pCVar5 = (CGhoul *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2), pCVar5 == param_1
     )) {
    pCVar2 = (param_1->base).victim;
    (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
  }
  iVar9 = param_1->part_indices[10];
  (param_1->base).base.hit_points = (param_1->base).base.hit_points - param_2->damage_amount;
  if ((param_1->base).base.model.part_data.visibility_flags[iVar9] == 0) {
    (param_1->base).base.hit_points = 0.0;
  }
  this_ptr = &(param_1->base).base.model;
  if ((param_1->base).base.hit_points <= 0.0) {
    iVar9 = (param_1->base).special_form_flag;
    (param_1->base).base.hit_points = 0.0;
    if (iVar9 != 0) {
      core_charactr_cpp_FUN_00427a60((CCharacter *)param_1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar6->state_index != 10) && (pSVar6->state_index != 9)) {
      if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[10]] == 0) {
        param_1->lives_left = 0;
      }
      else {
        param_1->lives_left = param_1->lives_left + -1;
      }
      iVar9 = 6;
      if ((param_1->base).base.damage_decal_count < 1) {
        iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
        if (iVar7 != 0) {
          iVar9 = 7;
        }
      }
      else {
        iVar7 = 0;
        pCVar5 = param_1;
        if (0 < (param_1->base).base.damage_decal_count) {
          do {
            if ((pCVar5->base).base.damage_decals[0].part_index == param_1->part_indices[9]) {
              iVar9 = 8;
              break;
            }
            iVar7 = iVar7 + 1;
            pCVar5 = (CGhoul *)((int)&(pCVar5->base).base.base.orient + 8);
          } while (iVar7 < (param_1->base).base.damage_decal_count);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,iVar9,1);
      iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[2]);
      if (iVar9 == 0) {
        uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)param_1,"ghoul-die-!-?.wav @1.6");
        param_1->sfx_handles[2] = uVar8;
      }
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(4.0,10.0);
      fVar4 = (float)65536;
      param_1->arise_timer = 0xa0000;
      pCVar3 = (param_1->base).base.base.vtable._ub;
      spawn_radius = 7.00649e-44;
      iVar9 = 0x4ab609;
      dVar10 = round((double)(local_14 * fVar4));
      param_1->spasm_timer = (int)ROUND(dVar10);
      (*pCVar3->spawnFlies)((CDemonActor *)param_1,iVar9,spawn_radius);
    }
  }
  else {
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    iVar9 = pSVar6->state_index;
    if (((iVar9 == 0) || (iVar9 == 0xb || (iVar9 == 0xc || iVar9 == 2))) ||
       (iVar9 = core_actor_cpp_randomChance_FUN_0040dea0(0.25), iVar9 != 0)) {
      iVar7 = 1;
      iVar9 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,(iVar9 == 0) + 3,iVar7);
    }
    else {
      iVar9 = core_actor_cpp_getRandomInt_FUN_0040de00(1,2);
      _sprintf(local_78,"guul flinch%d",iVar9);
      iVar9 = 1;
      motion_name = local_78;
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                              (&(param_1->base).base.model.motion_controller);
      iVar9 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                        (this_ptr_00,motion_name,iVar9);
      param_1->flinch_blend_weight = 1.0;
      param_1->flinch_motion_index = iVar9;
    }
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
    if (iVar9 == 0) {
      uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"ghoul-mad-!-?.wav");
      param_1->sfx_handles[1] = uVar8;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
