// Name: core_setcolid.cpp_FUN_0053bc80
// Address: 0053bc80
// Address Range: [[0053bc80, 0053cac0]]
// Convention: unknown
// Signature: CDemonSet * core_setcolid_cpp_FUN_0053bc80(CDemonSet *param_1,CVector3f *param_2,float param_3,undefined4 param_4,float param_5,undefined4 param_6,CDemonActor *param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonSet * core_setcolid_cpp_FUN_0053bc80(CDemonSet *param_1,CVector3f *param_2,float param_3,uint param_4,float param_5,uint param_6,CDemonActor *param_7)

{
  CDemonActor *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  CDemonActor *pCVar4;
  ECollisionType EVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  CKeyFramedModel *this_ptr;
  float fVar17;
  uint *unaff_EBX;
  float *pfVar18;
  CDemonActor *unaff_EBP;
  uint corner_index;
  CDemonActor *unaff_ESI;
  uint *puVar19;
  CDemonSet **unaff_EDI;
  CBoundingBox3D *pCVar20;
  uint *puVar21;
  byte bVar22;
  float afStackY_1140 [72];
  CDemonSet *apCStackY_1020 [789];
  CDemonActor *in_stack_fffffc50;
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
  uint auStack_178 [2];
  CBoundingBox3D CStack_170;
  float fStack_158;
  float afStack_154 [2];
  byte auStack_14c [8];
  float afStack_144 [4];
  CVector3f CStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  CVector3f CStack_11c;
  byte auStack_110 [8];
  float afStack_108 [4];
  byte auStack_f8 [12];
  float local_ec;
  byte local_e8 [20];
  CVector3f CStack_d4;
  uint uStack_c8;
  CVector3f CStack_bc;
  float afStack_b0 [3];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_74;
  uint uStack_60;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  CDemonSet *local_30 [5];
  CVector3f *local_1c;
  CDemonActor *local_18;
  CDemonSet *local_14;
  
  bVar22 = 0;
  if (0.0 < param_3) {
    local_14 = (CDemonSet *)
               core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90
                         (&g_CDemonRaytraceInstance,param_2,param_3,&param_1->ground_type,
                          &param_1->collision_normal);
  }
  else {
    local_14 = (CDemonSet *)
               core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00474940
                         (&g_CDemonRaytraceInstance,param_2,&param_1->ground_type,
                          &param_1->collision_normal);
  }
  if (param_1->ground_type == 0) {
    param_1->ground_type = param_1->default_ground_type;
  }
  if ((CVector3f *)(auStack_f8 + 8) != param_2) {
    auStack_f8._8_4_ = param_2->x;
    local_ec = param_2->y;
    local_e8._0_4_ = param_2->z;
  }
  local_ec = local_ec + _DAT_005d0abe;
  param_1->collision_actor = (CDemonActor *)0x0;
  param_1->collision_part_index = -1;
  param_1->collision_bone_index = -1;
  local_30[0] = local_14;
  if (-1 < param_1->ignore_list_count) {
    if (&local_1a8.min.y != (float *)(auStack_f8 + 8)) {
      local_1a8.min.y = (float)auStack_f8._8_4_;
      local_1a8.max.x = (float)local_e8._0_4_;
      local_1a8.min.z = local_ec;
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
    local_30[3] = (CDemonSet *)0x0;
    if (0 < param_1->collidable_actor_count) {
      local_1c = &param_1->collision_normal;
      local_30[4] = param_1;
      do {
        local_18 = local_30[4]->collidable_actors[0];
        iVar3 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_0053d770(param_1,local_18);
        pCVar1 = local_18;
        if (iVar3 == 0) {
          pCVar4 = (CSpike *)core_actor_cpp_castToClassHash_FUN_0040c840(local_18,g_CSpikeClassInfo.name_hash)
          ;
          if (pCVar4 == (CDemonActor *)0x0) {
            local_1e8 = pCVar4;
            local_1e4 = pCVar4;
            EVar5 = (*((pCVar1->vtable)._ub)->getCollisionType)
                              (pCVar1,(SCollisionInfo *)(auStack_230 + 0x28));
            if (EVar5 != COLLISION_TYPE_NONE) {
              core_actor_cpp_FUN_00408f00(pCVar1);
              pfVar18 = afStack_1c0;
              pCVar20 = &CStack_190;
              for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                (pCVar20->min).x = *pfVar18;
                pfVar18 = pfVar18 + (uint)bVar22 * -2 + 1;
                pCVar20 = (CBoundingBox3D *)((int)pCVar20 + ((uint)bVar22 * -2 + 1) * 4);
              }
              iVar3 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041e910
                                (&local_1a8,&CStack_190);
              if (iVar3 != 0) {
                if ((*(int *)((int)param_3 + 0x15f6f4) == 0) &&
                   (pCStack_1dc != (CKeyFramedModelInstance *)0x0)) {
                  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                                       (pCStack_1dc);
                  if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
                    _DAT_01d71de0 = "..\\core\\setcolid.cpp";
                    _DAT_01d71de4 = 0xcb;
                    core_main_c_displayErrorAndQuit_FUN_004e4330
                              ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
                  }
                  pCVar2 = local_30[2];
                  CStack_bc.y = (float)local_e8._0_4_ - (unaff_EBP->location).position.x;
                  CStack_bc.z = (float)local_e8._4_4_ - (unaff_EBP->location).position.y;
                  afStack_b0[0] = (float)local_e8._8_4_ - (unaff_EBP->location).position.z;
                  auStack_110._4_4_ = CStack_bc.y;
                  *(float *)((int)auStack_110 + (uint)bVar22 * -8 + 8) =
                       afStack_b0[(uint)bVar22 * -2 + -1];
                  *(float *)((int)auStack_110 + ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 1) * 4 + 8)
                       = afStack_b0[(uint)bVar22 * -2 + (uint)bVar22 * -2];
                  local_30[4] = (CDemonSet *)((float)pCVar2 - (unaff_EBP->location).position.y);
                  iVar3 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0
                                    (this_ptr,0,(CVector3f *)&((CVector3f *)auStack_110)->y,param_5,
                                     (float *)(local_30 + 4),&(unaff_EBP->orient).vec);
                  if (iVar3 != 0) {
                    *(CDemonActor **)((int)param_3 + 0x14d144) = unaff_EBP;
                    local_30[2] = (CDemonSet *)
                                  ((float)local_30[4] + (unaff_EBP->location).position.y);
                    CStack_d4.y = 0.0;
                    uStack_c8 = 0;
                    CStack_d4.z = 1.0;
                    if ((CDemonSet *)&CStack_d4.y != local_14) {
                      local_14->camera_count = 0;
                      local_14->cameras[0].name[0] = '\0';
                      local_14->cameras[0].name[1] = '\0';
                      local_14->cameras[0].name[2] = -0x80;
                      local_14->cameras[0].name[3] = '?';
                      local_14->cameras[0].name[4] = '\0';
                      local_14->cameras[0].name[5] = '\0';
                      local_14->cameras[0].name[6] = '\0';
                      local_14->cameras[0].name[7] = '\0';
                    }
                  }
                }
                else if (EVar5 < COLLISION_TYPE_CYLINDER) {
                  if (EVar5 == COLLISION_TYPE_MESH) {
                    __arrinit(&stack0xfffffc50,8,&g_CVectorTypeInfo);
                    pfVar18 = (float *)&stack0xfffffc50;
                    (*((unaff_EBP->vtable)._ub)->getBoundingBox)
                              (unaff_EBP,(CBoundingBox3D *)in_stack_fffffc50);
                    corner_index = 0;
                    puVar19 = auStack_1d0;
                    puVar21 = auStack_178;
                    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *puVar21 = *puVar19;
                      puVar19 = puVar19 + (uint)bVar22 * -2 + 1;
                      puVar21 = puVar21 + (uint)bVar22 * -2 + 1;
                    }
                    do {
                      core_box_cpp_CBoundingBox3D_getCorner_FUN_0041d8b0
                                (&CStack_170,corner_index,&CStack_44);
                      CStack_74.x = CStack_44.x;
                      *(uint *)((int)&CStack_74 + (uint)bVar22 * -8 + 4) =
                           *(uint *)((int)&CStack_44 + (uint)bVar22 * -8 + 4);
                      *(uint *)((int)&CStack_74 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
                           *(uint *)
                            ((int)&CStack_44 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
                      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                                (unaff_ESI,&CStack_74,&CStack_d4);
                      local_ec = CStack_d4.x;
                      *(uint *)(local_e8 + (uint)bVar22 * -8) =
                           *(uint *)((int)&CStack_d4 + (uint)bVar22 * -8 + 4);
                      *(uint *)(local_e8 + ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 1) * 4) =
                           *(uint *)
                            ((int)&CStack_d4 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8);
                      if (pfVar18 != &local_ec) {
                        *pfVar18 = local_ec;
                        pfVar18[1] = (float)local_e8._0_4_;
                        pfVar18[2] = (float)local_e8._4_4_;
                      }
                      corner_index = corner_index + 1;
                      pfVar18 = pfVar18 + 3;
                    } while ((int)corner_index < 8);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_348,(CVector3f *)&stack0xfffffc48,&CStack_378,&CStack_360);
                    iVar3 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                      (&CStack_348,(CVector3f *)(local_e8 + 8),(float)param_7,
                                       (float *)(local_30 + 4));
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_348,(CVector3f *)&stack0xfffffc48,&CStack_360,&CStack_390);
                    iVar6 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                      (&CStack_348,(CVector3f *)(local_e8 + 8),(float)param_7,
                                       (float *)(local_30 + 4));
                    if (iVar3 != 0 || iVar6 != 0) {
                      afStack_154[0] = -CStack_348.normal.y;
                      afStack_154[1] = -CStack_348.normal.z;
                      fStack_158 = -CStack_348.normal.x;
                      CStack_11c.x = -CStack_348.normal.x;
                      *(float *)((int)&CStack_134 + ((uint)bVar22 * -2 + 6) * 4 + 4) =
                           afStack_154[(uint)bVar22 * -2];
                      *(float *)((int)&CStack_134 +
                                ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 7) * 4 + 4) =
                           afStack_154[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
                      if (&CStack_bc != &CStack_11c) {
                        CStack_bc.x = CStack_11c.x;
                        CStack_bc.y = CStack_11c.y;
                        CStack_bc.z = CStack_11c.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_268,&CStack_39c,&CStack_384,&CStack_354);
                    iVar7 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                      (&CStack_268,(CVector3f *)(local_e8 + 8),(float)param_7,
                                       (float *)(local_30 + 4));
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_268,&CStack_39c,&CStack_354,&CStack_36c);
                    iVar8 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                      (&CStack_268,(CVector3f *)(local_e8 + 8),(float)param_7,
                                       (float *)(local_30 + 4));
                    if (iVar7 != 0 || iVar8 != 0) {
                      fStack_124 = -CStack_268.normal.y;
                      fStack_120 = -CStack_268.normal.z;
                      fStack_128 = -CStack_268.normal.x;
                      auStack_110._0_4_ = -CStack_268.normal.x;
                      *(uint *)((int)auStack_110 + (uint)bVar22 * -8 + 4) =
                           *(uint *)((int)&CStack_134 + ((uint)bVar22 * -2 + 3) * 4 + 4);
                      *(uint *)
                       ((int)auStack_110 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8) =
                           *(uint *)
                            ((int)&CStack_134 + ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 4) * 4 + 4)
                      ;
                      if (&CStack_bc != (CVector3f *)auStack_110) {
                        CStack_bc.x = (float)auStack_110._0_4_;
                        CStack_bc.y = (float)auStack_110._4_4_;
                        CStack_bc.z = afStack_108[0];
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              ((CDemonTriangle *)auStack_230,(CVector3f *)&stack0xfffffc48,
                               &CStack_39c,&CStack_36c);
                    iVar9 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                      ((CDemonTriangle *)auStack_230,(CVector3f *)(local_e8 + 8),
                                       (float)param_7,(float *)(local_30 + 4));
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              ((CDemonTriangle *)auStack_230,(CVector3f *)&stack0xfffffc48,
                               &CStack_36c,&CStack_378);
                    iVar10 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                       ((CDemonTriangle *)auStack_230,(CVector3f *)(local_e8 + 8),
                                        (float)param_7,(float *)(local_30 + 4));
                    if (iVar9 != 0 || iVar10 != 0) {
                      afStack_58[0] = -(float)auStack_230._40_4_;
                      afStack_58[1] = -fStack_204;
                      fStack_5c = -(float)auStack_230._36_4_;
                      CStack_98.x = -(float)auStack_230._36_4_;
                      *(float *)((int)&CStack_98 + (uint)bVar22 * -8 + 4) =
                           afStack_58[(uint)bVar22 * -2];
                      *(float *)((int)&CStack_98 +
                                ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 1) * 4 + 4) =
                           afStack_58[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
                      if (&CStack_bc != &CStack_98) {
                        CStack_bc.x = CStack_98.x;
                        CStack_bc.y = CStack_98.y;
                        CStack_bc.z = CStack_98.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_2a0,&CStack_390,&CStack_360,&CStack_354);
                    iVar11 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                       (&CStack_2a0,(CVector3f *)(local_e8 + 8),(float)param_7,
                                        (float *)(local_30 + 4));
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_2a0,&CStack_390,&CStack_354,&CStack_384);
                    iVar12 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                       (&CStack_2a0,(CVector3f *)(local_e8 + 8),(float)param_7,
                                        (float *)(local_30 + 4));
                    if (iVar11 != 0 || iVar12 != 0) {
                      fStack_34 = -CStack_2a0.normal.y;
                      local_30[0] = (CDemonSet *)-CStack_2a0.normal.z;
                      fStack_38 = -CStack_2a0.normal.x;
                      auStack_f8._0_4_ = -CStack_2a0.normal.x;
                      *(float *)(auStack_f8 + (uint)bVar22 * -8 + 4) =
                           (&fStack_34)[(uint)bVar22 * -2];
                      *(CDemonSet **)(auStack_f8 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8)
                           = local_30[(uint)bVar22 * -2 + (uint)bVar22 * -2];
                      if (&CStack_bc != (CVector3f *)auStack_f8) {
                        CStack_bc.x = (float)auStack_f8._0_4_;
                        CStack_bc.y = (float)auStack_f8._4_4_;
                        CStack_bc.z = (float)auStack_f8._8_4_;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_2d8,(CVector3f *)&stack0xfffffc48,&CStack_390,&CStack_384);
                    iVar13 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                       (&CStack_2d8,(CVector3f *)(local_e8 + 8),(float)param_7,
                                        (float *)(local_30 + 4));
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_2d8,(CVector3f *)&stack0xfffffc48,&CStack_384,&CStack_39c);
                    iVar14 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                       (&CStack_2d8,(CVector3f *)(local_e8 + 8),(float)param_7,
                                        (float *)(local_30 + 4));
                    if (iVar13 != 0 || iVar14 != 0) {
                      afStack_58[3] = -CStack_2d8.normal.y;
                      fStack_48 = -CStack_2d8.normal.z;
                      afStack_58[2] = -CStack_2d8.normal.x;
                      CStack_134.x = -CStack_2d8.normal.x;
                      *(float *)((int)&CStack_134 + (uint)bVar22 * -8 + 4) =
                           afStack_58[(uint)bVar22 * -2 + 3];
                      *(float *)((int)&CStack_134 +
                                ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 1) * 4 + 4) =
                           afStack_58[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
                      if (&CStack_bc != &CStack_134) {
                        CStack_bc.x = CStack_134.x;
                        CStack_bc.y = CStack_134.y;
                        CStack_bc.z = CStack_134.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_310,&CStack_378,&CStack_36c,&CStack_354);
                    iVar15 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                       (&CStack_310,(CVector3f *)(local_e8 + 8),(float)param_7,
                                        (float *)(local_30 + 4));
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                              (&CStack_310,&CStack_378,&CStack_354,&CStack_360);
                    in_stack_fffffc50 = param_7;
                    iVar16 = core_dtri_cpp_rayTriangleFloorTest_FUN_004795c0
                                       (&CStack_310,(CVector3f *)(local_e8 + 8),(float)param_7,
                                        (float *)(local_30 + 4));
                    if (iVar15 != 0 || iVar16 != 0) {
                      CStack_88.x = -CStack_310.normal.y;
                      CStack_88.y = -CStack_310.normal.z;
                      fStack_8c = -CStack_310.normal.x;
                      auStack_14c._0_4_ = -CStack_310.normal.x;
                      *(uint *)(auStack_14c + (uint)bVar22 * -8 + 4) =
                           *(uint *)((int)&CStack_88 + (uint)bVar22 * -8);
                      afStack_144[(uint)bVar22 * -2 + (uint)bVar22 * -2] =
                           *(float *)((int)&CStack_88 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 4);
                      if (&CStack_bc != (CVector3f *)(afStack_154 + 2)) {
                        CStack_bc.x = (float)auStack_14c._0_4_;
                        CStack_bc.y = (float)auStack_14c._4_4_;
                        CStack_bc.z = afStack_144[0];
                      }
                    }
                    if ((((((iVar3 != 0 || iVar6 != 0) || (iVar7 != 0 || iVar8 != 0)) ||
                          (iVar9 != 0 || iVar10 != 0)) || (iVar11 != 0 || iVar12 != 0)) ||
                        (iVar13 != 0 || iVar14 != 0)) || (iVar15 != 0 || iVar16 != 0)) {
                      *(CDemonActor **)((int)param_5 + 0x14d144) = unaff_ESI;
                      in_stack_fffffc50 = unaff_ESI;
                      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                                (unaff_ESI,&CStack_bc,&CStack_a4);
                      local_30[1] = (CDemonSet *)CStack_a4.x;
                      local_30[(uint)bVar22 * -2 + 2] =
                           *(CDemonSet **)((int)&CStack_a4 + (uint)bVar22 * -8 + 4);
                      local_30[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 3] =
                           *(CDemonSet **)
                            ((int)&CStack_a4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
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
                    core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid collision type!");
                  }
                }
                else if (COLLISION_TYPE_CYLINDER < EVar5) {
                  if (EVar5 != COLLISION_TYPE_CUSTOM) goto LAB_0053ca6d;
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                            (unaff_EBP,(CVector3f *)local_e8,&CStack_88);
                  auStack_14c._4_4_ = CStack_88.x;
                  afStack_144[(uint)bVar22 * -2] =
                       *(float *)((int)&CStack_88 + (uint)bVar22 * -8 + 4);
                  afStack_144[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                       *(float *)((int)&CStack_88 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
                  local_30[3] = (CDemonSet *)((float)local_30[2] - (unaff_EBP->location).position.y)
                  ;
                  iVar3 = (*((unaff_EBP->vtable)._ub)->customGetFloorHeight)
                                    (unaff_EBP,(CVector3f *)(auStack_14c + 4),param_5,
                                     (float *)(local_30 + 3));
                  if (iVar3 != 0) {
                    param_7[0xf7d].next_actor = unaff_EBP;
                    local_18 = (CDemonActor *)((float)local_14 + (unaff_EBP->location).position.y);
                    uStack_60 = 0;
                    afStack_58[0] = 0.0;
                    fStack_5c = 1.0;
                    if (&uStack_60 != unaff_EBX) {
                      *unaff_EBX = 0;
                      unaff_EBX[1] = 0x3f800000;
                      unaff_EBX[2] = 0;
                    }
                  }
                }
              }
            }
          }
        }
        local_30[4] = (CDemonSet *)local_30[4]->cameras;
        local_30[3] = (CDemonSet *)((int)&local_30[3]->camera_count + 1);
      } while ((int)local_30[3] < param_1->collidable_actor_count);
    }
    pCVar1 = param_1->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      fVar17 = (float)(*((pCVar1->vtable)._ub)->getGroundType)(pCVar1);
      param_2[0x1bc19].z = fVar17;
      return local_30[1];
    }
  }
  return local_30[0];
}
