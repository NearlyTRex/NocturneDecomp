// Name: core_shadow.cpp_FUN_005459b0
// Address: 005459b0
// Address Range: [[005459b0, 00545bbe]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_005459b0(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_005459b0(CEnemy *param_1,SDamageInfo *param_2)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  byte bVar4;
  float afStackY_102c [1015];
  uint uStack_44;
  uint uStack_38;
  float fStack_30;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_shadow_cpp_FUN_00545000(param_1);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,30.0);
    *(float *)(param_2 + 4) = fStack_14 * (float)_DAT_005d13be * *(float *)(param_2 + 4);
    core_actor_cpp_FUN_00408b80(param_1,param_2 + 0x1c);
  }
  pCStack_18 = &(param_1->base).model.base;
  fVar1 = (param_1->base).hit_points - *(float *)(param_2 + 4);
  (param_1->base).hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_18);
    iVar2 = *(int *)(pSVar3 + 0x24);
    if ((((iVar2 != 0xf) && (iVar2 != 0xd)) && (iVar2 != 0x10)) && (iVar2 != 0xe)) {
      core_actor_cpp_FUN_00408bf0(param_1,*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20);
      uStack_38 = uStack_44;
      *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (0.0 < fStack_30) {
        iVar2 = 0xd;
      }
      else {
        iVar2 = 0xe;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_18,iVar2,1);
      core_shadow_cpp_FUN_00545100(param_1);
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"ShadowDead");
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(param_1,param_2);
      return;
    }
  }
  else {
    if ((*(int *)param_1[1].base.base.actor_name != 2) &&
       (iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4)), iVar2 != 0))
    {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_18);
      iVar2 = *(int *)(pSVar3 + 0x24);
      if ((((iVar2 == 0) || ((iVar2 == 5 || (iVar2 == 0xc)))) || (iVar2 == 6)) || (iVar2 == 7)) {
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,0x11,1);
        }
        if (iVar2 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,0x12,1);
        }
        if (iVar2 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,0x13,1);
        }
      }
    }
    core_shadow_cpp_FUN_005450c0(param_1);
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(param_1,param_2);
  return;
}
