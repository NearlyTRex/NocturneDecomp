// Name: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
// Address: 005716b0
// Address Range: [[005716b0, 0057233f]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
          (CDemonSet *this_ptr,CVector3f *position,float radius)

{
  CVector3f *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CDemonActor *pCVar4;
  uint uVar5;
  CBoundingBox3D *other;
  CVector3f *pCVar6;
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
  int iVar17;
  CVector3f *pCVar18;
  CKeyFramedModel *this_ptr_00;
  float fVar19;
  float in_stack_00000014;
  float in_stack_0000001c;
  CVector3f CStack_2ec;
  CVector3f CStack_2e0;
  CVector3f CStack_2d4;
  CVector3f CStack_2c8;
  CVector3f CStack_2bc;
  CVector3f CStack_2b0;
  CVector3f CStack_2a4;
  CDemonTriangle CStack_298;
  CDemonTriangle CStack_260;
  CDemonTriangle CStack_228;
  CDemonTriangle CStack_1f0;
  CDemonTriangle CStack_1b8;
  byte auStack_180 [44];
  float fStack_154;
  SCollisionInfo SStack_150;
  byte auStack_128 [24];
  CBoundingBox3D CStack_110;
  byte local_f8 [20];
  float local_e4;
  CVector3f local_e0;
  CVector3f CStack_cc;
  uint uStack_c0;
  CVector3f CStack_b4;
  CVector3f aCStack_a8 [2];
  CVector3f CStack_90;
  CVector3f CStack_84;
  uint uStack_70;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  CVector3f CStack_44;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CDemonSet *local_18;
  float local_14;
  
  if (0.0 < radius) {
    local_14 = core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
                         (&g_CDemonRaytraceInstance,position,radius,&this_ptr->ground_type,
                          &this_ptr->collision_normal);
  }
  else {
    local_14 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                         (&g_CDemonRaytraceInstance,position,&this_ptr->ground_type,
                          &this_ptr->collision_normal);
  }
  if (this_ptr->ground_type == 0) {
    this_ptr->ground_type = this_ptr->default_ground_type;
  }
  if ((CVector3f *)(local_f8 + 0x10) != position) {
    local_f8._16_4_ = position->x;
    local_e4 = position->y;
    local_e0.x = position->z;
  }
  local_e4 = local_e4 + 2.0f;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  this_ptr->field11_0x14d148 = -1;
  this_ptr->field12_0x14d14c = -1;
  CStack_30.z = local_14;
  if (-1 < this_ptr->ignore_list_count) {
    if (local_f8 + 4 != local_f8 + 0x10) {
      local_f8._4_4_ = local_f8._16_4_;
      local_f8._12_4_ = local_e0.x;
      local_f8._8_4_ = local_e4;
    }
    local_f8._4_4_ = (float)local_f8._4_4_ + radius;
    local_f8._12_4_ = (float)local_f8._12_4_ + radius;
    CStack_110.max.y = CStack_110.max.y - radius;
    local_f8._0_4_ = (float)local_f8._0_4_ - radius;
    if (&CStack_110.max.y != (float *)(local_f8 + 4)) {
      CStack_110.max.z = (float)local_f8._8_4_;
      CStack_110.max.y = (float)local_f8._4_4_;
      local_f8._0_4_ = local_f8._12_4_;
    }
    CStack_110.max.z = CStack_110.max.z + -10.0f;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(auStack_180 + 0x28));
    auStack_180._40_4_ = 0.0;
    CStack_24.z = 0.0;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      pCVar1 = &this_ptr->collision_normal;
      local_18 = this_ptr;
      do {
        pCVar2 = *(CDemonActor **)(local_18->field19_0x14f0a0 + 0x7d0c);
        iVar3 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,pCVar2);
        if (iVar3 == 0) {
          pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,g_CSpikeClassInfo.name_hash);
          if (pCVar4 == (CDemonActor *)0x0) {
            SStack_150.cylinder_top_y = (float)pCVar4;
            SStack_150.cylinder_radius = (float)pCVar4;
            uVar5 = (*pCVar2->vtable->hasCollision)(pCVar2,(SCollisionInfo *)(auStack_180 + 0x28));
            if (uVar5 != 0) {
              other = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                                (pCVar2,&CStack_110,&SStack_150,uVar5);
              iVar3 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                                ((CBoundingBox3D *)local_f8,other);
              if (iVar3 != 0) {
                if ((this_ptr->field71_0x15f6dc == 0) &&
                   (SStack_150.field9_0x24 != (CKeyFramedModelInstance *)0x0)) {
                  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                          (SStack_150.field9_0x24);
                  if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                    g_CurrentFilename = "..\\core\\setcolid.cpp";
                    g_CurrentLineNumber = 0xcb;
                    core_main_c_displayErrorAndQuit_FUN_00506f10
                              ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
                  }
                  CStack_54.y = local_e0.x - (pCVar2->location).position.x;
                  CStack_54.z = local_e0.y - (pCVar2->location).position.y;
                  fStack_48 = local_e0.z - (pCVar2->location).position.z;
                  CStack_24.z = CStack_24.y - (pCVar2->location).position.y;
                  iVar3 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
                                    (this_ptr_00,0,(float)&CStack_54.y,in_stack_00000014,
                                     &CStack_24.z,(CVector3f *)&pCVar2->orient);
                  if (iVar3 != 0) {
                    *(CDemonActor **)((int)radius + 0x14d144) = pCVar2;
                    CStack_24.y = CStack_24.z + (pCVar2->location).position.y;
                    CStack_cc.y = 0.0;
                    CStack_cc.z = 1.0;
                    uStack_c0 = 0;
                    if (pCVar1 != (CVector3f *)&CStack_cc.y) {
                      pCVar1->x = 0.0;
                      (this_ptr->collision_normal).y = 1.0;
                      (this_ptr->collision_normal).z = 0.0;
                    }
                  }
                }
                else if (uVar5 < 2) {
                  if (uVar5 == 1) {
                    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                              (&stack0xfffffd00,8,&g_CVectorTypeInfo);
                    pCVar18 = (CVector3f *)&stack0xfffffd00;
                    uVar5 = 0;
                    (*pCVar2->vtable->getBoundingBox)(pCVar2,(CBoundingBox3D *)auStack_128);
                    do {
                      pCVar6 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                                         ((CBoundingBox3D *)(auStack_128 + 8),&CStack_60,uVar5);
                      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                         (pCVar2,&CStack_6c,pCVar6);
                      if (pCVar18 != pCVar6) {
                        pCVar18->x = pCVar6->x;
                        pCVar18->y = pCVar6->y;
                        pCVar18->z = pCVar6->z;
                      }
                      uVar5 = uVar5 + 1;
                      pCVar18 = pCVar18 + 1;
                    } while ((int)uVar5 < 8);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_260,(CVector3f *)&stack0xfffffcf8,&CStack_2c8,&CStack_2b0);
                    iVar3 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                      (&CStack_260,(float)&local_e0.z,in_stack_0000001c,
                                       (float *)&local_18);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_260,(CVector3f *)&stack0xfffffcf8,&CStack_2b0,&CStack_2e0);
                    iVar7 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                      (&CStack_260,(float)&local_e0.z,in_stack_0000001c,
                                       (float *)&local_18);
                    if (iVar3 != 0 || iVar7 != 0) {
                      CStack_90.x = -CStack_260.normal.x;
                      CStack_90.y = -CStack_260.normal.y;
                      CStack_90.z = -CStack_260.normal.z;
                      if (&CStack_54 != &CStack_90) {
                        CStack_54.x = CStack_90.x;
                        CStack_54.y = CStack_90.y;
                        CStack_54.z = CStack_90.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_1b8,&CStack_2ec,&CStack_2d4,&CStack_2a4);
                    iVar8 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                      (&CStack_1b8,(float)&local_e0.z,in_stack_0000001c,
                                       (float *)&local_18);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_1b8,&CStack_2ec,&CStack_2a4,&CStack_2bc);
                    iVar9 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                      (&CStack_1b8,(float)&local_e0.z,in_stack_0000001c,
                                       (float *)&local_18);
                    if (iVar8 != 0 || iVar9 != 0) {
                      CStack_30.x = -CStack_1b8.normal.x;
                      CStack_30.y = -CStack_1b8.normal.y;
                      CStack_30.z = -CStack_1b8.normal.z;
                      if (&CStack_54 != &CStack_30) {
                        CStack_54.x = CStack_30.x;
                        CStack_54.y = CStack_30.y;
                        CStack_54.z = CStack_30.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_1f0,(CVector3f *)&stack0xfffffcf8,&CStack_2ec,&CStack_2bc);
                    iVar10 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                       (&CStack_1f0,(float)&local_e0.z,in_stack_0000001c,
                                        (float *)&local_18);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_1f0,(CVector3f *)&stack0xfffffcf8,&CStack_2bc,&CStack_2c8);
                    iVar11 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                       (&CStack_1f0,(float)&local_e0.z,in_stack_0000001c,
                                        (float *)&local_18);
                    if (iVar10 != 0 || iVar11 != 0) {
                      CStack_24.x = -CStack_1f0.normal.x;
                      CStack_24.y = -CStack_1f0.normal.y;
                      CStack_24.z = -CStack_1f0.normal.z;
                      if (&CStack_54 != &CStack_24) {
                        CStack_54.x = CStack_24.x;
                        CStack_54.y = CStack_24.y;
                        CStack_54.z = CStack_24.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              ((CDemonTriangle *)auStack_180,&CStack_2e0,&CStack_2b0,&CStack_2a4);
                    iVar12 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                       ((CDemonTriangle *)auStack_180,(float)&local_e0.z,
                                        in_stack_0000001c,(float *)&local_18);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              ((CDemonTriangle *)auStack_180,&CStack_2e0,&CStack_2a4,&CStack_2d4);
                    iVar13 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                       ((CDemonTriangle *)auStack_180,(float)&local_e0.z,
                                        in_stack_0000001c,(float *)&local_18);
                    if (iVar12 != 0 || iVar13 != 0) {
                      CStack_cc.x = -(float)auStack_180._36_4_;
                      CStack_cc.y = -(float)auStack_180._40_4_;
                      CStack_cc.z = -fStack_154;
                      if (&CStack_54 != &CStack_cc) {
                        CStack_54.x = CStack_cc.x;
                        CStack_54.y = CStack_cc.y;
                        CStack_54.z = CStack_cc.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_298,(CVector3f *)&stack0xfffffcf8,&CStack_2e0,&CStack_2d4);
                    iVar14 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                       (&CStack_298,(float)&local_e0.z,in_stack_0000001c,
                                        (float *)&local_18);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_298,(CVector3f *)&stack0xfffffcf8,&CStack_2d4,&CStack_2ec);
                    iVar15 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                       (&CStack_298,(float)&local_e0.z,in_stack_0000001c,
                                        (float *)&local_18);
                    if (iVar14 != 0 || iVar15 != 0) {
                      CStack_84.x = -CStack_298.normal.x;
                      CStack_84.y = -CStack_298.normal.y;
                      CStack_84.z = -CStack_298.normal.z;
                      if (&CStack_54 != &CStack_84) {
                        CStack_54.x = CStack_84.x;
                        CStack_54.y = CStack_84.y;
                        CStack_54.z = CStack_84.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_228,&CStack_2c8,&CStack_2bc,&CStack_2a4);
                    iVar16 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                       (&CStack_228,(float)&local_e0.z,in_stack_0000001c,
                                        (float *)&local_18);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                              (&CStack_228,&CStack_2c8,&CStack_2a4,&CStack_2b0);
                    iVar17 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                       (&CStack_228,(float)&local_e0.z,in_stack_0000001c,
                                        (float *)&local_18);
                    if (iVar16 != 0 || iVar17 != 0) {
                      CStack_b4.x = -CStack_228.normal.x;
                      CStack_b4.y = -CStack_228.normal.y;
                      CStack_b4.z = -CStack_228.normal.z;
                      if (&CStack_54 != &CStack_b4) {
                        CStack_54.x = CStack_b4.x;
                        CStack_54.y = CStack_b4.y;
                        CStack_54.z = CStack_b4.z;
                      }
                    }
                    if ((((((iVar3 != 0 || iVar7 != 0) || (iVar8 != 0 || iVar9 != 0)) ||
                          (iVar10 != 0 || iVar11 != 0)) || (iVar12 != 0 || iVar13 != 0)) ||
                        (iVar14 != 0 || iVar15 != 0)) || (iVar16 != 0 || iVar17 != 0)) {
                      *(CDemonActor **)((int)in_stack_00000014 + 0x14d144) = pCVar2;
                      pCVar18 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                          (pCVar2,aCStack_a8,&CStack_54);
                      if (pCVar1 != pCVar18) {
                        pCVar1->x = pCVar18->x;
                        (this_ptr->collision_normal).y = pCVar18->y;
                        (this_ptr->collision_normal).z = pCVar18->z;
                      }
                    }
                  }
                  else {
LAB_005722ec:
                    g_CurrentFilename = "..\\core\\setcolid.cpp";
                    g_CurrentLineNumber = 299;
                    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid collision type!");
                  }
                }
                else if (2 < uVar5) {
                  if (uVar5 != 3) goto LAB_005722ec;
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (pCVar2,&CStack_44,&local_e0);
                  local_18 = (CDemonSet *)(CStack_24.y - (pCVar2->location).position.y);
                  iVar3 = (*pCVar2->vtable->customGetFloorHeight)
                                    (pCVar2,(float)&CStack_44,in_stack_00000014,(float *)&local_18);
                  if (iVar3 != 0) {
                    *(CDemonActor **)((int)in_stack_0000001c + 0x14d144) = pCVar2;
                    CStack_6c.x = 1.0;
                    uStack_70 = 0;
                    CStack_6c.y = 0.0;
                    if (pCVar1 != (CVector3f *)&uStack_70) {
                      pCVar1->x = 0.0;
                      (this_ptr->collision_normal).y = 1.0;
                      (this_ptr->collision_normal).z = 0.0;
                    }
                  }
                }
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        CStack_24.z = (float)((int)CStack_24.z + 1);
      } while ((int)CStack_24.z < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
    pCVar2 = this_ptr->collision_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      fVar19 = (float)(*pCVar2->vtable->getGroundType)(pCVar2);
      position[0x1bc19].z = fVar19;
      return CStack_24.x;
    }
  }
  return CStack_30.z;
}
