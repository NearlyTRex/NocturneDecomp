// Name: core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0
// Address: 00560cb0
// Address Range: [[00560cb0, 005612ba]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0(CSpike *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0(CSpike *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CVector3f *point;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_10f8 [933];
  SDamageInfo *this_ptr_00;
  CVector3f aCStack_238 [8];
  SDamageInfo aSStack_1d8 [4];
  uint uStack_1d4;
  uint uStack_1bc;
  float fStack_1b8;
  uint uStack_1b4;
  uint uStack_1a8;
  CSpike *pCStack_1a4;
  CSpike *pCStack_1a0;
  SCollisionInfo SStack_19c;
  byte auStack_174 [28];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [6];
  CBoundingBox3D CStack_128;
  uint uStack_110;
  float afStack_10c [5];
  float fStack_f8;
  float afStack_f4 [4];
  uint uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float afStack_d4 [3];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  uint uStack_50;
  float afStack_4c [5];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr);
  pfVar5 = afStack_140;
  pfVar6 = &fStack_158;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
  }
  fStack_158 = fStack_158 + _DAT_005eb0c8;
  fStack_154 = fStack_154 + _DAT_005eb0c8;
  fStack_14c = fStack_14c + _DAT_005eb0cc;
  fStack_148 = fStack_148 + _DAT_005eb0cc;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041b600(&CStack_128);
  __arrinit(aCStack_238,8,&g_CVectorTypeInfo);
  point = aCStack_238;
  iStack_18 = 0;
  do {
    core_box_cpp_FUN_0041a600(&fStack_158,iStack_18);
    uStack_50 = uStack_a4;
    afStack_4c[(uint)bVar7 * -2] = afStack_f4[(uint)bVar7 * -2 + 0x15];
    afStack_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
    core_actor_cpp_FUN_00408d70(this_ptr,&uStack_50);
    CStack_74._0_4_ = CStack_5c._0_4_;
    *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_5c + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (point != &CStack_74) {
      *(uint *)point = CStack_74._0_4_;
      *(uint *)&point->field_0x4 = CStack_74._4_4_;
      *(uint *)&point->field_0x8 = CStack_74._8_4_;
    }
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(&CStack_128,point);
    iStack_18 = iStack_18 + 1;
    point = point + 1;
  } while (iStack_18 < 8);
  fStack_38 = SQRT(fStack_150 * fStack_150 + fStack_158 * fStack_158 + fStack_154 * fStack_154);
  fStack_34 = SQRT(fStack_144 * fStack_144 + fStack_148 * fStack_148 + fStack_14c * fStack_14c);
  fStack_30 = fStack_38;
  if (fStack_38 < fStack_34) {
    fStack_30 = fStack_34;
  }
  fStack_30 = fStack_30 * _DAT_005eb0d0 + _DAT_005eb0d4;
  fStack_2c = fStack_30 * fStack_30;
  afStack_10c[4] = fStack_144 - fStack_150;
  afStack_10c[2] = 0.0;
  afStack_10c[3] = 0.0;
  fStack_14 = afStack_10c[4];
  core_actor_cpp_FUN_00408cf0(this_ptr,afStack_10c + 2);
  fStack_b0 = fStack_f8;
  afStack_f4[(uint)bVar7 * -2 + 0x12] = afStack_f4[(uint)bVar7 * -2];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pfStack_24 = (float *)&this_ptr->field_0x20;
  iStack_20 = 0;
  for (iStack_1c = 0; iStack_1c < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_1c = iStack_1c + 1
      ) {
    iVar4 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_20);
    fVar1 = *pfStack_24 - *(float *)(iVar4 + 0x20);
    fVar3 = pfStack_24[1] - *(float *)(iVar4 + 0x24);
    fVar2 = pfStack_24[2] - *(float *)(iVar4 + 0x28);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fStack_2c) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0(&SStack_19c);
      SStack_19c._0_4_ = 0;
      iStack_28 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x44))(iVar4,&SStack_19c);
      if (iStack_28 != 0) {
        SStack_19c._20_4_ = 0;
        core_actor_cpp_FUN_00408de0(this_ptr,(float *)(iVar4 + 0x20));
        afStack_f4[2] = fStack_68;
        afStack_f4[(uint)bVar7 * -2 + 3] = afStack_64[(uint)bVar7 * -2];
        afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        if (afStack_f4[2] < fStack_158) {
          afStack_f4[2] = fStack_158;
        }
        if (fStack_14c < afStack_f4[2]) {
          afStack_f4[2] = fStack_14c;
        }
        if (afStack_f4[3] < fStack_154) {
          afStack_f4[3] = fStack_154;
        }
        if (fStack_148 < afStack_f4[3]) {
          afStack_f4[3] = fStack_148;
        }
        uStack_e4 = 0;
        core_actor_cpp_FUN_00408d70(this_ptr,afStack_f4 + 2);
        fStack_98 = fStack_80;
        afStack_f4[(uint)bVar7 * -2 + 0x18] = afStack_f4[(uint)bVar7 * -2 + 0x1e];
        afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
             afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
        fStack_14 = (float)core_actor_cpp_FUN_004093a0
                                     (iVar4,afStack_f4 + 0x17,afStack_f4 + 0x11,auStack_174,
                                      &SStack_19c,iStack_28,&CStack_128);
        fVar3 = fStack_90;
        fVar2 = fStack_94;
        fVar1 = fStack_98;
        if ((0.0 <= fStack_14) && (fStack_14 <= 1.0)) {
          pfVar5 = afStack_f4 + 8;
          fStack_e0 = fStack_b0 * fStack_14;
          fStack_dc = fStack_ac * fStack_14;
          fStack_d8 = fStack_a8 * fStack_14;
          fStack_c8 = fStack_b0 * fStack_14;
          afStack_f4[(uint)bVar7 * -2 + 0xc] = afStack_f4[(uint)bVar7 * -2 + 6];
          afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          fStack_8c = fVar1 + fStack_c8;
          fStack_88 = fVar2 + fStack_c4;
          fStack_84 = fVar3 + fStack_c0;
          afStack_d4[0] = fVar1 + fStack_c8;
          afStack_f4[(uint)bVar7 * -2 + 9] = afStack_f4[(uint)bVar7 * -2 + 0x1b];
          afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
          core_actor_cpp_FUN_00408de0(iVar4,pfVar5);
          this_ptr_00 = aSStack_1d8;
          uStack_110 = uStack_bc;
          afStack_10c[(uint)bVar7 * -2] = afStack_f4[(uint)bVar7 * -2 + 0xf];
          afStack_10c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_00);
          uStack_1d4 = *(uint *)&this_ptr->field_0x6b4;
          uStack_1a8 = 0x67;
          if (&uStack_1bc != &uStack_110) {
            uStack_1bc = uStack_110;
            fStack_1b8 = afStack_10c[0];
            uStack_1b4 = afStack_10c[1];
          }
          pCStack_1a4 = this_ptr;
          pCStack_1a0 = this_ptr;
          (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x110))(iVar4,aSStack_1d8);
        }
      }
    }
    iStack_20 = iStack_20 + 4;
  }
  return;
}
