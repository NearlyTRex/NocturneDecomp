// Name: core_larva.cpp_FUN_004fe510
// Address: 004fe510
// Address Range: [[004fe510, 004fe708]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004fe510(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_larva_cpp_FUN_004fe510(int param_1,int param_2)

{
  float fVar1;
  SMotion *pSVar2;
  byte *puVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint auStackY_1010 [957];
  byte auStack_f0 [100];
  byte auStack_8c [100];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar6 = 0;
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc270));
    iVar5 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 0xc26c));
    if (iVar5 == 0) {
      if ((float)_DAT_005e6ccb <= *(float *)(param_1 + 0x27b8)) {
        if (_DAT_005e6cd3 <= (double)*(float *)(param_1 + 0x27b8)) {
          puVar3 = &DAT_005e6c96;
        }
        else {
          puVar3 = &DAT_005e6c92;
        }
      }
      else {
        puVar3 = &DAT_005e6c8e;
      }
      FUN_005bfb40(auStack_f0,"l%s-shot?.wav",puVar3);
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,auStack_f0);
      *(uint *)(param_1 + 0xc26c) = uVar4;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)(param_1 + 0x158),3,1);
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    if ((*(int *)(pSVar2 + 0x24) != 5) && (*(int *)(pSVar2 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc26c));
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc270));
    if ((float)_DAT_005e6ccb <= *(float *)(param_1 + 0x27b8)) {
      if (_DAT_005e6cd3 <= (double)*(float *)(param_1 + 0x27b8)) {
        puVar3 = &DAT_005e6c96;
      }
      else {
        puVar3 = &DAT_005e6c92;
      }
    }
    else {
      puVar3 = &DAT_005e6c8e;
    }
    FUN_005bfb40(auStack_8c,"l%s-die?.wav",puVar3);
    uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,auStack_8c);
    *(uint *)(param_1 + 0xc26c) = uVar4;
  }
  core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
  CStack_1c._0_4_ = CStack_28._0_4_;
  *(uint *)((int)&CStack_1c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&CStack_28 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&CStack_1c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&CStack_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_gore_cpp_FUN_004e6060
            (g_CGorePtr,&CStack_1c,(CVector3f *)0x0,10,*(EBloodType *)(param_1 + 0x27a0));
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
