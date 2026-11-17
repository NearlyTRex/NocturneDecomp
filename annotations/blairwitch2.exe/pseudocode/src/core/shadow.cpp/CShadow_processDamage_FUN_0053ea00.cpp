// Name: core_shadow.cpp_CShadow_processDamage_FUN_0053ea00
// Address: 0053ea00
// Address Range: [[0053ea00, 0053ec14]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_0053ea00(CShadow *this_ptr,SDamageInfo *param_2)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_0053ea00(CShadow *this_ptr,SDamageInfo *param_2)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  byte bVar4;
  float afStackY_102c [1015];
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar4 = 0;
  core_shadow_cpp_CShadow_scaleDamageByHitBone_FUN_0053e9a0(this_ptr,param_2);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  if (param_2->damage_type == DAMAGE_TYPE_BURN) {
    core_shadow_cpp_CShadow_playHitAlertSound_FUN_0053df40(this_ptr);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,30.0);
    param_2->damage_amount = fStack_14 * (float)10 * param_2->damage_amount;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,&param_2->impact_direction,&CStack_2c);
  }
  pCStack_18 = &(this_ptr->base).base.model.base;
  fVar1 = (this_ptr->base).base.hit_points - param_2->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(pCStack_18);
    iVar3 = pSVar2->state_index;
    if ((((iVar3 != 0xf) && (iVar3 != 0xd)) && (iVar3 != 0x10)) && (iVar3 != 0xe)) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((CDemonActor *)this_ptr,
                 &(g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.location.position,
                 &CStack_44);
      fStack_38 = CStack_44.x;
      afStack_34[(uint)bVar4 * -2] = *(float *)((int)&CStack_44 + (uint)bVar4 * -8 + 4);
      afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           *(float *)((int)&CStack_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      if (0.0 < afStack_34[1]) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0xd,1);
        core_shadow_cpp_CShadow_playDeathSound_FUN_0053e040(this_ptr);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0xe,1);
        core_shadow_cpp_CShadow_playDeathSound_FUN_0053e040(this_ptr);
      }
    }
  }
  else {
    if (this_ptr->type != 2) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(pCStack_18);
      iVar3 = pSVar2->state_index;
      if (((((iVar3 == 0) || (iVar3 == 5)) || ((iVar3 == 0xc || ((iVar3 == 6 || (iVar3 == 7)))))) ||
          (iVar3 == 8)) || (iVar3 == 9)) {
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x11,1);
        }
        if (iVar3 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x12,1);
        }
        if (iVar3 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x13,1);
        }
      }
    }
    core_shadow_cpp_CShadow_playDamageSound_FUN_0053e000(this_ptr);
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,param_2);
  return;
}
