// Name: core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00510a40
// Address: 00510a40
// Address Range: [[00510a40, 005113d4]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)

{
  float fVar1;
  CWayPoint *actor;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char (*pacVar8) [40];
  CDeformableModelInstance *pCVar9;
  ECollisionType bounding_box_type;
  CBoundingBox3D *pCVar10;
  int iVar11;
  CKeyFramedModel *this_ptr_00;
  CVector3f *pCVar12;
  char *pcVar13;
  CMatrix3x3f *orientation_matrix;
  double dStack_278;
  SIntersectXZCylinder SStack_204;
  SIntersectXZCylinder SStack_1a8;
  SIntersectXZCylinder local_14c;
  SCollisionInfo local_f0;
  CBoundingBox3D CStack_c8;
  CBoundingBox3D CStack_b0;
  CBoundingBox3D local_98;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f aCStack_50 [4];
  CDemonSet *local_18;
  int local_14;
  
  core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20
            (&local_14c,start_x,start_z,dir_x,dir_z,radius,bottom_y,top_y);
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0
              ((CDemonRaytrace *)&DAT_01fba938,&local_14c);
  }
  pacVar8 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar8 + 0x13) + 8) = '\x01';
  *(char *)((int)(pacVar8 + 0x13) + 9) = '\0';
  *(char *)((int)(pacVar8 + 0x13) + 10) = '\0';
  *(char *)((int)(pacVar8 + 0x13) + 0xb) = '\0';
  pacVar8 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar8 + 0x13) + 0x1c) = -1;
  *(char *)((int)(pacVar8 + 0x13) + 0x1d) = -1;
  *(char *)((int)(pacVar8 + 0x13) + 0x1e) = -1;
  *(char *)((int)(pacVar8 + 0x13) + 0x1f) = -1;
  pacVar8 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar8 + 0x13) + 0x20) = -1;
  *(char *)((int)(pacVar8 + 0x13) + 0x21) = -1;
  *(char *)((int)(pacVar8 + 0x13) + 0x22) = -1;
  *(char *)((int)(pacVar8 + 0x13) + 0x23) = -1;
  fVar1 = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z;
  pacVar8 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar8 + 0x13) + 0x18) = '\0';
  *(char *)((int)(pacVar8 + 0x13) + 0x19) = '\0';
  *(char *)((int)(pacVar8 + 0x13) + 0x1a) = '\0';
  *(char *)((int)(pacVar8 + 0x13) + 0x1b) = '\0';
  if (-1 < (int)fVar1) {
    local_98.min.x = local_14c.center_x - local_14c.radius;
    local_98.max.x = local_14c.center_x + local_14c.radius;
    if (local_14c.dir_x <= 0.0) {
      local_98.min.x = local_98.min.x + local_14c.dir_x;
    }
    else {
      local_98.max.x = local_98.max.x + local_14c.dir_x;
    }
    local_98.min.y = local_14c.bottom_y;
    local_98.min.z = local_14c.center_z - local_14c.radius;
    local_98.max.z = local_14c.center_z + local_14c.radius;
    local_98.max.y = local_14c.top_y;
    if (local_14c.dir_z <= 0.0) {
      local_98.min.z = local_98.min.z + local_14c.dir_z;
    }
    else {
      local_98.max.z = local_98.max.z + local_14c.dir_z;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_f0);
    local_f0.ray_query.ray_type = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].x;
    local_f0.ray_query.laser_type = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].y;
    local_f0.ray_query.laser_color.r = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].z;
    local_f0.ray_query.laser_color.g = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].x;
    local_f0.ray_query.laser_color.b = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].y;
    local_14 = 0;
    if (0 < (int)this_ptr->waypoints[0x6d6]) {
      local_18 = this_ptr;
      do {
        actor = local_18->waypoints[0x6d7];
        pCVar9 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0
                           (this_ptr,(CDemonActor *)actor);
        if ((pCVar9 == (CDeformableModelInstance *)0x0) &&
           (local_f0.deformable_model = pCVar9,
           local_f0.keyframed_model = (CKeyFramedModelInstance *)pCVar9,
           bounding_box_type =
                (*((actor->base).base.vtable._ub)->getCollisionType)((CDemonActor *)actor,&local_f0)
           , bounding_box_type != COLLISION_TYPE_NONE)) {
          pCVar10 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
                              ((CDemonActor *)actor,&CStack_b0,&local_f0,bounding_box_type);
          iVar11 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(&local_98,pCVar10);
          if (iVar11 != 0) {
            if ((CDeformableModelInstance *)local_f0.keyframed_model ==
                (CDeformableModelInstance *)0x0) {
              if (bounding_box_type < COLLISION_TYPE_CYLINDER) {
                if (bounding_box_type == COLLISION_TYPE_MESH) {
                  orientation_matrix = &(actor->base).base.orient_matrix;
                  pCVar12 = &(actor->base).base.location.position;
                  pCVar10 = (*((actor->base).base.vtable._ub)->getBoundingBox)
                                      ((CDemonActor *)actor,&CStack_c8);
                  iVar11 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710
                                     (this_ptr,&local_14c,pCVar10,pCVar12,orientation_matrix);
                  if (iVar11 != 0) {
                    *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
                  }
                }
                else {
LAB_0051133f:
                  PTR_01cc4800 = "..\\core\\setcolid.cpp";
                  INT_01cc4804 = 0x3f1;
                  core_main_c_FUN_004c8440("Invalid collision type!");
                }
              }
              else if (bounding_box_type < COLLISION_TYPE_CUSTOM) {
                local_f0.cylinder_bottom_y =
                     local_f0.cylinder_bottom_y + (actor->base).base.location.position.y;
                local_f0.cylinder_top_y =
                     local_f0.cylinder_top_y + (actor->base).base.location.position.y;
                fVar1 = (actor->base).base.location.position.x;
                fVar2 = (actor->base).base.location.position.z;
                if ((local_f0.cylinder_bottom_y < local_14c.top_y) &&
                   (local_14c.bottom_y < local_f0.cylinder_top_y)) {
                  fVar3 = fVar1 - local_14c.center_x;
                  fVar5 = fVar2 - local_14c.center_z;
                  fVar6 = local_f0.cylinder_radius + local_14c.radius;
                  fVar7 = fVar6 * fVar6;
                  fVar4 = fVar5 * fVar5 + fVar3 * fVar3;
                  if (fVar7 <= fVar4) {
                    fVar3 = fVar5 * local_14c.normal_z + fVar3 * local_14c.normal_x;
                    if (0.0 < fVar3) {
                      fVar6 = local_14c.normal_x * fVar3 + local_14c.center_x;
                      fVar4 = fVar1 - fVar6;
                      fVar5 = local_14c.normal_z * fVar3 + local_14c.center_z;
                      fVar3 = fVar2 - fVar5;
                      fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
                      if (fVar3 < fVar7) {
                        fVar3 = SQRT(fVar7 - fVar3);
                        fVar6 = fVar6 - local_14c.normal_x * fVar3;
                        fVar5 = fVar5 - local_14c.normal_z * fVar3;
                        if (ABS(local_14c.dir_x) <= ABS(local_14c.dir_z)) {
                          fVar3 = (fVar5 - local_14c.center_z) / local_14c.dir_z;
                        }
                        else {
                          fVar3 = (fVar6 - local_14c.center_x) / local_14c.dir_x;
                        }
                        if (((0.0 <= fVar3) && (fVar3 < local_14c.closest_t)) && (fVar3 <= 1.0)) {
                          local_14c.push_normal.x = fVar6 - fVar1;
                          local_14c.push_normal.z = fVar5 - fVar2;
                          local_14c.push_normal.y = 0.0;
                          *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
                          local_14c.closest_t = fVar3;
                        }
                      }
                    }
                  }
                  else {
                    dStack_278 = SQRT((double)fVar4) - (double)fVar6;
                    if (-0.001 < dStack_278) {
                      dStack_278 = -0.001;
                    }
                    if ((float)dStack_278 < local_14c.closest_t) {
                      local_14c.push_normal.x = -fVar3;
                      local_14c.push_normal.z = -fVar5;
                      local_14c.push_normal.y = 0.0;
                      *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
                      local_14c.closest_t = (float)dStack_278;
                    }
                  }
                }
              }
              else {
                if (bounding_box_type != COLLISION_TYPE_CUSTOM) goto LAB_0051133f;
                CStack_68.x = local_14c.center_x;
                CStack_68.z = local_14c.center_z;
                CStack_68.y = (float)local_f0.keyframed_model;
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                          ((CDemonActor *)actor,&CStack_80,&CStack_68);
                CStack_74.x = local_14c.dir_x;
                CStack_74.z = local_14c.dir_z;
                CStack_74.y = 0.0;
                core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                          ((CDemonActor *)actor,&CStack_5c,&CStack_74);
                core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20
                          (&SStack_1a8,CStack_80.x,CStack_80.z,CStack_5c.x,CStack_5c.z,radius,
                           bottom_y - (actor->base).base.location.position.y,
                           top_y - (actor->base).base.location.position.y);
                SStack_1a8.closest_t = local_14c.closest_t;
                (*((actor->base).base.vtable._ub)->customIntersectCylinderXZ)
                          ((CDemonActor *)actor,&SStack_1a8);
                if (SStack_1a8.closest_t < local_14c.closest_t) {
                  local_14c.closest_t = SStack_1a8.closest_t;
                  pCVar12 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                      ((CDemonActor *)actor,aCStack_50,&SStack_1a8.push_normal);
                  if (&local_14c.push_normal != pCVar12) {
                    local_14c.push_normal.x = pCVar12->x;
                    local_14c.push_normal.y = pCVar12->y;
                    local_14c.push_normal.z = pCVar12->z;
                  }
                  *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
                }
              }
            }
            else {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                                      (local_f0.keyframed_model);
              if (*(int *)(this_ptr_00->texture_list[7].textures[2].texture_name + 4) == 0) {
                PTR_01cc4800 = "..\\core\\setcolid.cpp";
                INT_01cc4804 = 0x389;
                core_main_c_FUN_004c8440("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
              }
              core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20
                        (&SStack_204,local_14c.center_x - (actor->base).base.location.position.x,
                         local_14c.center_z - (actor->base).base.location.position.z,local_14c.dir_x
                         ,local_14c.dir_z,radius,bottom_y - (actor->base).base.location.position.y,
                         top_y - (actor->base).base.location.position.y);
              SStack_204.closest_t = local_14c.closest_t;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10
                        (this_ptr_00,0,&SStack_204,&(actor->base).base.orient.vec);
              if (SStack_204.closest_t < local_14c.closest_t) {
                if (&local_14c.push_normal != &SStack_204.push_normal) {
                  local_14c.push_normal.x = SStack_204.push_normal.x;
                  local_14c.push_normal.y = SStack_204.push_normal.y;
                  local_14c.push_normal.z = SStack_204.push_normal.z;
                }
                *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
                local_14c.closest_t = SStack_204.closest_t;
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        local_14 = local_14 + 1;
      } while (local_14 < (int)this_ptr->waypoints[0x6d6]);
    }
  }
  if (local_14c.closest_t <= 1.0) {
    fVar1 = SQRT(local_14c.push_normal.z * local_14c.push_normal.z +
                 local_14c.push_normal.y * local_14c.push_normal.y +
                 local_14c.push_normal.x * local_14c.push_normal.x);
    if (0.0 < fVar1) {
      fVar1 = 1.0 / fVar1;
      local_14c.push_normal.x = local_14c.push_normal.x * fVar1;
      local_14c.push_normal.y = local_14c.push_normal.y * fVar1;
      local_14c.push_normal.z = local_14c.push_normal.z * fVar1;
    }
    else {
      local_14c.push_normal.y = 0.0;
      local_14c.push_normal.x = 0.0;
      local_14c.push_normal.z = 0.0;
    }
    pcVar13 = this_ptr->lights[199].filter_names[0x12] + 0x24;
    if ((CVector3f *)pcVar13 != &local_14c.push_normal) {
      *(float *)pcVar13 = local_14c.push_normal.x;
      *(float *)this_ptr->lights[199].filter_names[0x13] = local_14c.push_normal.y;
      *(float *)(this_ptr->lights[199].filter_names[0x13] + 4) = local_14c.push_normal.z;
      return local_14c.closest_t;
    }
  }
  return local_14c.closest_t;
}
