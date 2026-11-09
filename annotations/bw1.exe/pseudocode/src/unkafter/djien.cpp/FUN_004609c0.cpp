// Name: unkafter_djien.cpp_FUN_004609c0
// Address: 004609c0
// Address Range: [[004609c0, 00460ca5]]
// Convention: unknown
// Signature: void unkafter_djien_cpp_FUN_004609c0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_djien_cpp_FUN_004609c0(CEnemy *param_1)

{
  byte *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1104 [999];
  uint *puVar6;
  float *pfVar7;
  SDamageInfo *this_ptr;
  SDamageInfo aSStack_158 [4];
  uint uStack_154;
  CEnemy *pCStack_124;
  CEnemy *pCStack_120;
  uint uStack_11c;
  float afStack_118 [5];
  float afStack_104 [3];
  float afStack_f8 [3];
  float fStack_ec;
  float afStack_e8 [2];
  byte auStack_e0 [12];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_98;
  uint uStack_80;
  float afStack_7c [5];
  uint uStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  
  bVar5 = 0;
  puVar1 = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569130(puVar1,*(uint *)&param_1[1].field_0x8);
  puVar6 = &uStack_11c;
  uStack_11c = uStack_98;
  afStack_118[(uint)bVar5 * -2] = *(float *)(auStack_e0 + ((uint)bVar5 * -2 + 0x12) * 4 + 4);
  afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)(auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13) * 4 + 4);
  core_actor_cpp_FUN_00408b40(param_1,puVar6);
  core_skeleton_cpp_FUN_00569130(puVar1,*(uint *)&param_1[1].field_0x10);
  pfVar7 = afStack_118 + 2;
  afStack_118[2] = (float)uStack_80;
  afStack_118[(uint)bVar5 * -2 + 3] = afStack_7c[(uint)bVar5 * -2];
  afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408b40(param_1,pfVar7);
  core_skeleton_cpp_FUN_00569130(puVar1,*(uint *)&param_1[1].field_0xc);
  pfVar7 = afStack_118 + 5;
  afStack_104[0] = (float)uStack_68;
  afStack_118[(uint)bVar5 * -2 + 6] = afStack_64[(uint)bVar5 * -2];
  afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408b40(param_1,pfVar7);
  afStack_64[2] = fStack_a4;
  afStack_64[(uint)bVar5 * -2 + 3] = *(float *)(auStack_e0 + ((uint)bVar5 * -2 + 0xf) * 4 + 4);
  afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       *(float *)(auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10) * 4 + 4);
  core_skeleton_cpp_FUN_00569130(puVar1,*(uint *)&param_1[1].field_0x14);
  pfVar7 = afStack_118 + 8;
  afStack_f8[0] = (float)uStack_c8;
  afStack_118[(uint)bVar5 * -2 + 9] = *(float *)(auStack_e0 + ((uint)bVar5 * -2 + 6) * 4 + 4);
  afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       *(float *)(auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4 + 4);
  core_actor_cpp_FUN_00408b40(param_1,pfVar7);
  fVar2 = afStack_64[2];
  this_ptr = aSStack_158;
  fStack_50 = fStack_44;
  afStack_64[(uint)bVar5 * -2 + 6] = afStack_64[(uint)bVar5 * -2 + 9];
  afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  fStack_b0 = fVar2 + fStack_50;
  fStack_ac = afStack_64[3] + fStack_4c;
  fStack_a8 = fStack_54 + fStack_48;
  fStack_d4 = fVar2 + fStack_50;
  *(uint *)(auStack_e0 + ((uint)bVar5 * -2 + 3) * 4 + 4) =
       *(uint *)(auStack_e0 + ((uint)bVar5 * -2 + 0xc) * 4 + 4);
  *(uint *)(auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4 + 4) =
       *(uint *)(auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4 + 4);
  fStack_2c = fStack_b0;
  fStack_20 = fStack_d4 * _DAT_005d8d8c;
  fStack_1c = fStack_d0 * _DAT_005d8d8c;
  fStack_18 = fStack_cc * _DAT_005d8d8c;
  fStack_28 = fStack_ac;
  fStack_ec = fStack_d4 * _DAT_005d8d8c;
  afStack_e8[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2 + 0x12];
  afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
  fStack_24 = fStack_a8;
  fStack_bc = fStack_2c;
  *(float *)(auStack_e0 + ((uint)bVar5 * -2 + 9) * 4 + 4) = afStack_64[(uint)bVar5 * -2 + 0xf];
  *(float *)(auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4 + 4) =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  fStack_38 = fStack_bc * _DAT_005d8d8c;
  fStack_34 = fStack_b8 * _DAT_005d8d8c;
  fStack_30 = fStack_b4 * _DAT_005d8d8c;
  auStack_e0._0_4_ = fStack_bc * _DAT_005d8d8c;
  *(float *)(auStack_e0 + (uint)bVar5 * -8 + 4) = afStack_64[(uint)bVar5 * -2 + 0xc];
  *(float *)(auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4 + 4) =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr);
  uStack_154 = core_actor_cpp_FUN_0040cc00(0x41000000,0x41400000);
  pCStack_124 = param_1;
  pCStack_120 = param_1;
  uStack_14 = uStack_154;
  core_enemy_cpp_FUN_004a0770(param_1,(CVector3f *)auStack_e0,3.0,aSStack_158);
  core_enemy_cpp_FUN_004a0770(param_1,(CVector3f *)&fStack_ec,3.0,aSStack_158);
  iVar3 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1[1].field_0x60);
  if (iVar3 != 0) {
    return;
  }
  uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                    (param_1,"?stick-stump?.wav" + 1);
  *(uint *)&param_1[1].field_0x60 = uVar4;
  return;
}
