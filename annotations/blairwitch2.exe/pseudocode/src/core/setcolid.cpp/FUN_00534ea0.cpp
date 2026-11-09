// Name: core_setcolid.cpp_FUN_00534ea0
// Address: 00534ea0
// Address Range: [[00534ea0, 00535ce0]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_00534ea0(CDemonSet *param_1,CVector3f *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_setcolid_cpp_FUN_00534ea0(CDemonSet *param_1,CVector3f *param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CKeyFramedModelInstance *pCVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  CKeyFramedModel *this_ptr;
  byte *transform_vector;
  uint uVar18;
  CVector3f *pCVar19;
  int iVar20;
  uint *puVar21;
  CBoundingBox3D *pCVar22;
  uint *puVar23;
  byte bVar24;
  float afStackY_1150 [864];
  CVector3f CStack_3b8;
  CVector3f CStack_3ac;
  CVector3f CStack_3a0;
  CVector3f CStack_394;
  CVector3f CStack_388;
  CVector3f CStack_37c;
  CVector3f CStack_370;
  CVector3f CStack_364;
  byte auStack_358 [40];
  float fStack_330;
  float fStack_32c;
  byte auStack_320 [40];
  float fStack_2f8;
  float fStack_2f4;
  byte auStack_2e8 [40];
  float fStack_2c0;
  float fStack_2bc;
  byte auStack_2b0 [40];
  float fStack_288;
  float fStack_284;
  byte auStack_278 [40];
  float fStack_250;
  float fStack_24c;
  byte auStack_240 [40];
  float fStack_218;
  float fStack_214;
  byte local_208 [36];
  CKeyFramedModelInstance *local_1e4;
  uint auStack_1e0 [6];
  uint auStack_1c8 [6];
  byte local_1b0 [8];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  CBoundingBox3D CStack_198;
  uint auStack_180 [6];
  float fStack_168;
  float afStack_164 [4];
  uint uStack_154;
  float afStack_150 [3];
  float fStack_144;
  uint uStack_140;
  uint uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  float fStack_114;
  float afStack_110 [4];
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  byte local_f0 [8];
  float local_e8;
  float fStack_e4;
  float afStack_e0 [6];
  uint uStack_c8;
  uint uStack_c4;
  float fStack_c0;
  float afStack_bc [5];
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float afStack_84 [3];
  float afStack_78 [4];
  float afStack_68 [4];
  float fStack_58;
  uint uStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_24;
  CDemonSet *local_20;
  float *local_1c;
  CDemonActor *local_18;
  float local_14;
  
  bVar24 = 0;
  if (0.0 < param_3) {
    local_14 = core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00473b20
                         (&g_CDemonRaytraceInstance,param_2,param_3,(int *)&param_1->field_0x14d134,
                          (CVector3f *)&param_1->field_0x14d128);
  }
  else {
    local_14 = (float)core_dtrace_cpp_FUN_004738d0
                                (&g_CDemonRaytraceInstance,param_2,&param_1->field_0x14d134,
                                 &param_1->field_0x14d128);
  }
  if (*(int *)&param_1->field_0x14d134 == 0) {
    *(uint *)&param_1->field_0x14d134 = *(uint *)&param_1->field_0x15f690;
  }
  if ((CVector3f *)local_f0 != param_2) {
    local_f0._0_4_ = *(uint *)param_2;
    local_f0._4_4_ = *(uint *)&param_2->field_0x4;
    local_e8 = *(float *)&param_2->field_0x8;
  }
  local_f0._4_4_ = (float)local_f0._4_4_ + _DAT_005e5da5;
  *(uint *)&param_1->field_0x14d144 = 0;
  *(uint *)&param_1->field_0x14d148 = 0xffffffff;
  *(uint *)&param_1->field_0x14d14c = 0xffffffff;
  local_30 = local_14;
  if (-1 < *(int *)&param_1->field_0x15f6a8) {
    if (&local_1a4 != (float *)local_f0) {
      local_1a4 = (float)local_f0._0_4_;
      local_19c = local_e8;
      local_1a0 = (float)local_f0._4_4_;
    }
    local_1a4 = local_1a4 + param_3;
    local_19c = local_19c + param_3;
    local_1b0._0_4_ = (float)local_1b0._0_4_ - param_3;
    local_1a8 = local_1a8 - param_3;
    if ((float *)local_1b0 != &local_1a4) {
      local_1b0._4_4_ = local_1a0;
      local_1b0._0_4_ = local_1a4;
      local_1a8 = local_19c;
    }
    local_1b0._4_4_ = (float)local_1b0._4_4_ + _DAT_005e5da9;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)local_208);
    local_208._0_4_ = 0;
    local_24 = 0;
    if (0 < *(int *)&param_1->field_0x156db8) {
      local_1c = (float *)&param_1->field_0x14d128;
      local_20 = param_1;
      do {
        local_18 = *(CDemonActor **)&local_20->field_0x156dbc;
        iVar5 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00536990(param_1,local_18);
        pCVar3 = local_18;
        if (iVar5 == 0) {
          pCVar6 = (CKeyFramedModelInstance *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0(local_18,g_CSpikeClassInfo.name_hash)
          ;
          if (pCVar6 == (CKeyFramedModelInstance *)0x0) {
            local_208._32_4_ = pCVar6;
            local_1e4 = pCVar6;
            uVar7 = (**(code **)(*(int *)&pCVar3->field_0x2b0 + 0x44))(pCVar3,local_208);
            if (uVar7 != 0) {
              core_actor_cpp_FUN_004090f0(pCVar3,local_208,uVar7);
              puVar21 = auStack_1c8;
              pCVar22 = &CStack_198;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(uint *)pCVar22 = *puVar21;
                puVar21 = puVar21 + (uint)bVar24 * -2 + 1;
                pCVar22 = (CBoundingBox3D *)((int)pCVar22 + ((uint)bVar24 * -2 + 1) * 4);
              }
              iVar5 = core_box_cpp_FUN_0041b660((CBoundingBox3D *)local_1b0,&CStack_198);
              if (iVar5 != 0) {
                if ((*(int *)&param_1->field_0x15f6f0 == 0) &&
                   (local_1e4 != (CKeyFramedModelInstance *)0x0)) {
                  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                                       (local_1e4);
                  if (*(int *)&this_ptr->field_0x358 == 0) {
                    _DAT_01d046a0 = "..\\core\\setcolid.cpp";
                    _DAT_01d046a4 = 0xcb;
                    core_main_c_FUN_004e4500("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr);
                  }
                  pCVar3 = local_18;
                  fVar1 = local_30;
                  transform_vector = &local_18->field_0x30;
                  fStack_c0 = (float)local_f0._0_4_ - *(float *)&local_18->field_0x20;
                  afStack_bc[0] = (float)local_f0._4_4_ - *(float *)&local_18->field_0x24;
                  afStack_bc[1] = local_e8 - *(float *)&local_18->field_0x28;
                  fStack_114 = fStack_c0;
                  afStack_110[(uint)bVar24 * -2] = afStack_bc[(uint)bVar24 * -2];
                  afStack_110[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 1] =
                       afStack_bc[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 1];
                  fStack_28 = fVar1 - *(float *)&pCVar3->field_0x24;
                  iVar5 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_0044f670
                                    (this_ptr,0,(CVector3f *)&fStack_114,param_3,afStack_68 + 0x10,
                                     (CVector3f *)transform_vector);
                  if (iVar5 != 0) {
                    *(CDemonActor **)&param_1->field_0x14d144 = local_18;
                    local_30 = fStack_28 + *(float *)&local_18->field_0x24;
                    afStack_e0[2] = 0.0;
                    afStack_e0[4] = 0.0;
                    afStack_e0[3] = 1.0;
                    if (afStack_e0 + 2 != local_1c) {
                      *local_1c = 0.0;
                      local_1c[1] = 1.0;
                      local_1c[2] = 0.0;
                    }
                  }
                }
                else if (uVar7 < 2) {
                  if (uVar7 == 1) {
                    __arrinit(&CStack_3b8,8,&g_CVectorTypeInfo);
                    pCVar19 = &CStack_3b8;
                    (**(code **)(*(int *)&local_18->field_0x2b0 + 0x24))(local_18);
                    iVar20 = 0;
                    puVar21 = auStack_1e0;
                    puVar23 = auStack_180;
                    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                      *puVar23 = *puVar21;
                      puVar21 = puVar21 + (uint)bVar24 * -2 + 1;
                      puVar23 = puVar23 + (uint)bVar24 * -2 + 1;
                    }
                    do {
                      core_box_cpp_FUN_0041a600(auStack_180,iVar20);
                      afStack_84[0] = (float)uStack_54;
                      afStack_bc[(uint)bVar24 * -2 + 0xf] = afStack_68[(uint)bVar24 * -2 + 6];
                      afStack_bc[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 0x10] =
                           afStack_68[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 7];
                      core_actor_cpp_FUN_00408d70(local_18,afStack_bc + 0xe);
                      fStack_fc = fStack_e4;
                      afStack_110[(uint)bVar24 * -2 + 6] = afStack_e0[(uint)bVar24 * -2];
                      afStack_110[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 7] =
                           afStack_e0[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 1];
                      if (pCVar19 != (CVector3f *)(afStack_110 + 5)) {
                        *(float *)pCVar19 = fStack_fc;
                        *(float *)((int)pCVar19 + 4) = fStack_f8;
                        *(float *)((int)pCVar19 + 8) = fStack_f4;
                      }
                      iVar20 = iVar20 + 1;
                      pCVar19 = (CVector3f *)((int)pCVar19 + 0xc);
                    } while (iVar20 < 8);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_358,&CStack_3b8,&CStack_388,&CStack_370);
                    iVar5 = core_dtri_cpp_FUN_00478550
                                      ((CDemonTriangle *)auStack_358,(CVector3f *)local_f0,param_3,
                                       afStack_68 + 0xe);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_358,&CStack_3b8,&CStack_370,&CStack_3a0);
                    iVar20 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_358,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    if (iVar5 != 0 || iVar20 != 0) {
                      afStack_164[0] = -fStack_330;
                      afStack_164[1] = -fStack_32c;
                      fStack_168 = -(float)auStack_358._36_4_;
                      fStack_12c = -(float)auStack_358._36_4_;
                      afStack_164[(uint)bVar24 * -2 + 0xf] = afStack_164[(uint)bVar24 * -2];
                      afStack_164[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 0x10] =
                           afStack_164[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 1];
                      if (afStack_e0 + 5 != afStack_164 + 0xe) {
                        afStack_e0[5] = fStack_12c;
                        uStack_c8 = uStack_128;
                        uStack_c4 = uStack_124;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_278,&CStack_3ac,&CStack_394,&CStack_364);
                    iVar8 = core_dtri_cpp_FUN_00478550
                                      ((CDemonTriangle *)auStack_278,(CVector3f *)local_f0,param_3,
                                       afStack_68 + 0xe);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_278,&CStack_3ac,&CStack_364,&CStack_37c);
                    iVar9 = core_dtri_cpp_FUN_00478550
                                      ((CDemonTriangle *)auStack_278,(CVector3f *)local_f0,param_3,
                                       afStack_68 + 0xe);
                    if (iVar8 != 0 || iVar9 != 0) {
                      fStack_134 = -fStack_250;
                      fStack_130 = -fStack_24c;
                      fStack_138 = -(float)auStack_278._36_4_;
                      fStack_120 = -(float)auStack_278._36_4_;
                      afStack_164[(uint)bVar24 * -2 + 0x12] = afStack_164[(uint)bVar24 * -2 + 0xc];
                      afStack_164[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 0x13] =
                           afStack_164[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 0xd];
                      if (afStack_e0 + 5 != afStack_164 + 0x11) {
                        afStack_e0[5] = fStack_120;
                        uStack_c8 = uStack_11c;
                        uStack_c4 = uStack_118;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_240,&CStack_3b8,&CStack_3ac,&CStack_37c);
                    iVar10 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_240,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_240,&CStack_3b8,&CStack_37c,&CStack_388);
                    iVar11 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_240,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    if (iVar10 != 0 || iVar11 != 0) {
                      afStack_68[0] = -fStack_218;
                      afStack_68[1] = -fStack_214;
                      afStack_78[3] = -(float)auStack_240._36_4_;
                      fStack_a8 = -(float)auStack_240._36_4_;
                      afStack_bc[(uint)bVar24 * -2 + 6] = afStack_68[(uint)bVar24 * -2];
                      afStack_bc[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 7] =
                           afStack_68[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 1];
                      if (afStack_e0 + 5 != afStack_bc + 5) {
                        afStack_e0[5] = fStack_a8;
                        uStack_c8 = uStack_a4;
                        uStack_c4 = uStack_a0;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_2b0,&CStack_3a0,&CStack_370,&CStack_364);
                    iVar12 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_2b0,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_2b0,&CStack_3a0,&CStack_364,&CStack_394);
                    iVar13 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_2b0,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    if (iVar12 != 0 || iVar13 != 0) {
                      fStack_44 = -fStack_288;
                      fStack_40 = -fStack_284;
                      fStack_48 = -(float)auStack_2b0._36_4_;
                      afStack_110[2] = -(float)auStack_2b0._36_4_;
                      afStack_110[(uint)bVar24 * -2 + 3] = afStack_68[(uint)bVar24 * -2 + 9];
                      afStack_110[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 4] =
                           afStack_68[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 10];
                      if (afStack_e0 + 5 != afStack_110 + 2) {
                        afStack_e0[5] = afStack_110[2];
                        uStack_c8 = afStack_110[3];
                        uStack_c4 = uStack_100;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_2e8,&CStack_3b8,&CStack_3a0,&CStack_394);
                    iVar14 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_2e8,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_2e8,&CStack_3b8,&CStack_394,&CStack_3ac);
                    iVar15 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_2e8,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    if (iVar14 != 0 || iVar15 != 0) {
                      afStack_68[3] = -fStack_2c0;
                      fStack_58 = -fStack_2bc;
                      afStack_68[2] = -(float)auStack_2e8._36_4_;
                      fStack_144 = -(float)auStack_2e8._36_4_;
                      afStack_164[(uint)bVar24 * -2 + 9] = afStack_68[(uint)bVar24 * -2 + 3];
                      afStack_164[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 10] =
                           afStack_68[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 4];
                      if (afStack_e0 + 5 != afStack_164 + 8) {
                        afStack_e0[5] = fStack_144;
                        uStack_c8 = uStack_140;
                        uStack_c4 = uStack_13c;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_320,&CStack_388,&CStack_37c,&CStack_364);
                    iVar16 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_320,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                              ((CDemonTriangle *)auStack_320,&CStack_388,&CStack_364,&CStack_370);
                    iVar17 = core_dtri_cpp_FUN_00478550
                                       ((CDemonTriangle *)auStack_320,(CVector3f *)local_f0,param_3,
                                        afStack_68 + 0xe);
                    if (iVar16 != 0 || iVar17 != 0) {
                      fStack_98 = -fStack_2f8;
                      fStack_94 = -fStack_2f4;
                      fStack_9c = -(float)auStack_320._36_4_;
                      afStack_164[2] = -(float)auStack_320._36_4_;
                      afStack_164[(uint)bVar24 * -2 + 3] = afStack_bc[(uint)bVar24 * -2 + 9];
                      afStack_164[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 4] =
                           afStack_bc[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 10];
                      if (afStack_e0 + 5 != afStack_164 + 2) {
                        afStack_e0[5] = afStack_164[2];
                        uStack_c8 = afStack_164[3];
                        uStack_c4 = uStack_154;
                      }
                    }
                    if ((((((iVar5 != 0 || iVar20 != 0) || (iVar8 != 0 || iVar9 != 0)) ||
                          (iVar10 != 0 || iVar11 != 0)) || (iVar12 != 0 || iVar13 != 0)) ||
                        (iVar14 != 0 || iVar15 != 0)) || (iVar16 != 0 || iVar17 != 0)) {
                      *(CDemonActor **)&param_1->field_0x14d144 = local_18;
                      core_actor_cpp_FUN_00408cf0(local_18,afStack_e0 + 5);
                      pfVar2 = local_1c;
                      fStack_3c = afStack_bc[2];
                      afStack_68[(uint)bVar24 * -2 + 0xc] = afStack_bc[(uint)bVar24 * -2 + 3];
                      afStack_68[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 0xd] =
                           afStack_bc[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 4];
                      if (afStack_68 + 0xb != pfVar2) {
                        *pfVar2 = fStack_3c;
                        pfVar2[1] = fStack_38;
                        pfVar2[2] = fStack_34;
                      }
                    }
                  }
                  else {
LAB_00535c8d:
                    _DAT_01d046a0 = "..\\core\\setcolid.cpp";
                    _DAT_01d046a4 = 299;
                    core_main_c_FUN_004e4500("Invalid collision type!");
                  }
                }
                else if (2 < uVar7) {
                  if (uVar7 != 3) goto LAB_00535c8d;
                  core_actor_cpp_FUN_00408de0(local_18,local_f0);
                  pCVar3 = local_18;
                  afStack_150[0] = (float)uStack_90;
                  afStack_164[(uint)bVar24 * -2 + 6] = afStack_bc[(uint)bVar24 * -2 + 0xc];
                  pCVar4 = local_18;
                  afStack_164[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 7] =
                       afStack_bc[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 0xd];
                  fStack_2c = local_30 - *(float *)&pCVar3->field_0x24;
                  iVar5 = (**(code **)(*(int *)&pCVar3->field_0x2b0 + 200))
                                    (local_18,afStack_164 + 5,param_3,afStack_68 + 0xf);
                  if (iVar5 != 0) {
                    *(CDemonActor **)&param_1->field_0x14d144 = pCVar4;
                    local_30 = fStack_2c + *(float *)&pCVar4->field_0x24;
                    afStack_78[0] = 0.0;
                    afStack_78[2] = 0.0;
                    afStack_78[1] = 1.0;
                    if (afStack_bc + 0x11 != local_1c) {
                      *local_1c = 0.0;
                      local_1c[1] = 1.0;
                      local_1c[2] = 0.0;
                    }
                  }
                }
              }
            }
          }
        }
        local_20 = (CDemonSet *)&local_20->field_0x4;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)&param_1->field_0x156db8);
    }
    iVar5 = *(int *)&param_1->field_0x14d144;
    if (iVar5 != 0) {
      uVar18 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x4c))(iVar5);
      *(uint *)&param_1->field_0x14d134 = uVar18;
      return local_30;
    }
  }
  return local_30;
}
