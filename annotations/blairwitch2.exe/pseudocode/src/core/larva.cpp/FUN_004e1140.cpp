// Name: core_larva.cpp_FUN_004e1140
// Address: 004e1140
// Address Range: [[004e1140, 004e1338]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004e1140(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_larva_cpp_FUN_004e1140(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  byte *puVar3;
  uint uVar4;
  byte bVar5;
  uint auStackY_1010 [957];
  byte auStack_f0 [100];
  byte auStack_8c [100];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar5 = 0;
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10b00));
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x10afc));
    if (iVar2 == 0) {
      if ((float)_DAT_005dbebe <= *(float *)(param_1 + 0x2824)) {
        if (_DAT_005dbec6 <= (double)*(float *)(param_1 + 0x2824)) {
          puVar3 = &DAT_005dbe89;
        }
        else {
          puVar3 = &DAT_005dbe85;
        }
      }
      else {
        puVar3 = &DAT_005dbe81;
      }
      FUN_005b7790(auStack_f0,"l%s-shot?.wav",puVar3);
      uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,auStack_f0);
      *(uint *)(param_1 + 0x10afc) = uVar4;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)(param_1 + 0x2b4),3,1);
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = core_motion_cpp_FUN_005035c0((CMotionController *)(param_1 + 0x2b4));
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10afc));
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10b00));
    if ((float)_DAT_005dbebe <= *(float *)(param_1 + 0x2824)) {
      if (_DAT_005dbec6 <= (double)*(float *)(param_1 + 0x2824)) {
        puVar3 = &DAT_005dbe89;
      }
      else {
        puVar3 = &DAT_005dbe85;
      }
    }
    else {
      puVar3 = &DAT_005dbe81;
    }
    FUN_005b7790(auStack_8c,"l%s-die?.wav",puVar3);
    uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,auStack_8c);
    *(uint *)(param_1 + 0x10afc) = uVar4;
  }
  core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
  CStack_1c._0_4_ = CStack_28._0_4_;
  *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  core_gore_cpp_FUN_004c9850
            (g_CGorePtr,&CStack_1c,(CVector3f *)0x0,10,*(EBloodType *)(param_1 + 0x280c));
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
