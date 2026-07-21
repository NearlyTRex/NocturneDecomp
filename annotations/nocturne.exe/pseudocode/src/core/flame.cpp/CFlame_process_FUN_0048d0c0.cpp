// Name: core_flame.cpp_CFlame_process_FUN_0048d0c0
// Address: 0048d0c0
// Address Range: [[0048d0c0, 0048d5c4]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_process_FUN_0048d0c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_CFlame_process_FUN_0048d0c0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  byte local_f8 [100];
  byte local_94 [28];
  float fStack_78;
  byte auStack_6c [20];
  float fStack_58;
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  int iStack_24;
  float fStack_1c;
  float fStack_18;
  float local_14;
  
  if (((*(char *)(param_1 + 0x1b0) != '\0') && (*(int *)(param_1 + 0x1ac) == 0)) &&
     (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x1b0)
     , iVar2 != 0)) {
    if ((*(int *)(param_1 + 0x1a0) != 1) && (*(int *)(param_1 + 0x1a0) != 3)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                  (0x01C08D04,param_1 + 0x20,0,0x4000,0x10000,1,0xffff);
      } while (iVar2 < 10);
    }
    *(uint *)(param_1 + 0x288) = 1;
    *(uint *)(param_1 + 0x1ac) = 1;
  }
  if (((*(char *)(param_1 + 0x214) != '\0') && (*(int *)(param_1 + 0x1ac) != 0)) &&
     ((iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                         (0x01C03A10,param_1 + 0x214), iVar2 != 0 &&
      (*(uint *)(param_1 + 0x1ac) = 0, *(int *)(param_1 + 0x1a0) != 3)))) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
              (0x01C08D04,param_1 + 0x20,*(float *)(param_1 + 0x154) * (float)_DAT_00581557,0,
               0xffff);
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(float *)(param_1 + 0x15c) = param_2 * (float)_DAT_0058155f + *(float *)(param_1 + 0x15c);
    if (0x40ffffff < *(int *)(param_1 + 0x15c)) {
      *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) + _DAT_00581567;
    }
    *(uint *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x38) = 0;
    *(uint *)(param_1 + 0x34) = 0;
    core_flame_cpp_CFlame_updateGlobe_FUN_0048e230(param_1);
    if (*(int *)(param_1 + 0x298) == 0) {
      if (*(int *)(param_1 + 0x1a8) != 0) {
        core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,*(int *)(param_1 + 0x1a8));
        *(uint *)(param_1 + 0x1a8) = 0;
      }
    }
    else {
      iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                        (0x02DC9450,*(uint *)(param_1 + 0x1a8));
      if (iVar2 == 0) {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f733333,0x3f866666)
        ;
        _sprintf(local_f8,"torch.wav * %f",(double)local_14);
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000,2);
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_14);
        uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,local_f8);
        *(uint *)(param_1 + 0x1a8) = uVar5;
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      }
    }
    if (*(int *)(param_1 + 0x280) != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(local_94);
      iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x34))(iVar2,local_94);
      if (iVar2 == 2) {
        iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        fStack_40 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_3c = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_38 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
        if (((float)_DAT_0058156f < fStack_3c) && (fStack_3c < fStack_78)) {
          fVar4 = (float10)round
                                     (((float10)*(float *)(param_1 + 0x150) +
                                      (float10)*(float *)(param_1 + 0x158)) * (float10)_DAT_00581577
                                     );
          fStack_18 = (float)(int)ROUND(fVar4);
          fStack_1c = (float)(int)fStack_18;
          local_14 = fStack_18;
          if ((ABS(fStack_44) < fStack_78 + fStack_1c) && (ABS(fStack_3c) < fStack_78 + fStack_1c))
          {
            FUN_00427730(iVar2,(float *)(param_1 + 0x20),0,0,0x40000000,1);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x284) != 0) {
      if (*(int *)(param_1 + 0x294) < 0) {
        *(uint *)(param_1 + 0x294) = 0;
      }
      if (*(int *)(0x01E57284 + 0x150bf4) <= *(int *)(param_1 + 0x294)) {
        *(uint *)(param_1 + 0x294) = 0;
      }
      if (0 < *(int *)(0x01E57284 + 0x150bf4)) {
        iVar2 = *(int *)(0x01E57284 + 0x150bf8 + *(int *)(param_1 + 0x294) * 4);
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_6c);
        iVar3 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x34))(iVar2,auStack_6c);
        if (iVar3 == 2) {
          fStack_38 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
          fVar1 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_30 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
          uVar5 = 0x48d528;
          fStack_34 = fVar1;
          fVar4 = (float10)round
                                     (((float10)*(float *)(param_1 + 0x150) +
                                      (float10)*(float *)(param_1 + 0x158)) * (float10)_DAT_00581577
                                     );
          iStack_24 = (int)ROUND(fVar4);
          if (((float)_DAT_0058156f < fVar1) && (fStack_38 < fStack_58)) {
            fStack_28 = (float)iStack_24;
            if ((ABS(fStack_3c) < fStack_54 + fStack_28) && (ABS(fStack_34) < fStack_54 + fStack_28)
               ) {
              fStack_18 = (float)iStack_24;
              FUN_00427730(iVar2,(float *)(param_1 + 0x20),0,0,0x40000000,0,uVar5);
            }
          }
        }
        *(int *)(param_1 + 0x294) = *(int *)(param_1 + 0x294) + 1;
        return;
      }
    }
  }
  return;
}
