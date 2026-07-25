// Name: FUN_0048eb30
// Address: 0048eb30
// Address Range: [[0048eb30, 0048ec52]]
// Convention: unknown
// Signature: void FUN_0048eb30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048eb30(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  if (*(int *)(param_1 + 0x570) == 0) {
    if (*(int *)(param_1 + 0x574) != 0) {
      core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,*(int *)(param_1 + 0x574));
      *(uint *)(param_1 + 0x574) = 0;
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
    if (iVar2 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      FUN_004940d0(INT_005b9284);
    }
  }
  else {
    iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (0x02DC9450,*(uint *)(param_1 + 0x574));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"fl-throw.wav");
      *(uint *)(param_1 + 0x574) = uVar3;
    }
    param_2 = *(float *)(param_1 + 0x57c) - param_2;
    *(float *)(param_1 + 0x57c) = param_2;
    if (param_2 < 0.0) {
      fVar1 = 1.0 / _DAT_0059d7a0;
      iVar2 = *(int *)(param_1 + 0x560) + -1;
      *(int *)(param_1 + 0x560) = iVar2;
      *(float *)(param_1 + 0x57c) = fVar1 + param_2;
      if (iVar2 < 0) {
        *(uint *)(param_1 + 0x560) = 0;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x570);
  *(uint *)(param_1 + 0x570) = 0;
  *(uint *)(param_1 + 0x578) = uVar3;
  return;
}
