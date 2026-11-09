// Name: core_shadow.cpp_FUN_0055fea0
// Address: 0055fea0
// Address Range: [[0055fea0, 005600fa]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0055fea0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_0055fea0(int param_1,int param_2)

{
  float fVar1;
  SMotion *pSVar2;
  byte bVar3;
  float afStackY_100c [1010];
  int iVar4;
  uint uStack_24;
  uint uStack_18;
  float fStack_10;
  CMotionController *pCStack_c;
  
  bVar3 = 0;
  iVar4 = *(int *)(param_2 + 0x30);
  if (((((iVar4 == 100) || (iVar4 == 0x65)) || (iVar4 == 0x66)) ||
      ((iVar4 == 0x67 || (iVar4 == 0x68)))) ||
     ((iVar4 == 0x69 || ((iVar4 == 0x6a || (iVar4 == 0x6b)))))) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"ShotShadowWithLead");
    *(uint *)(param_2 + 4) = 0;
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc2a0));
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc29c));
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc2a0));
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc2a4));
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc2a8));
    if (*(int *)(param_2 + 0x30) == 0x6c) {
      core_shadow_cpp_FUN_0055f4f0(param_1);
      core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
    }
    pCStack_c = (CMotionController *)(param_1 + 0x158);
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (0.0 < fVar1) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_c);
      iVar4 = *(int *)(pSVar2 + 0x24);
      if ((((iVar4 == 0) || (iVar4 == 5)) || (iVar4 == 0xc)) || ((iVar4 == 6 || (iVar4 == 7)))) {
        iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)(param_1 + 0x158),0x13,1);
        }
        if (iVar4 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)(param_1 + 0x158),0x14,1);
        }
        if (iVar4 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)(param_1 + 0x158),0x15,1);
        }
      }
      core_shadow_cpp_FUN_0055f4f0(param_1);
      core_enemy_cpp_FUN_004a0f00(param_1,param_2);
      return;
    }
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_c);
    iVar4 = *(int *)(pSVar2 + 0x24);
    if (((iVar4 != 0x11) && (iVar4 != 0xf)) && ((iVar4 != 0x12 && (iVar4 != 0x10)))) {
      core_actor_cpp_FUN_00408bb0(param_1,*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20);
      uStack_18 = uStack_24;
      *(uint *)(&stack0xffffffec + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (fStack_10 <= 0.0) {
        iVar4 = 0x10;
      }
      else {
        iVar4 = 0xf;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_c,iVar4,1);
      core_shadow_cpp_FUN_0055f540(param_1);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ShadowDead");
    }
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  }
  return;
}
