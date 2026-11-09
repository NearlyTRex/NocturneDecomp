// Name: core_doc.cpp_FUN_0046f740
// Address: 0046f740
// Address Range: [[0046f740, 00470740]]
// Convention: unknown
// Signature: undefined4 * core_doc_cpp_FUN_0046f740(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_doc_cpp_FUN_0046f740(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint *unaff_ESI;
  CMatrix3x4f *pCVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_12c8 [270];
  CVector3f *pCVar11;
  CVector3f *pCVar12;
  CMatrix3x4f local_e50 [48];
  CMatrix3x4f local_e20 [48];
  CMatrix3x4f local_df0 [48];
  uint local_dc0 [12];
  uint local_d90 [12];
  uint local_d60 [12];
  uint local_d30 [12];
  CMatrix3x4f local_d00 [48];
  CMatrix3x4f local_cd0 [48];
  uint local_ca0 [12];
  uint local_c70 [12];
  CMatrix3x4f local_c40 [48];
  CMatrix3x4f local_c10 [48];
  uint local_be0 [12];
  uint local_bb0 [12];
  uint local_b80 [12];
  uint local_b50 [12];
  CMatrix3x4f local_b20 [12];
  float local_b14;
  float local_b04;
  float local_af4;
  uint local_af0 [12];
  CMatrix3x4f local_ac0 [48];
  uint local_a90 [12];
  CMatrix3x4f local_a60 [48];
  CMatrix3x4f local_a30 [48];
  uint local_a00 [12];
  CMatrix3x4f local_9d0 [48];
  uint local_9a0 [12];
  uint local_970 [12];
  uint local_940 [12];
  uint local_910 [12];
  uint local_8e0 [12];
  CMatrix3x4f local_8b0 [48];
  CMatrix3x4f local_880 [48];
  CMatrix3x4f local_850 [48];
  uint local_820 [12];
  uint local_7f0 [12];
  CMatrix3x4f local_7c0 [48];
  uint local_790 [12];
  CMatrix3x4f local_760 [48];
  CMatrix3x4f local_730 [48];
  uint local_700 [12];
  uint local_6d0 [12];
  CMatrix3x4f local_6a0 [48];
  CMatrix3x4f local_670 [48];
  CMatrix3x4f local_640 [48];
  uint local_610 [12];
  uint local_5e0 [12];
  CMatrix3x4f local_5b0 [48];
  uint local_580 [12];
  uint local_550 [12];
  uint local_520 [12];
  CMatrix3x4f local_4f0 [48];
  uint local_4c0 [12];
  uint local_490 [12];
  CMatrix3x4f local_460 [48];
  CMatrix3x4f local_430 [48];
  uint local_400 [12];
  uint local_3d0 [12];
  uint local_3a0 [12];
  CMatrix3x4f local_370 [48];
  uint local_340 [12];
  float local_310 [6];
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  CVector3f local_2e0;
  CVector3f local_2d4;
  uint local_2c8;
  float local_2c4 [4];
  float local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  byte local_2a4 [8];
  float fStack_29c;
  CVector3f local_298;
  CVector3f local_28c;
  CVector3f local_280;
  float local_274;
  float local_270 [2];
  CVector3f local_268;
  byte local_25c [8];
  float fStack_254;
  CVector3f local_250;
  float local_244;
  float local_240 [2];
  CVector3f local_238;
  byte local_22c [8];
  float local_224;
  CVector3f local_220;
  byte local_214 [8];
  float fStack_20c;
  CVector3f local_208;
  float local_1fc;
  float afStack_1f8 [2];
  CVector3f local_1f0;
  byte local_1e4 [8];
  float afStack_1dc [4];
  byte local_1cc [4];
  float local_1c8;
  float local_1c4;
  byte local_1c0 [8];
  float fStack_1b8;
  CVector3f local_1b4;
  byte local_1a8 [8];
  float afStack_1a0 [4];
  CVector3f local_190;
  float local_184;
  float local_180 [2];
  CVector3f local_178;
  float local_16c;
  float local_168 [2];
  CVector3f local_160;
  uint local_154;
  uint local_150 [5];
  CVector3f local_13c;
  float local_130;
  float afStack_12c [2];
  CVector3f local_124;
  CVector3f local_118;
  uint local_10c;
  float local_108 [4];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  CVector3f local_e8;
  CVector3f local_dc;
  uint local_d0;
  float local_cc [4];
  float local_bc;
  byte local_b8 [8];
  float fStack_b0;
  CVector3f local_ac;
  float local_a0;
  float local_9c [5];
  CVector3f local_88;
  uint local_7c;
  uint local_78 [2];
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  float local_4c;
  int local_48;
  int local_44;
  uint local_40;
  float local_3c [8];
  
  bVar10 = 0;
  iVar4 = *(int *)(param_3 * 0x78 + param_1 + 0x25a8);
  local_22c._0_4_ =
       core_actor_cpp_castToClassHash_FUN_0040c600(param_2,g_CWeaponClassInfo.name_hash);
  if ((float)local_22c._0_4_ != 0.0) {
    iVar2 = *(int *)(local_22c._0_4_ + 0x2e0);
    iVar4 = param_1 + 0xfd8 + iVar4 * 0x30;
    if (iVar2 == 1) {
      pCVar12 = (CVector3f *)local_1a8;
      local_40 = 0x3e44330d;
      local_3c[1] = 0.969617;
      local_3c[0] = 2.2981;
      local_ac._4_4_ = 0xbe7183f9;
      local_1a8._0_4_ = 0x3e44330d;
      *(float *)(local_1a8 + (uint)bVar10 * -8 + 4) = local_3c[(uint)bVar10 * -2];
      *(float *)(local_1a8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      local_ac._8_4_ = 0xbed321a3;
      local_ac._0_4_ = 0x3f0a1c04;
      local_150[4] = 0x3feb40a3;
      core_xform_cpp_FUN_005b5760(local_9d0,&local_ac,pCVar12);
      local_150[3] = 0x3f6f2b67;
      pCVar12 = &local_28c;
      local_150[2] = 0xbed430d3;
      local_280._0_4_ = 0x3ece4b88;
      pCVar11 = &local_280;
      local_280._4_4_ = 0x3dc29521;
      pCVar6 = local_8b0;
      local_28c._0_4_ = 0xbed430d3;
      *(uint *)((int)&local_28c + (uint)bVar10 * -8 + 4) = local_150[(uint)bVar10 * -2 + 3];
      *(uint *)((int)&local_28c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_150[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      local_280._8_4_ = 0x3e85d4e9;
      core_xform_cpp_FUN_005b5760(pCVar6,pCVar11,pCVar12);
      fVar1 = (float)core_charactr_cpp_FUN_00434590(param_1,3,iVar4);
      core_xform_cpp_FUN_005b72c0(local_9d0,local_8b0,1.0 - fVar1);
      puVar7 = local_6d0;
      puVar8 = local_790;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_790);
      pCVar6 = local_670;
    }
    else if (iVar2 == 9) {
      local_9c[2] = -0.435101;
      local_9c[4] = -2.84015;
      local_9c[3] = -0.263934;
      local_88._0_4_ = 0xbe2e6ff8;
      local_88._4_4_ = 0xbe81ffb5;
      local_b8._0_4_ = 0xbedec58f;
      *(float *)(local_b8 + (uint)bVar10 * -8 + 4) = local_9c[(uint)bVar10 * -2 + 3];
      *(float *)(local_b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      local_88._8_4_ = 0xbea706b3;
      local_124._0_4_ = 0xbc44e436;
      core_xform_cpp_FUN_005b5760(local_640,&local_88,(CVector3f *)local_b8);
      local_124._8_4_ = 0x3fc9f99c;
      local_124._4_4_ = 0x3fca29c7;
      local_1f0._0_4_ = 0x3f2a5237;
      local_70._0_4_ = local_124._0_4_;
      *(uint *)((int)&local_70 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_124 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&local_124 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      local_1f0._4_4_ = 0xbd821d61;
      local_1f0._8_4_ = 0x3e68f473;
      core_xform_cpp_FUN_005b5760(local_ac0,&local_1f0,&local_70);
      fVar1 = (float)core_charactr_cpp_FUN_00434590(param_1,3,iVar4);
      core_xform_cpp_FUN_005b72c0(local_640,local_ac0,1.0 - fVar1);
      puVar7 = (uint *)&stack0xfffff180;
      puVar8 = local_580;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_580);
      pCVar6 = local_e20;
    }
    else if (iVar2 == 2) {
      pCVar12 = (CVector3f *)local_2a4;
      local_10c = 0x3e3b65aa;
      local_108[1] = 1.66375;
      local_108[0] = 2.24986;
      local_298._4_4_ = 0xbdc42bdf;
      local_2a4._0_4_ = 0x3e3b65aa;
      *(float *)(local_2a4 + (uint)bVar10 * -8 + 4) = local_108[(uint)bVar10 * -2];
      *(float *)(local_2a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      local_298._8_4_ = 0xbe6ec850;
      local_298._0_4_ = 0x3ed3380d;
      local_3c[4] = 1.72744;
      core_xform_cpp_FUN_005b5760(local_df0,&local_298,pCVar12);
      local_3c[3] = 1.34731;
      pCVar12 = (CVector3f *)local_25c;
      local_3c[2] = -0.288645;
      local_268._0_4_ = 0x3ef7baed;
      pCVar11 = &local_268;
      local_268._4_4_ = 0x3d957802;
      pCVar6 = local_cd0;
      local_25c._0_4_ = 0xbe93c947;
      *(float *)(local_25c + (uint)bVar10 * -8 + 4) = local_3c[(uint)bVar10 * -2 + 3];
      *(float *)(local_25c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      local_268._8_4_ = 0x3d95d158;
      core_xform_cpp_FUN_005b5760(pCVar6,pCVar11,pCVar12);
      fVar1 = (float)core_charactr_cpp_FUN_00434590(param_1,3,iVar4);
      core_xform_cpp_FUN_005b72c0(local_df0,local_cd0,1.0 - fVar1);
      puVar7 = local_550;
      puVar8 = local_400;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_400);
      pCVar6 = local_4f0;
    }
    else if (iVar2 == 4) {
      local_2c8 = 0x3e44c7f3;
      local_2c4[1] = 1.6361;
      local_2c4[0] = 2.30755;
      local_64._0_4_ = 0x3eab23dd;
      local_64._4_4_ = 0xbe3daa50;
      local_1c0._0_4_ = 0x3e44c7f3;
      *(float *)(local_1c0 + (uint)bVar10 * -8 + 4) = local_2c4[(uint)bVar10 * -2];
      *(float *)(local_1c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_2c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      local_64._8_4_ = 0xbed19f3c;
      local_58._0_4_ = 0xbeedcbbc;
      core_xform_cpp_FUN_005b5760(local_7c0,&local_64,(CVector3f *)local_1c0);
      local_58._8_4_ = 0x3fe3381d;
      local_58._4_4_ = 0x3f93df3b;
      local_190._0_4_ = 0x3ec327aa;
      local_238._0_4_ = local_58._0_4_;
      *(uint *)(local_22c + (uint)bVar10 * -8 + -8) =
           *(uint *)((int)&local_58 + (uint)bVar10 * -8 + 4);
      *(uint *)(local_22c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -4) =
           *(uint *)((int)&local_58 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      local_190._4_4_ = 0x3d8dbbaa;
      local_190._8_4_ = 0xbe66cd6c;
      core_xform_cpp_FUN_005b5760(local_6a0,&local_190,&local_238);
      fVar1 = (float)core_charactr_cpp_FUN_00434590(param_1,3,iVar4);
      core_xform_cpp_FUN_005b72c0(local_7c0,local_6a0,1.0 - fVar1);
      puVar7 = local_d30;
      puVar8 = local_af0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_af0);
      pCVar6 = local_760;
    }
    else if (iVar2 == 3) {
      local_e8._0_4_ = 0x3e740e9d;
      local_e8._4_4_ = 0xbd868280;
      local_e8._8_4_ = 0x3d093cf5;
      local_7c = 0xbf3e6506;
      local_78[1] = 0xbf4eefe5;
      pCVar12 = &local_dc;
      pCVar11 = &local_e8;
      pCVar6 = local_d00;
      local_78[0] = 0x3f31884c;
      local_dc._0_4_ = 0xbf3e6506;
      *(uint *)((int)&local_dc + (uint)bVar10 * -8 + 4) = local_78[(uint)bVar10 * -2];
      *(uint *)((int)&local_dc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_xform_cpp_FUN_005b5760(pCVar6,pCVar11,pCVar12);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_d00,iVar4);
      pCVar6 = local_5b0;
    }
    else if (iVar2 == 5) {
      pCVar12 = (CVector3f *)local_1e4;
      local_d0 = 0xbaa302fa;
      local_cc[1] = 1.58617;
      local_cc[0] = 1.57504;
      local_160._4_4_ = 0xbd7a7e66;
      local_1e4._0_4_ = 0xbaa302fa;
      *(float *)(local_1e4 + (uint)bVar10 * -8 + 4) = local_cc[(uint)bVar10 * -2];
      *(float *)(local_1e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      local_160._8_4_ = 0x3da1174a;
      local_160._0_4_ = 0x3e37a249;
      core_xform_cpp_FUN_005b5760(local_850,&local_160,pCVar12);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_850,iVar4);
      pCVar6 = local_730;
    }
    else if (iVar2 == 7) {
      local_154 = 0xbc09b6b8;
      local_150[1] = 0x3c8a096e;
      local_150[0] = 0x3d59e1a3;
      local_1b4._0_4_ = 0x3e21cfff;
      local_1b4._4_4_ = 0xbdbd8a62;
      local_250._0_4_ = 0xbc09b6b8;
      *(uint *)((int)&local_250 + (uint)bVar10 * -8 + 4) = local_150[(uint)bVar10 * -2];
      *(uint *)((int)&local_250 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           local_150[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      local_1b4._8_4_ = 0xbe0d6239;
      local_13c._0_4_ = 0xbc09b6b8;
      core_xform_cpp_FUN_005b5760(local_430,&local_1b4,&local_250);
      local_13c._8_4_ = 0x3c8a096e;
      local_13c._4_4_ = 0x3d59e1a3;
      local_220._0_4_ = 0x3e21cfff;
      local_2e0._0_4_ = local_13c._0_4_;
      *(uint *)((int)&local_2e0 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_13c + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&local_2e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&local_13c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      local_220._4_4_ = 0xbdbd8a62;
      local_220._8_4_ = 0xbe0d6239;
      core_xform_cpp_FUN_005b5760(local_460,&local_220,&local_2e0);
      fVar1 = (float)core_charactr_cpp_FUN_00434590(param_1,0,iVar4);
      core_xform_cpp_FUN_005b72c0(local_430,local_460,1.0 - fVar1);
      puVar7 = local_ca0;
      puVar8 = local_d60;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_d60);
      pCVar6 = local_c40;
    }
    else if (param_3 == 0) {
      core_xform_cpp_FUN_005b5760(local_c10,(CVector3f *)&DAT_01b68804,(CVector3f *)&DAT_02c8af28);
      core_xform_cpp_buildRotationX_FUN_005b6d90(0x3fc90fdb,local_c10,iVar4);
      puVar7 = local_520;
      puVar8 = local_bb0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005b6e10(0xbfc90fdb,local_bb0);
      puVar7 = local_dc0;
      puVar8 = local_be0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_be0);
      puVar7 = local_d90;
      puVar8 = local_b80;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_b80);
      puVar7 = local_a90;
      puVar8 = local_b50;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_b50);
      pCVar6 = local_a60;
    }
    else {
      core_xform_cpp_FUN_005b5760(local_a30,(CVector3f *)&DAT_01b687f8,(CVector3f *)&DAT_02c8af28);
      core_xform_cpp_buildRotationX_FUN_005b6d90(0x3fc90fdb,local_a30,iVar4);
      puVar7 = local_940;
      puVar8 = local_340;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005b6e10(0x3fc42871,local_340);
      puVar7 = local_910;
      puVar8 = local_a00;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_a00);
      puVar7 = local_8e0;
      puVar8 = local_9a0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_9a0);
      puVar7 = local_3a0;
      puVar8 = local_970;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_970);
      pCVar6 = local_880;
    }
    iVar4 = 0xc;
    puVar7 = local_7f0;
    goto LAB_0046f8ec;
  }
  local_22c._4_4_ = local_22c._0_4_;
  local_224 = (float)local_22c._0_4_;
  afStack_1dc[1] = (float)local_22c._0_4_;
  afStack_1dc[2] = (float)local_22c._0_4_;
  afStack_1dc[3] = (float)local_22c._0_4_;
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(param_2,DAT_007c5330);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
    pfVar3 = local_310;
    pfVar9 = &local_2f8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar9 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar10 * -2 + 1;
      pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    }
    local_f4 = local_2f8 + local_2ec;
    local_f0 = local_2f4 + local_2e8;
    local_ec = local_2f0 + local_2e4;
    local_cc[2] = local_2f8 + local_2ec;
    local_cc[(uint)bVar10 * -2 + 3] = local_108[(uint)bVar10 * -2 + 6];
    local_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    local_244 = local_cc[2] * _DAT_005da0e8;
    local_240[0] = local_cc[3] * _DAT_005da0e8;
    local_240[1] = local_bc * _DAT_005da0e8;
    local_16c = local_cc[2] * _DAT_005da0e8;
    local_168[(uint)bVar10 * -2] = local_240[(uint)bVar10 * -2];
    local_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_240[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (afStack_1dc + 1 != &local_16c) {
      afStack_1dc[1] = local_16c;
      afStack_1dc[2] = local_168[0];
      afStack_1dc[3] = local_168[1];
    }
    iVar5 = *(int *)(iVar2 + 0x678);
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        if (param_3 == 0) {
          core_xform_cpp_buildRotationY_FUN_005b6e10(0xbfc90fdb);
          puVar7 = local_610;
LAB_004705bf:
          puVar8 = local_700;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
        }
        else {
          if (param_3 == 1) {
            core_xform_cpp_buildRotationY_FUN_005b6e10(0x3fc90fdb);
            puVar7 = local_5e0;
            goto LAB_004705bf;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(local_700);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_700,iVar4 * 0x30 + param_1 + 0xfd8);
        puVar7 = local_820;
        puVar8 = local_700;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        core_xform_cpp_FUN_005b5930(local_700);
        local_274 = local_1fc;
        local_270[(uint)bVar10 * -2] = afStack_1f8[(uint)bVar10 * -2];
        local_270[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_1f8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if ((float *)local_22c != &local_274) {
          local_22c._0_4_ = local_274;
          local_22c._4_4_ = local_270[0];
          local_224 = local_270[1];
        }
        afStack_1dc[3] = local_2e4 * (float)_DAT_005da0f4 + local_2f0 * (float)_DAT_005da0ec;
        goto LAB_00470270;
      }
      if (iVar5 != 3) {
        _DAT_01d1d400 = "..\\core\\doc.cpp";
        _DAT_01d1d404 = 0xe3d;
        core_main_c_FUN_005030e0("Don't know how to carry light %s",iVar2);
        goto LAB_00470270;
      }
    }
    afStack_1dc[2] = local_2e8;
  }
LAB_00470270:
  iVar2 = (**(code **)(*(int *)(param_2 + 0x154) + 0x74))(param_2);
  if (iVar2 != 0) {
    local_2b0 = 0xbdb87c8b;
    local_2a8 = 0x3f262846;
    local_2ac = 0xbe78bef9;
    local_2d4._0_4_ = 0x3ed45e4e;
    local_2d4._4_4_ = 0xbe258d9b;
    local_214._0_4_ = 0xbdb87c8b;
    *(float *)(local_214 + (uint)bVar10 * -8 + 4) = local_2c4[(uint)bVar10 * -2 + 6];
    *(float *)(local_214 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_2c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    local_2d4._8_4_ = 0xbefad3c8;
    local_178._0_4_ = 0x3e99e450;
    core_xform_cpp_FUN_005b5760(local_370,&local_2d4,(CVector3f *)local_214);
    local_208._4_4_ = 0xbc47e649;
    local_178._8_4_ = 0x3f252f1b;
    pCVar12 = &local_118;
    local_178._4_4_ = 0xbe083dff;
    local_118._0_4_ = local_178._0_4_;
    *(uint *)((int)&local_118 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_178 + (uint)bVar10 * -8 + 4);
    *(uint *)((int)&local_118 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&local_178 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_208._0_4_ = 0x3ec5521a;
    local_208._8_4_ = 0xbefd0529;
    core_xform_cpp_FUN_005b5760(local_e50,&local_208,pCVar12);
    fVar1 = (float)core_charactr_cpp_FUN_00434590(param_1,0,iVar4 * 0x30 + param_1 + 0xfd8);
    core_xform_cpp_FUN_005b72c0(local_370,local_e50,1.0 - fVar1);
    puVar7 = local_4c0;
    puVar8 = local_3d0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_3d0);
    puVar7 = local_490;
    puVar8 = local_c70;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_FUN_005b5930(local_c70);
    local_108[2] = local_3c[5];
    local_108[(uint)bVar10 * -2 + 3] = local_3c[(uint)bVar10 * -2 + 6];
    local_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if ((float *)local_22c != local_108 + 2) {
      local_22c._0_4_ = local_108[2];
      local_22c._4_4_ = local_108[3];
      local_224 = local_f8;
    }
  }
  if (param_3 == 0) {
    fVar1 = -0.4;
    local_48 = param_3;
    local_44 = param_3;
    pfVar3 = &local_4c;
    local_4c = -0.4;
LAB_0047045f:
    if ((float *)local_1cc != pfVar3) {
      local_1c8 = 0.0;
      local_1c4 = 0.0;
      local_1cc = (byte  [4])fVar1;
    }
  }
  else {
    if (param_3 == 1) {
      fVar1 = 0.4;
      afStack_1a0[2] = 0.0;
      afStack_1a0[3] = 0.0;
      pfVar3 = afStack_1a0 + 1;
      afStack_1a0[1] = 0.4;
      goto LAB_0047045f;
    }
    local_1c8 = 0.0;
    local_1cc = (byte  [4])0x0;
    local_1c4 = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005b5100(local_1cc,iVar4 * 0x30 + param_1 + 0xfd8);
  core_xform_cpp_FUN_005b5760(local_b20,(CVector3f *)local_1cc,(CVector3f *)local_22c);
  core_xform_cpp_FUN_005b5080(afStack_1dc + 1,local_b20);
  local_2c4[2] = local_130;
  local_2c4[(uint)bVar10 * -2 + 3] = afStack_12c[(uint)bVar10 * -2];
  local_2c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       afStack_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  iVar4 = 0xc;
  local_184 = (float)local_1cc - local_2c4[2];
  local_180[0] = local_1c8 - local_2c4[3];
  local_180[1] = local_1c4 - local_2b4;
  local_a0 = (float)local_1cc - local_2c4[2];
  local_9c[(uint)bVar10 * -2] = local_180[(uint)bVar10 * -2];
  local_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       local_180[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  puVar7 = local_7f0;
  pCVar6 = local_b20;
  local_b14 = local_b14 + local_a0;
  local_b04 = local_b04 + local_9c[0];
  local_af4 = local_af4 + local_9c[1];
LAB_0046f8ec:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *(uint *)pCVar6;
    pCVar6 = pCVar6 + ((uint)bVar10 * -2 + 1) * 4;
    puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
  }
  puVar7 = local_7f0;
  puVar8 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  return unaff_ESI;
}
