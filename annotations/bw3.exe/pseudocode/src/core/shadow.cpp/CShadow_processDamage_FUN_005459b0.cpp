// Name: core_shadow.cpp_CShadow_processDamage_FUN_005459b0
// Address: 005459b0
// Address Range: [[005459b0, 00545bbe]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_005459b0(CShadow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_005459b0(CShadow *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  byte bVar4;
  float afStackY_102c [1015];
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_shadow_cpp_CShadow_playHitAlertSound_FUN_00545000(this_ptr);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,30.0);
    damage_info->damage_amount = fStack_14 * (float)_DAT_005d13be * damage_info->damage_amount;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,&damage_info->impact_direction,&CStack_2c);
  }
  pCStack_18 = &(this_ptr->base).base.model.base;
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_18);
    iVar2 = pSVar3->state_index;
    if ((((iVar2 != 0xf) && (iVar2 != 0xd)) && (iVar2 != 0x10)) && (iVar2 != 0xe)) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,
                 (CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20),&CStack_44);
      fStack_38 = CStack_44.x;
      afStack_34[(uint)bVar4 * -2] = *(float *)((int)&CStack_44 + (uint)bVar4 * -8 + 4);
      afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           *(float *)((int)&CStack_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      if (0.0 < afStack_34[1]) {
        iVar2 = 0xd;
      }
      else {
        iVar2 = 0xe;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_18,iVar2,1);
      core_shadow_cpp_CShadow_playDeathSound_FUN_00545100(this_ptr);
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"ShadowDead");
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    if ((this_ptr->type != 2) &&
       (iVar2 = core_enemy_cpp_CEnemy_testPainThreshold_FUN_0048a1b0
                          (&this_ptr->base,damage_info->damage_amount), iVar2 != 0)) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_18);
      iVar2 = pSVar3->state_index;
      if ((((iVar2 == 0) || ((iVar2 == 5 || (iVar2 == 0xc)))) || (iVar2 == 6)) || (iVar2 == 7)) {
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0x11,1);
        }
        if (iVar2 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0x12,1);
        }
        if (iVar2 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0x13,1);
        }
      }
    }
    core_shadow_cpp_CShadow_playDamageSound_FUN_005450c0(this_ptr);
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
