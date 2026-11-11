// Name: core_shadow.cpp_CShadow_processDamage_FUN_0055fea0
// Address: 0055fea0
// Address Range: [[0055fea0, 005600fa]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_0055fea0(CShadow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_0055fea0(CShadow *this_ptr,SDamageInfo *damage_info)

{
  EDamageType EVar1;
  float fVar2;
  SMotion *pSVar3;
  byte bVar4;
  float afStackY_100c [1010];
  int iVar5;
  uint uStack_24;
  uint uStack_18;
  float fStack_10;
  CMotionController *pCStack_c;
  
  bVar4 = 0;
  EVar1 = damage_info->damage_type;
  if (((((EVar1 == DAMAGE_TYPE_ATTACK_GENERIC) || (EVar1 == DAMAGE_TYPE_ATTACK_BULLET)) ||
       (EVar1 == DAMAGE_TYPE_ATTACK_FIRE)) ||
      ((EVar1 == DAMAGE_TYPE_ATTACK_BLADE || (EVar1 == DAMAGE_TYPE_ATTACK_STAKE)))) ||
     ((EVar1 == DAMAGE_TYPE_ATTACK_GAS ||
      ((EVar1 == DAMAGE_TYPE_ATTACK_ELECTROCUTE || (EVar1 == DAMAGE_TYPE_PIERCING)))))) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"ShotShadowWithLead");
    damage_info->damage_amount = 0.0;
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[2]);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[3]);
    if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
      core_shadow_cpp_FUN_0055f4f0(this_ptr);
      core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
    }
    pCStack_c = &(this_ptr->base).base.model.base;
    fVar2 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.hit_points = fVar2;
    if (0.0 < fVar2) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_c);
      iVar5 = pSVar3->state_index;
      if ((((iVar5 == 0) || (iVar5 == 5)) || (iVar5 == 0xc)) || ((iVar5 == 6 || (iVar5 == 7)))) {
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x13,1);
        }
        if (iVar5 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x14,1);
        }
        if (iVar5 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x15,1);
        }
      }
      core_shadow_cpp_FUN_0055f4f0(this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
      return;
    }
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_c);
    iVar5 = pSVar3->state_index;
    if (((iVar5 != 0x11) && (iVar5 != 0xf)) && ((iVar5 != 0x12 && (iVar5 != 0x10)))) {
      core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20);
      uStack_18 = uStack_24;
      *(uint *)(&stack0xffffffec + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (fStack_10 <= 0.0) {
        iVar5 = 0x10;
      }
      else {
        iVar5 = 0xf;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_c,iVar5,1);
      core_shadow_cpp_FUN_0055f540(this_ptr);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ShadowDead");
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  }
  return;
}
