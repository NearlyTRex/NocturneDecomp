// Name: core_shadow.cpp_FUN_0053ea00
// Address: 0053ea00
// Address Range: [[0053ea00, 0053ec14]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053ea00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_0053ea00(int param_1,int param_2)

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
  core_shadow_cpp_FUN_0053e9a0(param_1,param_2);
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10b1c));
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_shadow_cpp_FUN_0053df40(param_1);
    fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x41700000,0x41f00000);
    *(float *)(param_2 + 4) = fStack_14 * (float)_DAT_005e6795 * *(float *)(param_2 + 4);
    core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
  }
  pCStack_18 = (CMotionController *)(param_1 + 0x2b4);
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(pCStack_18);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 0xf) && (iVar2 != 0xd)) && (iVar2 != 0x10)) && (iVar2 != 0xe)) {
      core_actor_cpp_FUN_00408de0(param_1,*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20);
      uStack_38 = uStack_44;
      *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (0.0 < fStack_30) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0xd,1);
        core_shadow_cpp_FUN_0053e040(param_1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0xe,1);
        core_shadow_cpp_FUN_0053e040(param_1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10af8) != 2) {
      iVar2 = core_motion_cpp_FUN_005035c0(pCStack_18);
      iVar2 = *(int *)(iVar2 + 0x24);
      if (((((iVar2 == 0) || (iVar2 == 5)) || ((iVar2 == 0xc || ((iVar2 == 6 || (iVar2 == 7)))))) ||
          (iVar2 == 8)) || (iVar2 == 9)) {
        iVar2 = core_actor_cpp_FUN_0040cfc0(0,2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)(param_1 + 0x2b4),0x11,1);
        }
        if (iVar2 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)(param_1 + 0x2b4),0x12,1);
        }
        if (iVar2 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)(param_1 + 0x2b4),0x13,1);
        }
      }
    }
    core_shadow_cpp_FUN_0053e000(param_1);
  }
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
