// Name: unkafter_demnfolk.cpp_FUN_0045c7b0
// Address: 0045c7b0
// Address Range: [[0045c7b0, 0045c9d2]]
// Convention: unknown
// Signature: void unkafter_demnfolk_cpp_FUN_0045c7b0(int param_1,int param_2)

#include "nocturne.h"

void unkafter_demnfolk_cpp_FUN_0045c7b0(int param_1,int param_2)

{
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"@ShotInvulnerable" + 1);
    return;
  }
  unkafter_demnfolk_cpp_FUN_0045c4a0(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc340) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  *(uint *)(param_1 + 0xc1e4) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    iVar2 = core_actor_cpp_FUN_0040cc60(0,3);
    iVar2 = iVar2 + 0xf;
    if (iVar2 == 0x12) {
      iVar3 = core_actor_cpp_FUN_0040cc60(0,4);
      if (iVar3 != 1) {
        iVar2 = 0xf;
      }
    }
    if (*(int *)(param_2 + 0x28) == 4) {
      iVar3 = core_actor_cpp_FUN_0040cd00(0.6);
      if (iVar3 != 0) {
        iVar2 = core_actor_cpp_FUN_0040cc60(0,1);
        iVar2 = iVar2 + 9;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)(param_1 + 0x158),iVar2,1);
    if (*(float *)(param_1 + 0xc344) <= 0.0) {
      *(uint *)(param_1 + 0xc344) = 0x40000000;
      iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 0xc34c));
      if (iVar2 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x14c))(param_1);
        core_enemy_cpp_FUN_004a0f00(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    if ((*(int *)(pSVar1 + 0x24) != 0x1a) && (*(int *)(pSVar1 + 0x24) != 0x19)) {
      unkafter_demnfolk_cpp_FUN_0045bfa0(param_1);
      iVar2 = core_actor_cpp_FUN_0040cc60(0,4);
      iVar2 = iVar2 + 0x14;
      if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc340) * 4) == 0) &&
         (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc33c) * 4) != 0)) {
        iVar2 = 0x1f;
      }
      iVar3 = _stricmp
                        ((char *)(param_1 + 0x24a8),"D_SHERIFF.dfm");
      if (iVar3 == 0) {
        iVar2 = 0x18;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),iVar2,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc34c));
      (**(code **)(*(int *)(param_1 + 0x154) + 0x150))(param_1);
    }
  }
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
