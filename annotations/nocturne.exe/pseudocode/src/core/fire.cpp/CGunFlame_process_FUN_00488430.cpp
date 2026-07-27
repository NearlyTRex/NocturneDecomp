// Name: core_fire.cpp_CGunFlame_process_FUN_00488430
// Address: 00488430
// Address Range: [[00488430, 00488579]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_process_FUN_00488430(float *param_1)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_process_FUN_00488430(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  fVar4 = *(float *)(0x01C775EC + 0x264);
  fVar3 = *param_1;
  *param_1 = fVar3 - fVar4;
  if (0.0 < fVar3 - fVar4) {
    pfVar1 = param_1 + 4;
    pfVar2 = param_1 + 1;
    *pfVar2 = *pfVar2 + *pfVar1 * fVar4;
    param_1[2] = param_1[2] + param_1[5] * fVar4;
    fVar5 = (float)0.20000000000000001;
    param_1[3] = param_1[3] + param_1[6] * fVar4;
    fVar3 = param_1[5] * 5.261057535674868e-315._0_4_;
    fVar6 = param_1[6] * 5.261057535674868e-315._0_4_;
    *pfVar1 = *pfVar1 * 5.261057535674868e-315._0_4_;
    param_1[5] = fVar3;
    param_1[6] = fVar6;
    fVar3 = (float)0.5;
    param_1[5] = fVar4 * fVar5 + param_1[5];
    iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(fVar4 * fVar3);
    if (iVar7 != 0) {
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                (0x01C08D04,pfVar2,0x3f000000,0,0xffff);
    }
    if ((param_1[8] != 0.0) && (iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(fVar4), iVar7 != 0)
       ) {
      core_fire_cpp_CGunFlame_init_FUN_004880d0(param_1);
    }
    param_1[7] = fVar4 * 15.0f + param_1[7];
    fVar3 = 1.6049665430689486e-314._0_4_;
    if (0x419fffff < (int)param_1[7]) {
      do {
        param_1[7] = param_1[7] + fVar3;
      } while (0x419fffff < (int)param_1[7]);
      return;
    }
  }
  else {
    *param_1 = 0.0;
  }
  return;
}
