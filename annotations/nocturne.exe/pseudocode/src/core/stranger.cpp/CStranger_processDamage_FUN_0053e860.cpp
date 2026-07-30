// Name: core_stranger.cpp_CStranger_processDamage_FUN_0053e860
// Address: 0053e860
// Address Range: [[0053e860, 0053ecba]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_processDamage_FUN_0053e860(CHero *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_stranger_cpp_CStranger_processDamage_FUN_0053e860(CHero *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  CCharacter_full_vtable *pCVar1;
  byte *puVar2;
  CGame *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  SMotion *pSVar6;
  CDemonActor *pCVar7;
  float fVar8;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  if (0x01C775EC->god_mode_enabled != 0) {
    param_2->damage_amount = 0.0;
  }
  if (0x01C775EC->allow_damage_flag == 0) {
    param_2->damage_amount = 0.0;
  }
  core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(param_1);
  if ((0.0 < param_1->invincibility_timer) && (0xb < (int)param_2->damage_type)) {
    param_2->damage_amount = 0.0;
    return;
  }
  param_1->invincibility_timer = 2.0f;
  iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2->wielder,"CBugs");
  if (iVar4 != 0) {
    param_1->invincibility_timer = 0.15;
  }
  pCVar3 = 0x01C775EC;
  (param_1->base).hit_points = (param_1->base).hit_points - param_2->damage_amount;
  puVar2 = PTR_DAT_005ad350;
  if (((pCVar3->auto_use_health != 0) && (0xb < (int)param_2->damage_type)) &&
     ((param_1->base).hit_points <= 0.0)) {
    (param_1->base).hit_points = 0.0;
    engine_console_cpp_CConsole_printf_FUN_0043ac60(puVar2);
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_004c3350(&param_1->inventory);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"hit points: %3.2f\n",(double)(param_1->base).hit_points);
  }
  local_28.y = 0.0;
  local_28.z = 1.0;
  local_28.x = 0.0;
  if (param_2->attacker != (CDemonActor *)0x0) {
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)param_1,(CVector3f *)&stack0xffffffcc,
                        &(param_2->attacker->location).position);
    if (&local_28 != pCVar5) {
      local_28.x = pCVar5->x;
      local_28.z = pCVar5->z;
    }
    local_1c = SQRT(local_28.z * local_28.z + local_28.x * local_28.x);
    local_28.y = 0.0;
    if (local_1c <= 0.0) {
      local_28.x = 0.0;
      local_28.z = 0.0;
    }
    else {
      fVar8 = 1.0 / local_1c;
      local_28.x = local_28.x * fVar8;
      local_28.y = fVar8 * 0.0;
      local_28.z = local_28.z * fVar8;
    }
  }
  local_18 = param_2->damage_amount * (float)0.050000000000000003;
  if (local_18 < (float)0.75) {
    local_18 = 0.75;
  }
  if (1.0 < local_18) {
    local_18 = 1.0;
  }
  local_28.x = local_28.x * local_18;
  local_28.y = local_28.y * local_18;
  local_28.z = local_28.z * local_18;
  xxx_unk_c_FUN_004940d0(INT_005b9284,local_28.x);
  this_ptr = &(param_1->base).model;
  if ((param_1->base).hit_points <= 0.0) {
    pCVar1 = (param_1->base).base.vtable._uc;
    (param_1->base).hit_points = 0.0;
    (*(pCVar1->_uc).releaseFromGrab)(&param_1->base);
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if (pSVar6->state_index != 0x29) {
      pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr->motion_controller);
      if (pSVar6->state_index != 0x28) {
        if ((param_1->ladder_to_climb == (CLadder *)0x0) &&
           (param_1[1].base.base.orient_matrix.m[2].x == 0.0)) {
          if (param_2->damage_type == DAMAGE_TYPE_DROWN) {
            iVar4 = 0x27;
            fVar8 = 1.4013e-45;
          }
          else {
            fVar8 = 1.4013e-45;
            local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,100.0);
            iVar4 = (local_14 <= 50.0f) + 0x25;
          }
        }
        else {
          fVar8 = 1.4013e-45;
          param_1->ladder_to_climb = (CLadder *)0x0;
          iVar4 = 0xf;
          param_1[1].base.base.orient_matrix.m[2].x = 0.0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).model.motion_controller,iVar4,(int)fVar8);
        sound_sndmain_cpp_killSfx_FUN_00527230
                  ((uint)param_1[1].base.model.transformed_vertices[0x13].z);
        if (param_2->damage_type != DAMAGE_TYPE_DROWN) {
          fVar8 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                   ((CDemonActor *)param_1,"stranger_die??.wav");
          param_1[1].base.model.transformed_vertices[0x13].z = fVar8;
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                  ((CGore *)INT_005b96c4,(CDemonActor *)param_1,0x32,50.0,(CVector3f *)0x0);
      }
    }
    if ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y ==
        (param_1->base).carry_hands[0].carry_actor) {
      param_1[1].base.base.orient_matrix.m[2].y = 0.0;
    }
    (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)(&param_1->base,0,(CVector3f *)0x0)
    ;
    if ((param_1->base).carry_hands[1].carry_actor ==
        (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
      param_1[1].base.base.orient_matrix.m[2].y = 0.0;
    }
    (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)(&param_1->base,1,(CVector3f *)0x0)
    ;
    goto LAB_0053eb7b;
  }
  if (param_2->damage_amount <= 0.0) goto LAB_0053eb7b;
  if (((param_2->damage_type != DAMAGE_TYPE_NO_FLINCH) &&
      (param_1->ladder_to_climb == (CLadder *)0x0)) &&
     ((param_1[1].base.base.orient_matrix.m[2].x == 0.0 && (param_1[1].base.base.health == 0)))) {
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (param_2->attacker,g_CTommyGunActorType_02dd0fd0.name_hash);
    if (pCVar7 != (CDemonActor *)0x0) {
      iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.333);
      if (iVar4 == 0) goto LAB_0053ec87;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr->motion_controller,0x24,1);
  }
LAB_0053ec87:
  iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                    ((uint)param_1[1].base.model.transformed_vertices[0x13].z);
  if (iVar4 == 0) {
    fVar8 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                             ((CDemonActor *)param_1,"stranger_hit??.wav");
    param_1[1].base.model.transformed_vertices[0x13].z = fVar8;
  }
LAB_0053eb7b:
  if (0.0 < param_2->damage_amount) {
    core_game_cpp_FUN_004a3a90(0x01C775EC);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(&param_1->base,param_2);
  return;
}
