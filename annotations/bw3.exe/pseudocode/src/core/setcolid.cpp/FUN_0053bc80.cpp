// Name: core_setcolid.cpp_FUN_0053bc80
// Address: 0053bc80
// Address Range: [[0053bc80, 0053cac0]]
// Convention: unknown
// Signature: float * core_setcolid_cpp_FUN_0053bc80(CDemonSet *param_1,CVector3f *param_2,float param_3,undefined4 param_4,float param_5,undefined4 param_6,CBoundingBox3D *param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_setcolid_cpp_FUN_0053bc80(CDemonSet *param_1,CVector3f *param_2,float param_3,uint param_4,float param_5,uint param_6,CBoundingBox3D *param_7)

{
  CDemonActor *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  ECollisionType EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  CKeyFramedModel *this_ptr;
  float fVar15;
  float *unaff_EBX;
  float *pfVar16;
  CDemonActor *unaff_EBP;
  int iVar17;
  CBoundingBox3D *unaff_ESI;
  uint *puVar18;
  float **unaff_EDI;
  CBoundingBox3D *pCVar19;
  uint *puVar20;
  byte bVar21;
  float afStackY_1140 [72];
  float *apfStackY_1020 [789];
  CBoundingBox3D *in_stack_fffffc50;
  CVector3f CStack_39c;
  CVector3f CStack_390;
  CVector3f CStack_384;
  CVector3f CStack_378;
  CVector3f CStack_36c;
  CVector3f CStack_360;
  CVector3f CStack_354;
  CDemonTriangle CStack_348;
  CDemonTriangle CStack_310;
  CDemonTriangle CStack_2d8;
  CDemonTriangle CStack_2a0;
  CDemonTriangle CStack_268;
  byte auStack_230 [44];
  float fStack_204;
  CDemonActor *local_1e8;
  CDemonActor *local_1e4;
  CKeyFramedModelInstance *pCStack_1dc;
  uint auStack_1d0 [4];
  float afStack_1c0 [4];
  float local_1b0;
  float local_1ac;
  CBoundingBox3D local_1a8;
  CBoundingBox3D CStack_190;
  uint auStack_178 [8];
  float fStack_158;
  float afStack_154 [3];
  CVector3f CStack_148;
  float fStack_134;
  float afStack_130 [4];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  CVector3f CStack_10c;
  float fStack_f8;
  float fStack_f4;
  CVector3f local_f0;
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [5];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float afStack_b0 [3];
  float *pfStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float *local_30 [4];
  CDemonSet *local_20;
  CVector3f *local_1c;
  CDemonActor *local_18;
  float *local_14;
  
  bVar21 = 0;
  if (0.0 < param_3) {
    local_14 = (float *)core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90
                                  (&g_CDemonRaytraceInstance,param_2,param_3,&param_1->ground_type,
                                   &param_1->collision_normal);
  }
  else {
    local_14 = (float *)core_dtrace_cpp_FUN_00474940
                                  (&g_CDemonRaytraceInstance,param_2,&param_1->ground_type,
                                   &param_1->collision_normal);
  }
  if (param_1->ground_type == 0) {
    param_1->ground_type = param_1->default_ground_type;
  }
  if (&local_f0 != param_2) {
    local_f0.x = param_2->x;
    local_f0.y = param_2->y;
    local_f0.z = param_2->z;
  }
  local_f0.y = local_f0.y + _DAT_005d0abe;
  param_1->collision_actor = (CDemonActor *)0x0;
  param_1->collision_part_index = -1;
  param_1->collision_bone_index = -1;
  local_30[0] = local_14;
  if (-1 < param_1->ignore_list_count) {
    if ((CVector3f *)&local_1a8.min.y != &local_f0) {
      local_1a8.min.y = local_f0.x;
      local_1a8.max.x = local_f0.z;
      local_1a8.min.z = local_f0.y;
    }
    local_1a8.min.y = local_1a8.min.y + param_3;
    local_1a8.max.x = local_1a8.max.x + param_3;
    local_1b0 = local_1b0 - param_3;
    local_1a8.min.x = local_1a8.min.x - param_3;
    if (&local_1b0 != &local_1a8.min.y) {
      local_1ac = local_1a8.min.z;
      local_1b0 = local_1a8.min.y;
      local_1a8.min.x = local_1a8.max.x;
    }
    local_1ac = local_1ac + _DAT_005d0ac2;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)(auStack_230 + 0x28));
    auStack_230._40_4_ = 0.0;
    local_30[3] = (float *)0x0;
    if (0 < param_1->collidable_actor_count) {
      local_1c = &param_1->collision_normal;
      local_20 = param_1;
      do {
        local_18 = local_20->collidable_actors[0];
        iVar2 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_0053d770(param_1,local_18);
        pCVar1 = local_18;
        if (iVar2 == 0) {
          pCVar3 = (CSpike *)core_actor_cpp_castToClassHash_FUN_0040c840(local_18,g_CSpikeClassInfo.name_hash)
          ;
          if (pCVar3 == (CDemonActor *)0x0) {
            local_1e8 = pCVar3;
            local_1e4 = pCVar3;
            EVar4 = (*((pCVar1->vtable)._ub)->getCollisionType)
                              (pCVar1,(SCollisionInfo *)(auStack_230 + 0x28));
            if (EVar4 != COLLISION_TYPE_NONE) {
              core_actor_cpp_FUN_00408f00(pCVar1);
              pfVar16 = afStack_1c0;
              pCVar19 = &CStack_190;
              for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                (pCVar19->min).x = *pfVar16;
                pfVar16 = pfVar16 + (uint)bVar21 * -2 + 1;
                pCVar19 = (CBoundingBox3D *)((int)pCVar19 + ((uint)bVar21 * -2 + 1) * 4);
              }
              iVar2 = core_box_cpp_FUN_0041e910(&local_1a8,&CStack_190);
              if (iVar2 != 0) {
                if ((*(int *)((int)param_3 + 0x15f6f4) == 0) &&
                   (pCStack_1dc != (CKeyFramedModelInstance *)0x0)) {
                  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                                       (pCStack_1dc);
                  if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
                    _DAT_01d71de0 = "..\\core\\setcolid.cpp";
                    _DAT_01d71de4 = 0xcb;
                    core_main_c_FUN_004e4330();
                  }
                  pfVar16 = local_30[2];
                  fStack_b8 = local_f0.z - (unaff_EBP->location).position.x;
                  fStack_b4 = fStack_e4 - (unaff_EBP->location).position.y;
                  afStack_b0[0] = CStack_e0.x - (unaff_EBP->location).position.z;
                  CStack_10c.x = fStack_b8;
                  *(float *)((int)&CStack_10c + (uint)bVar21 * -8 + 4) =
                       afStack_b0[(uint)bVar21 * -2 + -1];
                  *(float *)((int)&CStack_10c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                       afStack_b0[(uint)bVar21 * -2 + (uint)bVar21 * -2];
                  local_20 = (CDemonSet *)((float)pfVar16 - (unaff_EBP->location).position.y);
                  iVar2 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0
                                    (this_ptr,0,&CStack_10c,param_5,(float *)&local_20,
                                     &(unaff_EBP->orient).vec);
                  if (iVar2 != 0) {
                    *(CDemonActor **)((int)param_3 + 0x14d144) = unaff_EBP;
                    local_30[2] = (float *)((float)local_20 + (unaff_EBP->location).position.y);
                    afStack_d0[0] = 0.0;
                    afStack_d0[2] = 0.0;
                    afStack_d0[1] = 1.0;
                    if (afStack_d0 != local_14) {
                      *local_14 = 0.0;
                      local_14[1] = 1.0;
                      local_14[2] = 0.0;
                    }
                  }
                }
                else if (EVar4 < COLLISION_TYPE_CYLINDER) {
                  if (EVar4 == COLLISION_TYPE_MESH) {
                    __arrinit(&stack0xfffffc50,8,&g_CVectorTypeInfo);
                    pfVar16 = (float *)&stack0xfffffc50;
                    (*((unaff_EBP->vtable)._ub)->getBoundingBox)(unaff_EBP,in_stack_fffffc50);
                    iVar17 = 0;
                    puVar18 = auStack_1d0;
                    puVar20 = auStack_178;
                    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *puVar20 = *puVar18;
                      puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
                      puVar20 = puVar20 + (uint)bVar21 * -2 + 1;
                    }
                    do {
                      core_box_cpp_FUN_0041d8b0();
                      uStack_74 = uStack_44;
                      afStack_70[(uint)bVar21 * -2] = afStack_70[(uint)bVar21 * -2 + 0xc];
                      afStack_70[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                           afStack_70[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd];
                      core_actor_cpp_FUN_00408b80();
                      local_f0.y = fStack_d4;
                      *(float *)((int)&local_f0 + (uint)bVar21 * -8 + 8) =
                           afStack_d0[(uint)bVar21 * -2];
                      *(float *)((int)&CStack_e0 + ((uint)bVar21 * -2 + (uint)bVar21 * -2 + -1) * 4)
                           = afStack_d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
                      if (pfVar16 != &local_f0.y) {
                        *pfVar16 = local_f0.y;
                        pfVar16[1] = local_f0.z;
                        pfVar16[2] = fStack_e4;
                      }
                      iVar17 = iVar17 + 1;
                      pfVar16 = pfVar16 + 3;
                    } while (iVar17 < 8);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_348,(CVector3f *)&stack0xfffffc48,&CStack_378,&CStack_360);
                    iVar2 = core_dtri_cpp_FUN_004795c0
                                      (&CStack_348,&CStack_e0,(float)param_7,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_348,(CVector3f *)&stack0xfffffc48,&CStack_360,&CStack_390);
                    iVar17 = core_dtri_cpp_FUN_004795c0
                                       (&CStack_348,&CStack_e0,(float)param_7,(float *)&local_20);
                    if (iVar2 != 0 || iVar17 != 0) {
                      afStack_154[0] = -CStack_348.normal.y;
                      afStack_154[1] = -CStack_348.normal.z;
                      fStack_158 = -CStack_348.normal.x;
                      fStack_11c = -CStack_348.normal.x;
                      afStack_130[(uint)bVar21 * -2 + 6] = afStack_154[(uint)bVar21 * -2];
                      afStack_130[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
                           afStack_154[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
                      if (&fStack_bc != afStack_130 + 5) {
                        fStack_bc = fStack_11c;
                        fStack_b8 = fStack_118;
                        fStack_b4 = fStack_114;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_268,&CStack_39c,&CStack_384,&CStack_354);
                    iVar5 = core_dtri_cpp_FUN_004795c0
                                      (&CStack_268,&CStack_e0,(float)param_7,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_268,&CStack_39c,&CStack_354,&CStack_36c);
                    iVar6 = core_dtri_cpp_FUN_004795c0
                                      (&CStack_268,&CStack_e0,(float)param_7,(float *)&local_20);
                    if (iVar5 != 0 || iVar6 != 0) {
                      afStack_130[3] = -CStack_268.normal.y;
                      fStack_120 = -CStack_268.normal.z;
                      afStack_130[2] = -CStack_268.normal.x;
                      fStack_110 = -CStack_268.normal.x;
                      *(float *)((int)&CStack_10c + (uint)bVar21 * -8) =
                           afStack_130[(uint)bVar21 * -2 + 3];
                      *(float *)((int)&CStack_10c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 4) =
                           afStack_130[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
                      if (&fStack_bc != afStack_130 + 8) {
                        fStack_bc = fStack_110;
                        fStack_b8 = CStack_10c.x;
                        fStack_b4 = CStack_10c.y;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              ((CDemonTriangle *)auStack_230,(CVector3f *)&stack0xfffffc48,
                               &CStack_39c,&CStack_36c);
                    iVar7 = core_dtri_cpp_FUN_004795c0
                                      ((CDemonTriangle *)auStack_230,&CStack_e0,(float)param_7,
                                       (float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              ((CDemonTriangle *)auStack_230,(CVector3f *)&stack0xfffffc48,
                               &CStack_36c,&CStack_378);
                    iVar8 = core_dtri_cpp_FUN_004795c0
                                      ((CDemonTriangle *)auStack_230,&CStack_e0,(float)param_7,
                                       (float *)&local_20);
                    if (iVar7 != 0 || iVar8 != 0) {
                      fStack_58 = -(float)auStack_230._40_4_;
                      fStack_54 = -fStack_204;
                      fStack_5c = -(float)auStack_230._36_4_;
                      afStack_a0[2] = -(float)auStack_230._36_4_;
                      afStack_a0[(uint)bVar21 * -2 + 3] = afStack_70[(uint)bVar21 * -2 + 6];
                      afStack_a0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                           afStack_70[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
                      if (&fStack_bc != afStack_a0 + 2) {
                        fStack_bc = afStack_a0[2];
                        fStack_b8 = afStack_a0[3];
                        fStack_b4 = fStack_90;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_2a0,&CStack_390,&CStack_360,&CStack_354);
                    iVar9 = core_dtri_cpp_FUN_004795c0
                                      (&CStack_2a0,&CStack_e0,(float)param_7,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_2a0,&CStack_390,&CStack_354,&CStack_384);
                    iVar10 = core_dtri_cpp_FUN_004795c0
                                       (&CStack_2a0,&CStack_e0,(float)param_7,(float *)&local_20);
                    if (iVar9 != 0 || iVar10 != 0) {
                      fStack_34 = -CStack_2a0.normal.y;
                      local_30[0] = (float *)-CStack_2a0.normal.z;
                      fStack_38 = -CStack_2a0.normal.x;
                      fStack_f8 = -CStack_2a0.normal.x;
                      (&fStack_f4)[(uint)bVar21 * -2] = afStack_70[(uint)bVar21 * -2 + 0xf];
                      *(float **)((int)&local_f0 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4) =
                           local_30[(uint)bVar21 * -2 + (uint)bVar21 * -2];
                      if (&fStack_bc != &fStack_f8) {
                        fStack_bc = fStack_f8;
                        fStack_b8 = fStack_f4;
                        fStack_b4 = local_f0.x;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_2d8,(CVector3f *)&stack0xfffffc48,&CStack_390,&CStack_384);
                    iVar11 = core_dtri_cpp_FUN_004795c0
                                       (&CStack_2d8,&CStack_e0,(float)param_7,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_2d8,(CVector3f *)&stack0xfffffc48,&CStack_384,&CStack_39c);
                    iVar12 = core_dtri_cpp_FUN_004795c0
                                       (&CStack_2d8,&CStack_e0,(float)param_7,(float *)&local_20);
                    if (iVar11 != 0 || iVar12 != 0) {
                      fStack_4c = -CStack_2d8.normal.y;
                      fStack_48 = -CStack_2d8.normal.z;
                      fStack_50 = -CStack_2d8.normal.x;
                      fStack_134 = -CStack_2d8.normal.x;
                      afStack_130[(uint)bVar21 * -2] = afStack_70[(uint)bVar21 * -2 + 9];
                      afStack_130[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                           afStack_70[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10];
                      if (&fStack_bc != &fStack_134) {
                        fStack_bc = fStack_134;
                        fStack_b8 = afStack_130[0];
                        fStack_b4 = afStack_130[1];
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_310,&CStack_378,&CStack_36c,&CStack_354);
                    iVar13 = core_dtri_cpp_FUN_004795c0
                                       (&CStack_310,&CStack_e0,(float)param_7,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_310,&CStack_378,&CStack_354,&CStack_360);
                    in_stack_fffffc50 = param_7;
                    iVar14 = core_dtri_cpp_FUN_004795c0
                                       (&CStack_310,&CStack_e0,(float)param_7,(float *)&local_20);
                    if (iVar13 != 0 || iVar14 != 0) {
                      fStack_88 = -CStack_310.normal.y;
                      fStack_84 = -CStack_310.normal.z;
                      fStack_8c = -CStack_310.normal.x;
                      afStack_154[2] = -CStack_310.normal.x;
                      *(float *)((int)&CStack_148 + (uint)bVar21 * -8) =
                           afStack_a0[(uint)bVar21 * -2 + 6];
                      *(float *)((int)&CStack_148 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 4) =
                           afStack_a0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
                      if (&fStack_bc != afStack_154 + 2) {
                        fStack_bc = afStack_154[2];
                        fStack_b8 = CStack_148.x;
                        fStack_b4 = CStack_148.y;
                      }
                    }
                    if ((((((iVar2 != 0 || iVar17 != 0) || (iVar5 != 0 || iVar6 != 0)) ||
                          (iVar7 != 0 || iVar8 != 0)) || (iVar9 != 0 || iVar10 != 0)) ||
                        (iVar11 != 0 || iVar12 != 0)) || (iVar13 != 0 || iVar14 != 0)) {
                      *(CBoundingBox3D **)((int)param_5 + 0x14d144) = unaff_ESI;
                      in_stack_fffffc50 = unaff_ESI;
                      core_actor_cpp_FUN_00408b00();
                      local_30[1] = pfStack_a4;
                      local_30[(uint)bVar21 * -2 + 2] = (float *)afStack_a0[(uint)bVar21 * -2];
                      local_30[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 3] =
                           (float *)afStack_a0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
                      if (local_30 + 1 != unaff_EDI) {
                        *unaff_EDI = local_30[1];
                        unaff_EDI[1] = local_30[2];
                        unaff_EDI[2] = local_30[3];
                      }
                    }
                  }
                  else {
LAB_0053ca6d:
                    _DAT_01d71de0 = "..\\core\\setcolid.cpp";
                    _DAT_01d71de4 = 299;
                    core_main_c_FUN_004e4330();
                  }
                }
                else if (COLLISION_TYPE_CYLINDER < EVar4) {
                  if (EVar4 != COLLISION_TYPE_CUSTOM) goto LAB_0053ca6d;
                  core_actor_cpp_FUN_00408bf0();
                  CStack_148.x = fStack_88;
                  *(float *)((int)&CStack_148 + (uint)bVar21 * -8 + 4) =
                       afStack_a0[(uint)bVar21 * -2 + 7];
                  *(float *)((int)&CStack_148 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                       afStack_a0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 8];
                  local_30[3] = (float *)((float)local_30[2] - (unaff_EBP->location).position.y);
                  iVar2 = (*((unaff_EBP->vtable)._ub)->customGetFloorHeight)
                                    (unaff_EBP,&CStack_148,param_5,(float *)(local_30 + 3));
                  if (iVar2 != 0) {
                    param_7[0xde0d].max.x = (float)unaff_EBP;
                    local_18 = (CDemonActor *)((float)local_14 + (unaff_EBP->location).position.y);
                    fStack_60 = 0.0;
                    fStack_58 = 0.0;
                    fStack_5c = 1.0;
                    if (afStack_70 + 4 != unaff_EBX) {
                      *unaff_EBX = 0.0;
                      unaff_EBX[1] = 1.0;
                      unaff_EBX[2] = 0.0;
                    }
                  }
                }
              }
            }
          }
        }
        local_20 = (CDemonSet *)local_20->cameras;
        local_30[3] = (float *)((int)local_30[3] + 1);
      } while ((int)local_30[3] < param_1->collidable_actor_count);
    }
    pCVar1 = param_1->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      fVar15 = (float)(*((pCVar1->vtable)._ub)->getGroundType)(pCVar1);
      param_2[0x1bc19].z = fVar15;
      return local_30[1];
    }
  }
  return local_30[0];
}
