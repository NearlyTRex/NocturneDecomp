// Name: core_shadow.cpp_CShadow_processDamage_FUN_0053ea00
// Address: 0053ea00
// Address Range: [[0053ea00, 0053ec14]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_0053ea00(CShadow *this_ptr,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_0053ea00(CShadow *this_ptr,SDamageInfo *param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_102c [1015];
  uint uStack_44;
  uint uStack_38;
  float fStack_30;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar3 = 0;
  core_shadow_cpp_FUN_0053e9a0(this_ptr,param_2);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  if (param_2->damage_type == DAMAGE_TYPE_BURN) {
    core_shadow_cpp_FUN_0053df40(this_ptr);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,30.0);
    param_2->damage_amount = fStack_14 * (float)_DAT_005e6795 * param_2->damage_amount;
    core_actor_cpp_FUN_00408d70(this_ptr,&param_2->impact_direction);
  }
  pCStack_18 = &(this_ptr->base).base.model.base;
  fVar1 = (this_ptr->base).base.hit_points - param_2->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(pCStack_18);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 0xf) && (iVar2 != 0xd)) && (iVar2 != 0x10)) && (iVar2 != 0xe)) {
      core_actor_cpp_FUN_00408de0(this_ptr,*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20);
      uStack_38 = uStack_44;
      *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (0.0 < fStack_30) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0xd,1);
        core_shadow_cpp_FUN_0053e040(this_ptr);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0xe,1);
        core_shadow_cpp_FUN_0053e040(this_ptr);
      }
    }
  }
  else {
    if (this_ptr->type != 2) {
      iVar2 = core_motion_cpp_FUN_005035c0(pCStack_18);
      iVar2 = *(int *)(iVar2 + 0x24);
      if (((((iVar2 == 0) || (iVar2 == 5)) || ((iVar2 == 0xc || ((iVar2 == 6 || (iVar2 == 7)))))) ||
          (iVar2 == 8)) || (iVar2 == 9)) {
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x11,1);
        }
        if (iVar2 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x12,1);
        }
        if (iVar2 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x13,1);
        }
      }
    }
    core_shadow_cpp_FUN_0053e000(this_ptr);
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,param_2);
  return;
}
