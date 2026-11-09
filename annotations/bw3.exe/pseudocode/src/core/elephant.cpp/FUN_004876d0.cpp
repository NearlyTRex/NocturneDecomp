// Name: core_elephant.cpp_FUN_004876d0
// Address: 004876d0
// Address Range: [[004876d0, 0048792b]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_004876d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_elephant_cpp_FUN_004876d0(int param_1)

{
  float fVar1;
  byte auVar2 [4];
  int iVar3;
  byte bVar4;
  float afStackY_10a8 [1010];
  float *pfVar5;
  byte auStack_c0 [4];
  float afStack_bc [5];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  float afStack_90 [3];
  float fStack_84;
  float afStack_80 [6];
  float afStack_68 [2];
  byte auStack_60 [4];
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  
  bVar4 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar3 != 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  pfVar5 = afStack_bc + 8;
  afStack_9c[0] = (float)uStack_3c;
  afStack_bc[(uint)bVar4 * -2 + 9] = afStack_5c[(uint)bVar4 * -2 + 9];
  afStack_bc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  core_actor_cpp_FUN_00408b80(param_1,pfVar5);
  auStack_c0 = (byte  [4])afStack_bc[2];
  afStack_bc[(uint)bVar4 * -2] = afStack_bc[(uint)bVar4 * -2 + 3];
  afStack_bc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_bc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  afStack_90[2] = *(float *)(param_1 + 0x2e8);
  afStack_90[0] = 0.0;
  afStack_90[1] = 0.0;
  core_actor_cpp_FUN_00408b00(param_1,afStack_bc + 0xb);
  fVar1 = afStack_bc[0];
  auVar2 = auStack_c0;
  afStack_80[5] = fStack_24;
  afStack_68[(uint)bVar4 * -2] = afStack_5c[(uint)bVar4 * -2 + 0xf];
  afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  fStack_48 = -afStack_80[5];
  fStack_30 = (float)auVar2 + afStack_80[5];
  fStack_2c = fVar1 + afStack_68[0];
  fStack_28 = afStack_bc[1] + afStack_68[1];
  auStack_60 = (byte  [4])((float)auVar2 + afStack_80[5]);
  afStack_5c[(uint)bVar4 * -2] = afStack_5c[(uint)bVar4 * -2 + 0xc];
  afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  fStack_44 = -afStack_68[0];
  fStack_40 = -afStack_68[1];
  fStack_84 = fStack_48;
  afStack_80[(uint)bVar4 * -2] = afStack_5c[(uint)bVar4 * -2 + 6];
  afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if (afStack_80 + 2 != &fStack_84) {
    afStack_80[2] = fStack_84;
    afStack_80[3] = afStack_80[0];
    afStack_80[4] = afStack_80[1];
  }
  fStack_18 = SQRT(afStack_80[4] * afStack_80[4] +
                   afStack_80[2] * afStack_80[2] + afStack_80[3] * afStack_80[3]);
  if (fStack_18 <= 0.0) {
    afStack_80[3] = 0.0;
    afStack_80[2] = 0.0;
    afStack_80[4] = 0.0;
  }
  else {
    fVar1 = 1.0 / fStack_18;
    afStack_80[2] = afStack_80[2] * fVar1;
    afStack_80[3] = afStack_80[3] * fVar1;
    afStack_80[4] = afStack_80[4] * fVar1;
  }
  core_fire_cpp_CFireEffect_createLaserCone_FUN_004a2b10
            (0x01C73654,(CVector3f *)auStack_c0,(CVector3f *)auStack_60,1.0,0,0xff,0,
             *(float *)(param_1 + 0x594) * _DAT_005bd9dc * _DAT_005bd9e0);
  *(uint *)(param_1 + 0x598) = 1;
  afStack_5c[2] = (float)auStack_60 - (float)auStack_c0;
  afStack_5c[3] = afStack_5c[0] - afStack_bc[0];
  fStack_4c = afStack_5c[1] - afStack_bc[1];
  fStack_a8 = (float)auStack_60 - (float)auStack_c0;
  afStack_bc[(uint)bVar4 * -2 + 6] = afStack_5c[(uint)bVar4 * -2 + 3];
  afStack_bc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  *(float *)(param_1 + 0x59c) =
       SQRT(fStack_a0 * fStack_a0 + fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4);
  return;
}
