// Name: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005562c0
// Address: 005562c0
// Address Range: [[005562c0, 00557100]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005562c0(CDemonSet *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005562c0(CDemonSet *this_ptr,CVector3f *position,float radius)

{
  CDemonActor *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  ECollisionType bounding_box_type;
  int iVar4;
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
  CKeyFramedModel *this_ptr_00;
  float fVar15;
  uint *unaff_EBX;
  float *pfVar16;
  CDemonActor *unaff_EBP;
  uint corner_index;
  CDemonActor *unaff_ESI;
  CBoundingBox3D *pCVar17;
  uint *puVar18;
  float *unaff_EDI;
  CBoundingBox3D *pCVar19;
  uint *puVar20;
  byte bVar21;
  float in_stack_00000014;
  CDemonActor *in_stack_0000001c;
  float afStackY_1140 [72];
  uint *apuStackY_1020 [3];
  float afStackY_1014 [786];
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
  SCollisionInfo SStack_200;
  uint auStack_1d0 [4];
  CBoundingBox3D CStack_1c0;
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
  uint *local_30;
  float fStack_2c;
  float afStack_28 [2];
  CDemonSet *local_20;
  CVector3f *local_1c;
  CDemonActor *local_18;
  uint *local_14;
  
  bVar21 = 0;
  if (0.0 < radius) {
    local_14 = (uint *)
               core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010
                         (&g_CDemonRaytraceInstance,position,radius,&this_ptr->ground_type,
                          &this_ptr->collision_normal);
  }
  else {
    local_14 = (uint *)
               core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_0048bdc0
                         (&g_CDemonRaytraceInstance,position,&this_ptr->ground_type,
                          &this_ptr->collision_normal);
  }
  if (this_ptr->ground_type == 0) {
    this_ptr->ground_type = this_ptr->default_ground_type;
  }
  if ((CVector3f *)(auStack_f8 + 8) != position) {
    auStack_f8._8_4_ = position->x;
    local_ec = position->y;
    local_e8._0_4_ = position->z;
  }
  local_ec = local_ec + 2.0f;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  this_ptr->collision_part_index = -1;
  this_ptr->collision_bone_index = -1;
  local_30 = local_14;
  if (-1 < this_ptr->ignore_list_count) {
    if (&local_1a8.min.y != (float *)(auStack_f8 + 8)) {
      local_1a8.min.y = (float)auStack_f8._8_4_;
      local_1a8.max.x = (float)local_e8._0_4_;
      local_1a8.min.z = local_ec;
    }
    local_1a8.min.y = local_1a8.min.y + radius;
    local_1a8.max.x = local_1a8.max.x + radius;
    CStack_1c0.max.y = CStack_1c0.max.y - radius;
    local_1a8.min.x = local_1a8.min.x - radius;
    if (&CStack_1c0.max.y != &local_1a8.min.y) {
      CStack_1c0.max.z = local_1a8.min.z;
      CStack_1c0.max.y = local_1a8.min.y;
      local_1a8.min.x = local_1a8.max.x;
    }
    CStack_1c0.max.z = CStack_1c0.max.z + -10.0f;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)(auStack_230 + 0x28));
    auStack_230._40_4_ = 0.0;
    afStack_28[1] = 0.0;
    if (0 < this_ptr->collidable_actor_count) {
      local_1c = &this_ptr->collision_normal;
      local_20 = this_ptr;
      do {
        local_18 = local_20->collidable_actors[0];
        iVar2 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00557db0(this_ptr,local_18);
        pCVar1 = local_18;
        if (iVar2 == 0) {
          pCVar3 = (CSpike *)core_actor_cpp_castToClassHash_FUN_0040c600(local_18,g_CSpikeClassInfo.name_hash)
          ;
          if (pCVar3 == (CDemonActor *)0x0) {
            SStack_200.cylinder_top_y = (float)pCVar3;
            SStack_200.cylinder_radius = (float)pCVar3;
            bounding_box_type =
                 (*((pCVar1->vtable)._ub)->getCollisionType)
                           (pCVar1,(SCollisionInfo *)(auStack_230 + 0x28));
            if (bounding_box_type != COLLISION_TYPE_NONE) {
              core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00408ec0
                        (pCVar1,&SStack_200,bounding_box_type,&CStack_1c0);
              pCVar17 = &CStack_1c0;
              pCVar19 = &CStack_190;
              for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                (pCVar19->min).x = (pCVar17->min).x;
                pCVar17 = (CBoundingBox3D *)((int)pCVar17 + ((uint)bVar21 * -2 + 1) * 4);
                pCVar19 = (CBoundingBox3D *)((int)pCVar19 + ((uint)bVar21 * -2 + 1) * 4);
              }
              iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_004215d0
                                (&local_1a8,&CStack_190);
              if (iVar2 != 0) {
                if ((*(int *)((int)radius + 0x15f6f4) == 0) &&
                   (SStack_200.keyframed_model != (CKeyFramedModelInstance *)0x0)) {
                  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                                          (SStack_200.keyframed_model);
                  if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                    g_CurrentFilename = "..\\core\\setcolid.cpp";
                    g_CurrentLineNumber = 203;
                    core_main_c_displayErrorAndQuit_FUN_005030e0
                              ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
                  }
                  fVar15 = afStack_28[0];
                  CStack_bc.y = (float)local_e8._0_4_ - (unaff_EBP->location).position.x;
                  CStack_bc.z = (float)local_e8._4_4_ - (unaff_EBP->location).position.y;
                  afStack_b0[0] = (float)local_e8._8_4_ - (unaff_EBP->location).position.z;
                  auStack_110._4_4_ = CStack_bc.y;
                  *(float *)((int)auStack_110 + (uint)bVar21 * -8 + 8) =
                       afStack_b0[(uint)bVar21 * -2 + -1];
                  *(float *)((int)auStack_110 + ((uint)bVar21 * -2 + (uint)bVar21 * -2 + 1) * 4 + 8)
                       = afStack_b0[(uint)bVar21 * -2 + (uint)bVar21 * -2];
                  local_20 = (CDemonSet *)(fVar15 - (unaff_EBP->location).position.y);
                  iVar2 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00468250
                                    (this_ptr_00,0,(CVector3f *)&((CVector3f *)auStack_110)->y,
                                     in_stack_00000014,(float *)&local_20,&(unaff_EBP->orient).vec);
                  if (iVar2 != 0) {
                    *(CDemonActor **)((int)radius + 0x14d144) = unaff_EBP;
                    afStack_28[0] = (float)local_20 + (unaff_EBP->location).position.y;
                    CStack_d4.y = 0.0;
                    uStack_c8 = 0;
                    CStack_d4.z = 1.0;
                    if (&CStack_d4.y != (float *)local_14) {
                      *local_14 = 0;
                      local_14[1] = 0x3f800000;
                      local_14[2] = 0;
                    }
                  }
                }
                else if (bounding_box_type < COLLISION_TYPE_CYLINDER) {
                  if (bounding_box_type == COLLISION_TYPE_MESH) {
                    __arrinit(&stack0xfffffc50,8,&g_CVectorTypeInfo);
                    pfVar16 = (float *)&stack0xfffffc50;
                    (*((unaff_EBP->vtable)._ub)->getBoundingBox)
                              (unaff_EBP,(CBoundingBox3D *)in_stack_fffffc50);
                    corner_index = 0;
                    puVar18 = auStack_1d0;
                    puVar20 = auStack_178;
                    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *puVar20 = *puVar18;
                      puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
                      puVar20 = puVar20 + (uint)bVar21 * -2 + 1;
                    }
                    do {
                      core_box_cpp_CBoundingBox3D_getCorner_FUN_00420570
                                (&CStack_170,corner_index,&CStack_44);
                      CStack_74.x = CStack_44.x;
                      *(uint *)((int)&CStack_74 + (uint)bVar21 * -8 + 4) =
                           *(uint *)((int)&CStack_44 + (uint)bVar21 * -8 + 4);
                      *(uint *)((int)&CStack_74 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                           *(uint *)
                            ((int)&CStack_44 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
                      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                                (unaff_ESI,&CStack_74,&CStack_d4);
                      local_ec = CStack_d4.x;
                      *(uint *)(local_e8 + (uint)bVar21 * -8) =
                           *(uint *)((int)&CStack_d4 + (uint)bVar21 * -8 + 4);
                      *(uint *)(local_e8 + ((uint)bVar21 * -2 + (uint)bVar21 * -2 + 1) * 4) =
                           *(uint *)
                            ((int)&CStack_d4 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8);
                      if (pfVar16 != &local_ec) {
                        *pfVar16 = local_ec;
                        pfVar16[1] = (float)local_e8._0_4_;
                        pfVar16[2] = (float)local_e8._4_4_;
                      }
                      corner_index = corner_index + 1;
                      pfVar16 = pfVar16 + 3;
                    } while ((int)corner_index < 8);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_348,(CVector3f *)&stack0xfffffc48,&CStack_378,&CStack_360);
                    iVar2 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                      (&CStack_348,(CVector3f *)(local_e8 + 8),
                                       (float)in_stack_0000001c,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_348,(CVector3f *)&stack0xfffffc48,&CStack_360,&CStack_390);
                    iVar4 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                      (&CStack_348,(CVector3f *)(local_e8 + 8),
                                       (float)in_stack_0000001c,(float *)&local_20);
                    if (iVar2 != 0 || iVar4 != 0) {
                      afStack_154[0] = -CStack_348.normal.y;
                      afStack_154[1] = -CStack_348.normal.z;
                      fStack_158 = -CStack_348.normal.x;
                      CStack_11c.x = -CStack_348.normal.x;
                      *(float *)((int)&CStack_134 + ((uint)bVar21 * -2 + 6) * 4 + 4) =
                           afStack_154[(uint)bVar21 * -2];
                      *(float *)((int)&CStack_134 +
                                ((uint)bVar21 * -2 + (uint)bVar21 * -2 + 7) * 4 + 4) =
                           afStack_154[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
                      if (&CStack_bc != &CStack_11c) {
                        CStack_bc.x = CStack_11c.x;
                        CStack_bc.y = CStack_11c.y;
                        CStack_bc.z = CStack_11c.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_268,&CStack_39c,&CStack_384,&CStack_354);
                    iVar5 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                      (&CStack_268,(CVector3f *)(local_e8 + 8),
                                       (float)in_stack_0000001c,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_268,&CStack_39c,&CStack_354,&CStack_36c);
                    iVar6 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                      (&CStack_268,(CVector3f *)(local_e8 + 8),
                                       (float)in_stack_0000001c,(float *)&local_20);
                    if (iVar5 != 0 || iVar6 != 0) {
                      fStack_124 = -CStack_268.normal.y;
                      fStack_120 = -CStack_268.normal.z;
                      fStack_128 = -CStack_268.normal.x;
                      auStack_110._0_4_ = -CStack_268.normal.x;
                      *(uint *)((int)auStack_110 + (uint)bVar21 * -8 + 4) =
                           *(uint *)((int)&CStack_134 + ((uint)bVar21 * -2 + 3) * 4 + 4);
                      *(uint *)
                       ((int)auStack_110 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
                           *(uint *)
                            ((int)&CStack_134 + ((uint)bVar21 * -2 + (uint)bVar21 * -2 + 4) * 4 + 4)
                      ;
                      if (&CStack_bc != (CVector3f *)auStack_110) {
                        CStack_bc.x = (float)auStack_110._0_4_;
                        CStack_bc.y = (float)auStack_110._4_4_;
                        CStack_bc.z = afStack_108[0];
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              ((CDemonTriangle *)auStack_230,(CVector3f *)&stack0xfffffc48,
                               &CStack_39c,&CStack_36c);
                    iVar7 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                      ((CDemonTriangle *)auStack_230,(CVector3f *)(local_e8 + 8),
                                       (float)in_stack_0000001c,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              ((CDemonTriangle *)auStack_230,(CVector3f *)&stack0xfffffc48,
                               &CStack_36c,&CStack_378);
                    iVar8 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                      ((CDemonTriangle *)auStack_230,(CVector3f *)(local_e8 + 8),
                                       (float)in_stack_0000001c,(float *)&local_20);
                    if (iVar7 != 0 || iVar8 != 0) {
                      afStack_58[0] = -(float)auStack_230._40_4_;
                      afStack_58[1] = -fStack_204;
                      fStack_5c = -(float)auStack_230._36_4_;
                      CStack_98.x = -(float)auStack_230._36_4_;
                      *(float *)((int)&CStack_98 + (uint)bVar21 * -8 + 4) =
                           afStack_58[(uint)bVar21 * -2];
                      *(float *)((int)&CStack_98 +
                                ((uint)bVar21 * -2 + (uint)bVar21 * -2 + 1) * 4 + 4) =
                           afStack_58[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
                      if (&CStack_bc != &CStack_98) {
                        CStack_bc.x = CStack_98.x;
                        CStack_bc.y = CStack_98.y;
                        CStack_bc.z = CStack_98.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_2a0,&CStack_390,&CStack_360,&CStack_354);
                    iVar9 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                      (&CStack_2a0,(CVector3f *)(local_e8 + 8),
                                       (float)in_stack_0000001c,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_2a0,&CStack_390,&CStack_354,&CStack_384);
                    iVar10 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                       (&CStack_2a0,(CVector3f *)(local_e8 + 8),
                                        (float)in_stack_0000001c,(float *)&local_20);
                    if (iVar9 != 0 || iVar10 != 0) {
                      fStack_34 = -CStack_2a0.normal.y;
                      local_30 = (uint *)-CStack_2a0.normal.z;
                      fStack_38 = -CStack_2a0.normal.x;
                      auStack_f8._0_4_ = -CStack_2a0.normal.x;
                      *(float *)(auStack_f8 + (uint)bVar21 * -8 + 4) =
                           (&fStack_34)[(uint)bVar21 * -2];
                      *(uint **)(auStack_f8 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8)
                           = (&local_30)[(uint)bVar21 * -2 + (uint)bVar21 * -2];
                      if (&CStack_bc != (CVector3f *)auStack_f8) {
                        CStack_bc.x = (float)auStack_f8._0_4_;
                        CStack_bc.y = (float)auStack_f8._4_4_;
                        CStack_bc.z = (float)auStack_f8._8_4_;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_2d8,(CVector3f *)&stack0xfffffc48,&CStack_390,&CStack_384);
                    iVar11 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                       (&CStack_2d8,(CVector3f *)(local_e8 + 8),
                                        (float)in_stack_0000001c,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_2d8,(CVector3f *)&stack0xfffffc48,&CStack_384,&CStack_39c);
                    iVar12 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                       (&CStack_2d8,(CVector3f *)(local_e8 + 8),
                                        (float)in_stack_0000001c,(float *)&local_20);
                    if (iVar11 != 0 || iVar12 != 0) {
                      afStack_58[3] = -CStack_2d8.normal.y;
                      fStack_48 = -CStack_2d8.normal.z;
                      afStack_58[2] = -CStack_2d8.normal.x;
                      CStack_134.x = -CStack_2d8.normal.x;
                      *(float *)((int)&CStack_134 + (uint)bVar21 * -8 + 4) =
                           afStack_58[(uint)bVar21 * -2 + 3];
                      *(float *)((int)&CStack_134 +
                                ((uint)bVar21 * -2 + (uint)bVar21 * -2 + 1) * 4 + 4) =
                           afStack_58[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
                      if (&CStack_bc != &CStack_134) {
                        CStack_bc.x = CStack_134.x;
                        CStack_bc.y = CStack_134.y;
                        CStack_bc.z = CStack_134.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_310,&CStack_378,&CStack_36c,&CStack_354);
                    iVar13 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                       (&CStack_310,(CVector3f *)(local_e8 + 8),
                                        (float)in_stack_0000001c,(float *)&local_20);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                              (&CStack_310,&CStack_378,&CStack_354,&CStack_360);
                    in_stack_fffffc50 = in_stack_0000001c;
                    iVar14 = core_dtri_cpp_rayTriangleFloorTest_FUN_00490a40
                                       (&CStack_310,(CVector3f *)(local_e8 + 8),
                                        (float)in_stack_0000001c,(float *)&local_20);
                    if (iVar13 != 0 || iVar14 != 0) {
                      CStack_88.x = -CStack_310.normal.y;
                      CStack_88.y = -CStack_310.normal.z;
                      fStack_8c = -CStack_310.normal.x;
                      auStack_14c._0_4_ = -CStack_310.normal.x;
                      *(uint *)(auStack_14c + (uint)bVar21 * -8 + 4) =
                           *(uint *)((int)&CStack_88 + (uint)bVar21 * -8);
                      afStack_144[(uint)bVar21 * -2 + (uint)bVar21 * -2] =
                           *(float *)((int)&CStack_88 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 4);
                      if (&CStack_bc != (CVector3f *)(afStack_154 + 2)) {
                        CStack_bc.x = (float)auStack_14c._0_4_;
                        CStack_bc.y = (float)auStack_14c._4_4_;
                        CStack_bc.z = afStack_144[0];
                      }
                    }
                    if ((((((iVar2 != 0 || iVar4 != 0) || (iVar5 != 0 || iVar6 != 0)) ||
                          (iVar7 != 0 || iVar8 != 0)) || (iVar9 != 0 || iVar10 != 0)) ||
                        (iVar11 != 0 || iVar12 != 0)) || (iVar13 != 0 || iVar14 != 0)) {
                      *(CDemonActor **)((int)in_stack_00000014 + 0x14d144) = unaff_ESI;
                      in_stack_fffffc50 = unaff_ESI;
                      core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                                (unaff_ESI,&CStack_bc,&CStack_a4);
                      fStack_2c = CStack_a4.x;
                      afStack_28[(uint)bVar21 * -2] =
                           *(float *)((int)&CStack_a4 + (uint)bVar21 * -8 + 4);
                      afStack_28[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                           *(float *)((int)&CStack_a4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
                      if (&fStack_2c != unaff_EDI) {
                        *unaff_EDI = fStack_2c;
                        unaff_EDI[1] = afStack_28[0];
                        unaff_EDI[2] = afStack_28[1];
                      }
                    }
                  }
                  else {
LAB_005570ad:
                    g_CurrentFilename = "..\\core\\setcolid.cpp";
                    g_CurrentLineNumber = 299;
                    core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid collision type!");
                  }
                }
                else if (COLLISION_TYPE_CYLINDER < bounding_box_type) {
                  if (bounding_box_type != COLLISION_TYPE_CUSTOM) goto LAB_005570ad;
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                            (unaff_EBP,(CVector3f *)local_e8,&CStack_88);
                  auStack_14c._4_4_ = CStack_88.x;
                  afStack_144[(uint)bVar21 * -2] =
                       *(float *)((int)&CStack_88 + (uint)bVar21 * -8 + 4);
                  afStack_144[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                       *(float *)((int)&CStack_88 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
                  afStack_28[1] = afStack_28[0] - (unaff_EBP->location).position.y;
                  iVar2 = (*((unaff_EBP->vtable)._ub)->customGetFloorHeight)
                                    (unaff_EBP,(CVector3f *)(auStack_14c + 4),in_stack_00000014,
                                     afStack_28 + 1);
                  if (iVar2 != 0) {
                    in_stack_0000001c[0xf7d].next_actor = unaff_EBP;
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
        local_20 = (CDemonSet *)local_20->cameras;
        afStack_28[1] = (float)((int)afStack_28[1] + 1);
      } while ((int)afStack_28[1] < this_ptr->collidable_actor_count);
    }
    pCVar1 = this_ptr->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      fVar15 = (float)(*((pCVar1->vtable)._ub)->getGroundType)(pCVar1);
      position[0x1bc19].z = fVar15;
      return fStack_2c;
    }
  }
  return (float)local_30;
}
