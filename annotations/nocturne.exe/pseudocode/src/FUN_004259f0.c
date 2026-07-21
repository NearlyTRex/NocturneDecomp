// Name: FUN_004259f0
// Address: 004259f0
// Address Range: [[004259f0, 00425c14]]
// Convention: unknown
// Signature: undefined4 FUN_004259f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004259f0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  fVar1 = *(float *)(param_1 + 0x2dd0) - param_2;
  *(float *)(param_1 + 0x2dd0) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x2dd0) = 0;
  }
  core_charactr_cpp_CCharacter_processFire_FUN_004269b0(param_1,param_2);
  core_charactr_cpp_CCharacter_advanceGesture_FUN_00429660(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0xb648) - param_2;
  *(float *)(param_1 + 0xb648) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xb648) = 0;
  }
  if ((0.0 < *(float *)(param_1 + 0x2610)) &&
     (param_2 = *(float *)(param_1 + 0x2610) - param_2, *(float *)(param_1 + 0x2610) = param_2,
     uVar2 = 0x01E56DA0, param_2 < 0.0)) {
    *(uint *)(param_1 + 0x2610) = 0;
    core_script_cpp_CScript_setSpeaker_FUN_00504bf0(uVar2,param_1);
  }
  if (*(int *)(param_1 + 0x243c) == 2) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0
              (0x01C775EC,param_1 + 0x2440,
               *(float *)(param_1 + 0x2434) / *(float *)(param_1 + 0x2438),0x40000000);
  }
  if (*(int *)(param_1 + 0x2404) == 0) {
    if (*(float *)(param_1 + 0x240c) == _DAT_0059b094) {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        if (*(int *)(iVar3 + 0x24ac) != 0) {
          core_charactr_cpp_CCharacter_computePickup_FUN_00429010(param_1,iVar4,0);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar4 < 2);
    }
    fVar1 = *(float *)(param_1 + 0xe4);
    *(uint *)(param_1 + 0xe4) = 0;
    *(float *)(param_1 + 0x24) = fVar1 + *(float *)(param_1 + 0x24);
    if ((*(float *)(param_1 + 0x240c) == _DAT_0059b094) || (*(int *)(param_1 + 0xdc) != 0)) {
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x38))
                        (param_1,*(uint *)(param_1 + 0x2dd4),0);
      *(uint *)(param_1 + 0x240c) = uVar2;
    }
    *(uint *)(param_1 + 0x2408) =
         (uint)(*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x240c) + (float)_DAT_00579f62);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(uint *)(param_1 + 0x2414) = *(uint *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x2410) = 0;
    if (((*(int *)(param_1 + 0xdc) == 0) && (*(int *)(param_1 + 0x2598) == 0)) &&
       (iVar3 = core_hero_cpp_isAnyHeroWithinCylinder_FUN_004b4630
                          (param_1 + 0x20,*(uint *)(param_1 + 0x2de0),
                           *(uint *)(param_1 + 0x2ddc)), iVar3 == 0)) {
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xb63c));
      return 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
