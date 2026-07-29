// Name: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
// Address: 0050ec80
// Address Range: [[0050ec80, 0050f90f]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(CDemonSet *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(CDemonSet *this_ptr,CVector3f *position,float radius)

{
  float fVar1;
  CWayPoint *actor;
  char (*pacVar2) [40];
  C3DSLight *pCVar3;
  int iVar4;
  CDeformableModelInstance *pCVar5;
  ECollisionType bounding_box_type;
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
  uint uVar19;
  CVector3f *pCVar20;
  char *hit_flag;
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
  
  hit_flag = this_ptr->lights[199].filter_names[0x13] + 8;
  pCVar20 = (CVector3f *)(this_ptr->lights[199].filter_names[0x12] + 0x24);
  if (0.0 < radius) {
    local_14 = core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0
                         ((CDemonRaytrace *)&DAT_01fba938,position,radius,(int *)hit_flag,pCVar20);
  }
  else {
    local_14 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
                         ((CDemonRaytrace *)&DAT_01fba938,position,(int *)hit_flag,pCVar20);
  }
  if (*(int *)(this_ptr->lights[199].filter_names[0x13] + 8) == 0) {
    *(float *)(this_ptr->lights[199].filter_names[0x13] + 8) = this_ptr->vdir_boxes[0xeb].extents.z;
  }
  if (&local_e8 != position) {
    local_e8.x = position->x;
    local_e8.y = position->y;
    local_e8.z = position->z;
  }
  local_e8.y = local_e8.y + 2.0f;
  pacVar2 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar2 + 0x13) + 0x18) = '\0';
  *(char *)((int)(pacVar2 + 0x13) + 0x19) = '\0';
  *(char *)((int)(pacVar2 + 0x13) + 0x1a) = '\0';
  *(char *)((int)(pacVar2 + 0x13) + 0x1b) = '\0';
  pacVar2 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar2 + 0x13) + 0x1c) = -1;
  *(char *)((int)(pacVar2 + 0x13) + 0x1d) = -1;
  *(char *)((int)(pacVar2 + 0x13) + 0x1e) = -1;
  *(char *)((int)(pacVar2 + 0x13) + 0x1f) = -1;
  fVar1 = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z;
  pacVar2 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar2 + 0x13) + 0x20) = -1;
  *(char *)((int)(pacVar2 + 0x13) + 0x21) = -1;
  *(char *)((int)(pacVar2 + 0x13) + 0x22) = -1;
  *(char *)((int)(pacVar2 + 0x13) + 0x23) = -1;
  local_28 = local_14;
  if (-1 < (int)fVar1) {
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
    if (0 < (int)this_ptr->waypoints[0x6d6]) {
      pCVar20 = (CVector3f *)(this_ptr->lights[199].filter_names[0x12] + 0x24);
      local_18 = this_ptr;
      do {
        actor = local_18->waypoints[0x6d7];
        iVar4 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0
                          (this_ptr,(CDemonActor *)actor);
        if (iVar4 == 0) {
          pCVar5 = (CDeformableModelInstance *)
                   core_actor_cpp_castToClassHash_FUN_0040d890
                             ((CDemonActor *)actor,g_CSpikeActorType_02dc9e28.name_hash);
          if (pCVar5 == (CDeformableModelInstance *)0x0) {
            local_158.deformable_model = pCVar5;
            local_158.keyframed_model = (CKeyFramedModelInstance *)pCVar5;
            bounding_box_type =
                 (*((actor->base).base.vtable._ub)->getCollisionType)
                           ((CDemonActor *)actor,&local_158);
            if (bounding_box_type != COLLISION_TYPE_NONE) {
              other = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
                                ((CDemonActor *)actor,&CStack_118,&local_158,bounding_box_type);
              iVar4 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(&local_100,other);
              if (iVar4 != 0) {
                if ((this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].x == 0.0) &&
                   ((CDeformableModelInstance *)local_158.keyframed_model !=
                    (CDeformableModelInstance *)0x0)) {
                  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                                          (local_158.keyframed_model);
                  if (*(int *)(this_ptr_00->texture_list[7].textures[2].texture_name + 4) == 0) {
                    PTR_01cc4800 = "..\\core\\setcolid.cpp";
                    INT_01cc4804 = 0xcb;
                    core_main_c_FUN_004c8440("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
                  }
                  CStack_58.x = local_e8.x - (actor->base).base.location.position.x;
                  CStack_58.y = local_e8.y - (actor->base).base.location.position.y;
                  CStack_58.z = local_e8.z - (actor->base).base.location.position.z;
                  fStack_24 = local_28 - (actor->base).base.location.position.y;
                  iVar4 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00
                                    (this_ptr_00,0,&CStack_58,radius,&fStack_24,
                                     &(actor->base).base.orient.vec);
                  if (iVar4 != 0) {
                    *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
                    local_28 = fStack_24 + (actor->base).base.location.position.y;
                    CStack_d0.x = 0.0;
                    CStack_d0.y = 1.0;
                    CStack_d0.z = 0.0;
                    if (pCVar20 != &CStack_d0) {
                      pCVar20->x = 0.0;
                      pCVar3 = this_ptr->lights + 199;
                      *(char *)((int)(pCVar3->filter_names + 0x13) + 0) = '\0';
                      *(char *)((int)(pCVar3->filter_names + 0x13) + 1) = '\0';
                      *(char *)((int)(pCVar3->filter_names + 0x13) + 2) = -0x80;
                      *(char *)((int)(pCVar3->filter_names + 0x13) + 3) = '?';
                      pacVar2 = this_ptr->lights[199].filter_names;
                      *(char *)((int)(pacVar2 + 0x13) + 4) = '\0';
                      *(char *)((int)(pacVar2 + 0x13) + 5) = '\0';
                      *(char *)((int)(pacVar2 + 0x13) + 6) = '\0';
                      *(char *)((int)(pacVar2 + 0x13) + 7) = '\0';
                    }
                  }
                }
                else if (bounding_box_type < COLLISION_TYPE_CYLINDER) {
                  if (bounding_box_type == COLLISION_TYPE_MESH) {
                    __arrinit(&CStack_308,8,&g_CVectorTypeInfo_005993b0);
                    pCVar18 = &CStack_308;
                    corner_index = 0;
                    (*((actor->base).base.vtable._ub)->getBoundingBox)
                              ((CDemonActor *)actor,&CStack_130);
                    do {
                      pCVar6 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                                         (&CStack_130,&CStack_70,corner_index);
                      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                         ((CDemonActor *)actor,&CStack_7c,pCVar6);
                      if (pCVar18 != pCVar6) {
                        pCVar18->x = pCVar6->x;
                        pCVar18->y = pCVar6->y;
                        pCVar18->z = pCVar6->z;
                      }
                      corner_index = corner_index + 1;
                      pCVar18 = pCVar18 + 1;
                    } while ((int)corner_index < 8);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_270,&CStack_308,&CStack_2d8,&CStack_2c0);
                    iVar4 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_270,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_270,&CStack_308,&CStack_2c0,&CStack_2f0);
                    iVar7 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_270,&local_e8,radius,&local_28);
                    if (iVar4 != 0 || iVar7 != 0) {
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
                    iVar8 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_1c8,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_1c8,&CStack_2fc,&CStack_2b4,&CStack_2cc);
                    iVar9 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                      (&CStack_1c8,&local_e8,radius,&local_28);
                    if (iVar8 != 0 || iVar9 != 0) {
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
                    iVar10 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_200,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_200,&CStack_308,&CStack_2cc,&CStack_2d8);
                    iVar11 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_200,&local_e8,radius,&local_28);
                    if (iVar10 != 0 || iVar11 != 0) {
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
                    iVar12 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_190,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_190,&CStack_2f0,&CStack_2b4,&CStack_2e4);
                    iVar13 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_190,&local_e8,radius,&local_28);
                    if (iVar12 != 0 || iVar13 != 0) {
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
                    iVar14 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_2a8,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_2a8,&CStack_308,&CStack_2e4,&CStack_2fc);
                    iVar15 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_2a8,&local_e8,radius,&local_28);
                    if (iVar14 != 0 || iVar15 != 0) {
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
                    iVar16 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_238,&local_e8,radius,&local_28);
                    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                              (&CStack_238,&CStack_2d8,&CStack_2b4,&CStack_2c0);
                    iVar17 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110
                                       (&CStack_238,&local_e8,radius,&local_28);
                    if (iVar16 != 0 || iVar17 != 0) {
                      CStack_c4.x = -CStack_238.normal.x;
                      CStack_c4.y = -CStack_238.normal.y;
                      CStack_c4.z = -CStack_238.normal.z;
                      if (&CStack_64 != &CStack_c4) {
                        CStack_64.x = CStack_c4.x;
                        CStack_64.y = CStack_c4.y;
                        CStack_64.z = CStack_c4.z;
                      }
                    }
                    if ((((((iVar4 != 0 || iVar7 != 0) || (iVar8 != 0 || iVar9 != 0)) ||
                          (iVar10 != 0 || iVar11 != 0)) || (iVar12 != 0 || iVar13 != 0)) ||
                        (iVar14 != 0 || iVar15 != 0)) || (iVar16 != 0 || iVar17 != 0)) {
                      *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
                      pCVar18 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                          ((CDemonActor *)actor,aCStack_b8,&CStack_64);
                      if (pCVar20 != pCVar18) {
                        pCVar20->x = pCVar18->x;
                        *(float *)this_ptr->lights[199].filter_names[0x13] = pCVar18->y;
                        *(float *)(this_ptr->lights[199].filter_names[0x13] + 4) = pCVar18->z;
                      }
                    }
                  }
                  else {
LAB_0050f8bc:
                    PTR_01cc4800 = "..\\core\\setcolid.cpp";
                    INT_01cc4804 = 299;
                    core_main_c_FUN_004c8440("Invalid collision type!");
                  }
                }
                else if (COLLISION_TYPE_CYLINDER < bounding_box_type) {
                  if (bounding_box_type != COLLISION_TYPE_CUSTOM) goto LAB_0050f8bc;
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            ((CDemonActor *)actor,&CStack_4c,&local_e8);
                  fStack_20 = local_28 - (actor->base).base.location.position.y;
                  iVar4 = (*((actor->base).base.vtable._ub)->customGetFloorHeight)
                                    ((CDemonActor *)actor,&CStack_4c,radius,&fStack_20);
                  if (iVar4 != 0) {
                    *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
                    local_28 = fStack_20 + (actor->base).base.location.position.y;
                    CStack_88.y = 1.0;
                    CStack_88.x = 0.0;
                    CStack_88.z = 0.0;
                    if (pCVar20 != &CStack_88) {
                      pCVar20->x = 0.0;
                      pCVar3 = this_ptr->lights + 199;
                      *(char *)((int)(pCVar3->filter_names + 0x13) + 0) = '\0';
                      *(char *)((int)(pCVar3->filter_names + 0x13) + 1) = '\0';
                      *(char *)((int)(pCVar3->filter_names + 0x13) + 2) = -0x80;
                      *(char *)((int)(pCVar3->filter_names + 0x13) + 3) = '?';
                      pacVar2 = this_ptr->lights[199].filter_names;
                      *(char *)((int)(pacVar2 + 0x13) + 4) = '\0';
                      *(char *)((int)(pacVar2 + 0x13) + 5) = '\0';
                      *(char *)((int)(pacVar2 + 0x13) + 6) = '\0';
                      *(char *)((int)(pacVar2 + 0x13) + 7) = '\0';
                    }
                  }
                }
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        local_1c = local_1c + 1;
      } while (local_1c < (int)this_ptr->waypoints[0x6d6]);
    }
    iVar4 = *(int *)(this_ptr->lights[199].filter_names[0x13] + 0x18);
    if (iVar4 != 0) {
      uVar19 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x3c))(iVar4);
      *(uint *)(this_ptr->lights[199].filter_names[0x13] + 8) = uVar19;
      return local_28;
    }
  }
  return local_28;
}
