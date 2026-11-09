// Name: core_lantern.cpp_FUN_0059ccf0
// Address: 0059ccf0
// Address Range: [[0059ccf0, 0059cec1]]
// Convention: unknown
// Signature: void core_lantern_cpp_FUN_0059ccf0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lantern_cpp_FUN_0059ccf0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  core_weapon_cpp_FUN_00589c80(param_1,param_2);
  if (0.0 < *(float *)(param_1 + 0x700)) {
    param_2 = *(float *)(param_1 + 0x6d4) - param_2;
    *(uint *)(param_1 + 0x6f8) = 0;
    *(float *)(param_1 + 0x6d4) = param_2;
    if (param_2 <= 0.0) {
      uVar3 = core_actor_cpp_FUN_0040cf60(0x3f333333,0x3f800000);
      *(uint *)(param_1 + 0x6f8) = uVar3;
      fVar4 = (float)core_actor_cpp_FUN_0040cf60(0x3dcccccd,0x3e4ccccd);
      fVar2 = (float)_DAT_005ef7b1;
      fVar1 = (float)_DAT_005ef7b9;
      *(float *)(param_1 + 0x6f0) = *(float *)(param_1 + 0x6f8) * fVar2 + fVar1;
      *(float *)(param_1 + 0x6f4) = *(float *)(param_1 + 0x6f8) * fVar2 + fVar1;
      *(float *)(param_1 + 0x6d4) = fVar4 * *(float *)(param_1 + 0x6f8);
      *(float *)(param_1 + 0x6f0) = *(float *)(param_1 + 0x700) * *(float *)(param_1 + 0x6f0);
      *(float *)(param_1 + 0x6f4) = *(float *)(param_1 + 0x700) * *(float *)(param_1 + 0x6f4);
      *(uint *)(*(int *)(param_1 + 0x704) + 0x1cb4) = 1;
      *(uint *)(*(int *)(param_1 + 0x704) + 0x1cbc) = 1;
      *(uint *)(*(int *)(param_1 + 0x704) + 0x140) = *(uint *)(param_1 + 0x6f0);
      *(uint *)(*(int *)(param_1 + 0x704) + 0x38) = *(uint *)(param_1 + 0x6f4);
      *(uint *)(*(int *)(param_1 + 0x704) + 0x1cd0) = 1;
      core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
                (*(CDemonLight **)(param_1 + 0x704),
                 *(float *)(param_1 + 0x700) * *(float *)(param_1 + 0x6f8));
      *(float *)(*(int *)(param_1 + 0x704) + 0x2fac) =
           (*(float *)(param_1 + 0x6f8) * (float)_DAT_005ef7c1 + (float)_DAT_005ef7c9) *
           *(float *)(param_1 + 0x700);
    }
    core_lantern_cpp_FUN_0059ced0(param_1);
    core_set_cpp_FUN_00530630(g_CDemonSetPtr,*(CDemonLight **)(param_1 + 0x704));
    *(uint *)(param_1 + 0xfc) = 1;
    return;
  }
  *(uint *)(param_1 + 0xfc) = 0;
  *(uint *)(param_1 + 0x700) = 0;
  return;
}
