// Name: core_necklace.cpp_FUN_005adad0
// Address: 005adad0
// Address Range: [[005adad0, 005add25]]
// Convention: unknown
// Signature: void core_necklace_cpp_FUN_005adad0(CBoxActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_necklace_cpp_FUN_005adad0(CBoxActor *param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  float **ppfVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_18b0 [1480];
  float *pfStack_164;
  CBoxActor *pCStack_160;
  uint auStack_134 [12];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [6];
  uint uStack_d4;
  uint auStack_d0 [7];
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float afStack_98 [5];
  float fStack_84;
  float afStack_80 [5];
  float afStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar6 = 0;
  core_boxactor_cpp_FUN_0041c090(param_1,param_2);
  param_2 = *(float *)&param_1->field_0x2a8 - param_2;
  *(float *)&param_1->field_0x2a8 = param_2;
  if (0.0 < param_2) {
    return;
  }
  pCStack_160 = param_1;
  *(uint *)&param_1->field_0x2a8 = 0x3dcccccd;
  pfStack_164 = (float *)0x5adb31;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))();
  pfVar2 = afStack_ec;
  pfVar4 = &fStack_104;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar6 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  fStack_30 = fStack_104 + fStack_f8;
  fStack_2c = fStack_100 + fStack_f4;
  fStack_28 = fStack_fc + fStack_f0;
  fStack_3c = fStack_104 + fStack_f8;
  afStack_80[(uint)bVar6 * -2 + 0x12] = afStack_80[(uint)bVar6 * -2 + 0x15];
  afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
       afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
  fStack_60 = fStack_3c * _DAT_005f0f37;
  fStack_5c = fStack_38 * _DAT_005f0f37;
  fStack_58 = fStack_34 * _DAT_005f0f37;
  pCStack_160 = (CBoxActor *)0x40c90fdb;
  pfStack_164 = (float *)0x0;
  uStack_24 = core_actor_cpp_FUN_0040cf60();
  pCStack_160 = (CBoxActor *)0x40c90fdb;
  pfStack_164 = (float *)0x0;
  uStack_14 = uStack_24;
  uStack_20 = core_actor_cpp_FUN_0040cf60();
  pCStack_160 = (CBoxActor *)0x40c90fdb;
  pfStack_164 = (float *)0x0;
  uStack_14 = uStack_20;
  uStack_14 = core_actor_cpp_FUN_0040cf60();
  uStack_a8 = uStack_24;
  uStack_18 = uStack_14;
  uStack_a4 = uStack_20;
  uStack_a0 = uStack_14;
  fStack_84 = fStack_60;
  afStack_80[(uint)bVar6 * -2] = afStack_80[(uint)bVar6 * -2 + 9];
  afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
  pfStack_164 = (float *)0x5adc01;
  pCStack_160 = (CBoxActor *)(auStack_d0 + 10);
  core_xform_cpp_FUN_00594380();
  uStack_d4 = auStack_d0[3];
  auStack_d0[(uint)bVar6 * -2] = auStack_d0[(uint)bVar6 * -2 + 4];
  auStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       auStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  (auStack_d0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (auStack_d0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  pfStack_164 = (float *)0x5adc1a;
  pCStack_160 = (CBoxActor *)&uStack_d4;
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
  pCStack_160 = (CBoxActor *)auStack_134;
  pfStack_164 = (float *)0x3f800000;
  ppfVar3 = &pfStack_164;
  puVar5 = auStack_134;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *ppfVar3;
    ppfVar3 = ppfVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  afStack_98[4] = (float)core_actor_cpp_FUN_0040cf60(0x3f000000);
  pfStack_164 = afStack_98 + 2;
  afStack_98[2] = 0.0;
  afStack_98[3] = 0.0;
  uStack_1c = afStack_98[4];
  uStack_14 = afStack_98[4];
  core_xform_cpp_FUN_00591530();
  fStack_9c = afStack_80[2];
  afStack_98[(uint)bVar6 * -2] = afStack_80[(uint)bVar6 * -2 + 3];
  afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  fStack_54 = fStack_9c + fStack_84;
  fStack_50 = afStack_98[0] + afStack_80[0];
  fStack_4c = afStack_98[1] + afStack_80[1];
  fStack_48 = fStack_9c + fStack_84;
  afStack_80[(uint)bVar6 * -2 + 0xf] = afStack_80[(uint)bVar6 * -2 + 0xc];
  afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
       afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  afStack_6c[0] = (float)_DAT_0265370c;
  afStack_80[(uint)bVar6 * -2 + 6] = *(float *)(&DAT_02653710 + (uint)bVar6 * -8);
  afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       *(float *)(&DAT_02653714 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  uStack_b4 = 0;
  uStack_b0 = 0x3f800000;
  uStack_ac = 0;
  fStack_48 = fStack_48 + *(float *)&param_1->field_0x20;
  fStack_44 = fStack_44 + *(float *)&param_1->field_0x24;
  fStack_40 = fStack_40 + *(float *)&param_1->field_0x28;
  pCStack_160 = (CBoxActor *)0x0;
  pfStack_164 = (float *)(auStack_d0 + 7);
  unkafter_superopt_cpp_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3ed26e98,0x3ee66666,
             0x3f800000,afStack_80 + 0xe,afStack_80 + 5);
  return;
}
