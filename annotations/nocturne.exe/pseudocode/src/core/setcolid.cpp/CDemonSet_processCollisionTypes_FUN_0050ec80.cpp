// Name: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
// Address: 0050ec80
// Address Range: [[0050ec80, 0050f90f]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(CDemonSet *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(CDemonSet *this_ptr,CVector3f *position,float radius)

{
  CVector3f *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CDeformableModelInstance *pCVar4;
  ECollisionType bounding_box_type;
  CBoundingBox3D *other;
  CVector3f *pCVar5;
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
  CVector3f *pCVar17;
  CKeyFramedModel *this_ptr_00;
  EGroundType EVar18;
  uint corner_index;
  CVector3f CStack_308;
  CVector3f CStack_2fc;
  CVector3f CStack_2f0;
  CVector3f CStack_2e4;
  CVector3f CStack_2d8;
  CVector3f CStack_2cc;
  CVector3f CStack_2c0;
  CVector3f CStack_2b4;
  CDemonTriangle CStack_2a8;
  CDemonTriangle CStack_270;
  CDemonTriangle CStack_238;
  CDemonTriangle CStack_200;
  CDemonTriangle CStack_1c8;
  CDemonTriangle CStack_190;
  SCollisionInfo local_158;
  CBoundingBox3D CStack_130;
  CBoundingBox3D CStack_118;
  CBoundingBox3D local_100;
  CVector3f local_e8;
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f aCStack_b8 [2];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float local_28;
  float fStack_24;
  float fStack_20;
  int local_1c;
  CDemonSet *local_18;
  float local_14;
  
  if (0.0 < radius) {
    local_14 = core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0
                         (&g_CDemonRaytrace_01fba938,position,radius,&this_ptr->ground_type,
                          &this_ptr->collision_normal);
  }
  else {
    local_14 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
                         (&g_CDemonRaytrace_01fba938,position,&this_ptr->ground_type,
                          &this_ptr->collision_normal);
  }
  if (this_ptr->ground_type == 0) {
    this_ptr->ground_type = this_ptr->default_ground_type;
  }
  if (&local_e8 != position) {
    local_e8.x = position->x;
    local_e8.y = position->y;
    local_e8.z = position->z;
  }
  local_e8.y = local_e8.y + 2.0f;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  this_ptr->collision_part_index = -1;
  this_ptr->collision_bone_index = -1;
  local_28 = local_14;
  if (-1 < this_ptr->ignore_list_count) {
    if (&local_100.max != &local_e8) {
      local_100.max.x = local_e8.x;
      local_100.max.z = local_e8.z;
      local_100.max.y = local_e8.y;
    }
    local_100.max.x = local_100.max.x + radius;
    local_100.max.z = local_100.max.z + radius;
    local_100.min.x = local_100.min.x - radius;
    local_100.min.z = local_100.min.z - radius;
    if (&local_100 != (CBoundingBox3D *)&local_100.max) {
      local_100.min.y = local_100.max.y;
      local_100.min.x = local_100.max.x;
      local_100.min.z = local_100.max.z;
    }
    local_100.min.y = local_100.min.y + -10.0f;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_158);
    local_158.ray_query.ray_type = 0;
    local_1c = 0;
    if (0 < this_ptr->collidable_actor_count) {
      pCVar1 = &this_ptr->collision_normal;
      local_18 = this_ptr;
      do {
        pCVar2 = local_18->collidable_actors[0];
        iVar3 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(this_ptr,pCVar2);
        if (iVar3 == 0) {
          pCVar4 = (CDeformableModelInstance *)
                   core_actor_cpp_castToClassHash_FUN_0040d890
                             (pCVar2,g_CSpikeActorType_02dc9e28.name_hash);
          if (pCVar4 == (CDeformableModelInstance *)0x0) {
            local_158.deformable_model = pCVar4;
            local_158.keyframed_model = (CKeyFramedModelInstance *)pCVar4;
            bounding_box_type = (*((pCVar2->vtable)._ub)->getCollisionType)(pCVar2,&local_158);
            if (bounding_box_type != COLLISION_TYPE_NONE) {
              other = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
                                (pCVar2,&CStack_118,&local_158,bounding_box_type);
              iVar3 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(&local_100,other);
              if (iVar3 != 0) {
                if ((this_ptr->skip_exact_collisions == 0) &&
                   ((CDeformableModelInstance *)local_158.keyframed_model !=
                    (CDeformableModelInstance *)0x0)) {
                  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                                          (local_158.keyframed_model);
                  if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                    g_CHAR_PTR_01cc4800 = "..\\core\\setcolid.cpp";
                    g_INT_01cc4804 = 0xcb;
                    core_main_c_FUN_004c8440("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
                  }
                  CStack_58.x = local_e8.x - (pCVar2->location).position.x;
                  CStack_58.y = local_e8.y - (pCVar2->location).position.y;
                  CStack_58.z = local_e8.z - (pCVar2->location).position.z;
                  fStack_24 = local_28 - (pCVar2->location).position.y;
                  iVar3 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00
                                    (this_ptr_00,0,&CStack_58,radius,&fStack_24,
                                     &(pCVar2->orient).vec);
                  if (iVar3 != 0) {
                    this_ptr->collision_actor = pCVar2;
                    local_28 = fStack_24 + (pCVar2->location).position.y;
                    CStack_d0.x = 0.0;
                    CStack_d0.y = 1.0;
                    CStack_d0.z = 0.0;
                    if (pCVar1 != &CStack_d0) {
                      pCVar1->x = 0.0;
                      (this_ptr->collision_normal).y = 1.0;
                      (this_ptr->collision_normal).z = 0.0;
                    }
                  }
                }
                else if (bounding_box_type < COLLISION_TYPE_CYLINDER) {
                  if (bounding_box_type == COLLISION_TYPE_MESH) {
                    __arrinit(&CStack_308,8,&g_CVectorTypeInfo_005993b0);
                    pCVar17 = &CStack_308;
                    corner_index = 0;
                    (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_130);
                    do {
                      pCVar5 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                                         (&CStack_130,&CStack_70,corner_index);
                      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                         (pCVar2,&CStack_7c,pCVar5);
                      if (pCVar17 != pCVar5) {
                        pCVar17->x = pCVar5->x;
                        pCVar17->y = pCVar5->y;
                        pCVar17->z = pCVar5->z;
                      }
                      corner_index = corner_index + 1;
                      pCVar17 = pCVar17 + 1;
                    } while ((int)corner_index < 8);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_270,&CStack_308,&CStack_2d8,&CStack_2c0);
                    iVar3 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_270,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_270,&CStack_308,&CStack_2c0,&CStack_2f0);
                    iVar6 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_270,&local_e8,radius,&local_28);
                    if (iVar3 != 0 || iVar6 != 0) {
                      CStack_a0.x = -CStack_270.normal.x;
                      CStack_a0.y = -CStack_270.normal.y;
                      CStack_a0.z = -CStack_270.normal.z;
                      if (&CStack_64 != &CStack_a0) {
                        CStack_64.x = CStack_a0.x;
                        CStack_64.y = CStack_a0.y;
                        CStack_64.z = CStack_a0.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_1c8,&CStack_2fc,&CStack_2e4,&CStack_2b4);
                    iVar7 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_1c8,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_1c8,&CStack_2fc,&CStack_2b4,&CStack_2cc);
                    iVar8 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_1c8,&local_e8,radius,&local_28);
                    if (iVar7 != 0 || iVar8 != 0) {
                      CStack_40.x = -CStack_1c8.normal.x;
                      CStack_40.y = -CStack_1c8.normal.y;
                      CStack_40.z = -CStack_1c8.normal.z;
                      if (&CStack_64 != &CStack_40) {
                        CStack_64.x = CStack_40.x;
                        CStack_64.y = CStack_40.y;
                        CStack_64.z = CStack_40.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_200,&CStack_308,&CStack_2fc,&CStack_2cc);
                    iVar9 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_200,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_200,&CStack_308,&CStack_2cc,&CStack_2d8);
                    iVar10 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_200,&local_e8,radius,&local_28);
                    if (iVar9 != 0 || iVar10 != 0) {
                      CStack_34.x = -CStack_200.normal.x;
                      CStack_34.y = -CStack_200.normal.y;
                      CStack_34.z = -CStack_200.normal.z;
                      if (&CStack_64 != &CStack_34) {
                        CStack_64.x = CStack_34.x;
                        CStack_64.y = CStack_34.y;
                        CStack_64.z = CStack_34.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_190,&CStack_2f0,&CStack_2c0,&CStack_2b4);
                    iVar11 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_190,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_190,&CStack_2f0,&CStack_2b4,&CStack_2e4);
                    iVar12 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_190,&local_e8,radius,&local_28);
                    if (iVar11 != 0 || iVar12 != 0) {
                      CStack_dc.x = -CStack_190.normal.x;
                      CStack_dc.y = -CStack_190.normal.y;
                      CStack_dc.z = -CStack_190.normal.z;
                      if (&CStack_64 != &CStack_dc) {
                        CStack_64.x = CStack_dc.x;
                        CStack_64.y = CStack_dc.y;
                        CStack_64.z = CStack_dc.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_2a8,&CStack_308,&CStack_2f0,&CStack_2e4);
                    iVar13 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_2a8,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_2a8,&CStack_308,&CStack_2e4,&CStack_2fc);
                    iVar14 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_2a8,&local_e8,radius,&local_28);
                    if (iVar13 != 0 || iVar14 != 0) {
                      CStack_94.x = -CStack_2a8.normal.x;
                      CStack_94.y = -CStack_2a8.normal.y;
                      CStack_94.z = -CStack_2a8.normal.z;
                      if (&CStack_64 != &CStack_94) {
                        CStack_64.x = CStack_94.x;
                        CStack_64.y = CStack_94.y;
                        CStack_64.z = CStack_94.z;
                      }
                    }
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_238,&CStack_2d8,&CStack_2cc,&CStack_2b4);
                    iVar15 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_238,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_238,&CStack_2d8,&CStack_2b4,&CStack_2c0);
                    iVar16 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_238,&local_e8,radius,&local_28);
                    if (iVar15 != 0 || iVar16 != 0) {
                      CStack_c4.x = -CStack_238.normal.x;
                      CStack_c4.y = -CStack_238.normal.y;
                      CStack_c4.z = -CStack_238.normal.z;
                      if (&CStack_64 != &CStack_c4) {
                        CStack_64.x = CStack_c4.x;
                        CStack_64.y = CStack_c4.y;
                        CStack_64.z = CStack_c4.z;
                      }
                    }
                    if ((((((iVar3 != 0 || iVar6 != 0) || (iVar7 != 0 || iVar8 != 0)) ||
                          (iVar9 != 0 || iVar10 != 0)) || (iVar11 != 0 || iVar12 != 0)) ||
                        (iVar13 != 0 || iVar14 != 0)) || (iVar15 != 0 || iVar16 != 0)) {
                      this_ptr->collision_actor = pCVar2;
                      pCVar17 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                          (pCVar2,aCStack_b8,&CStack_64);
                      if (pCVar1 != pCVar17) {
                        pCVar1->x = pCVar17->x;
                        (this_ptr->collision_normal).y = pCVar17->y;
                        (this_ptr->collision_normal).z = pCVar17->z;
                      }
                    }
                  }
                  else {
LAB_0050f8bc:
                    g_CHAR_PTR_01cc4800 = "..\\core\\setcolid.cpp";
                    g_INT_01cc4804 = 299;
                    core_main_c_FUN_004c8440("Invalid collision type!");
                  }
                }
                else if (COLLISION_TYPE_CYLINDER < bounding_box_type) {
                  if (bounding_box_type != COLLISION_TYPE_CUSTOM) goto LAB_0050f8bc;
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            (pCVar2,&CStack_4c,&local_e8);
                  fStack_20 = local_28 - (pCVar2->location).position.y;
                  iVar3 = (*((pCVar2->vtable)._ub)->customGetFloorHeight)
                                    (pCVar2,&CStack_4c,radius,&fStack_20);
                  if (iVar3 != 0) {
                    this_ptr->collision_actor = pCVar2;
                    local_28 = fStack_20 + (pCVar2->location).position.y;
                    CStack_88.y = 1.0;
                    CStack_88.x = 0.0;
                    CStack_88.z = 0.0;
                    if (pCVar1 != &CStack_88) {
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
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->collidable_actor_count);
    }
    pCVar2 = this_ptr->collision_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      EVar18 = (*((pCVar2->vtable)._ub)->getGroundType)(pCVar2);
      this_ptr->ground_type = EVar18;
      return local_28;
    }
  }
  return local_28;
}
