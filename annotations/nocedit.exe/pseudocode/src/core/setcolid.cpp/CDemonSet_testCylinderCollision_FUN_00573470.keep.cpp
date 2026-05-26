// Name: core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00573470
// Address: 00573470
// MANUAL RECONSTRUCTION
// Address Range: [[00573470, 00573e04]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)

{
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CDeformableModelInstance *pCVar8;
  ECollisionType bounding_box_type;
  CBoundingBox3D *pCVar9;
  int iVar10;
  CKeyFramedModel *this_ptr_00;
  CBoundingBox3D *bounding_box;
  int iVar12;
  CVector3f *pCVar11;
  CVector3f *position;
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
  int local_14;
  float fVar5;
  float fVar7;
  float fVar6;
  float fVar4;
  CMatrix3x3f *orientation_matrix;
  float fVar1;
  CDemonActor *actor;
  float fVar3;
  float fVar2;
  
  core_dtrace_cpp_initIntersectionCylinder_FUN_00496b90
            (&local_14c,start_x,start_z,dir_x,dir_z,radius,bottom_y,top_y);
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00496c60
              (&g_CDemonRaytraceInstance,&local_14c);
  }
  this_ptr->ground_type = 1;
  this_ptr->collision_part_index = -1;
  this_ptr->collision_bone_index = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
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
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_f0);
    local_f0.ray_query = this_ptr->ray_query;
    local_14 = 0;
    if (0 < this_ptr->collidable_actor_count) {
      do {
        actor = this_ptr->collidable_actors[local_14];
        pCVar8 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        if ((pCVar8 == (CDeformableModelInstance *)0x0) &&
           (local_f0.deformable_model = pCVar8,
           local_f0.keyframed_model = (CKeyFramedModelInstance *)pCVar8,
           bounding_box_type = (*((actor->vtable)._ub)->getCollisionType)(actor,&local_f0),
           bounding_box_type != COLLISION_TYPE_NONE)) {
          pCVar9 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                             (actor,&CStack_b0,&local_f0,bounding_box_type);
          iVar10 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&local_98,pCVar9);
          if (iVar10 != 0) {
            if (local_f0.keyframed_model == (CKeyFramedModelInstance *)0x0) {
              if (bounding_box_type < COLLISION_TYPE_CYLINDER) {
                if (bounding_box_type == COLLISION_TYPE_MESH) {
                  orientation_matrix = &actor->orient_matrix;
                  position = &(actor->location).position;
                  bounding_box = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_c8);
                  iVar12 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                     (this_ptr,&local_14c,bounding_box,position,orientation_matrix);
                  if (iVar12 != 0) {
                    this_ptr->collision_actor = actor;
                  }
                }
                else {
LAB_00573d6f:
                  g_CurrentFilename = "..\\core\\setcolid.cpp";
                  g_CurrentLineNumber = 0x3f1;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid collision type!");
                }
              }
              else if (bounding_box_type < COLLISION_TYPE_CUSTOM) {
                local_f0.cylinder_bottom_y =
                     local_f0.cylinder_bottom_y + (actor->location).position.y;
                local_f0.cylinder_top_y = local_f0.cylinder_top_y + (actor->location).position.y;
                fVar1 = (actor->location).position.x;
                fVar2 = (actor->location).position.z;
                if ((local_f0.cylinder_bottom_y < local_14c.top_y) &&
                   (local_14c.bottom_y < local_f0.cylinder_top_y)) {
                  fVar3 = fVar1 - local_14c.center_x;
                  fVar5 = fVar2 - local_14c.center_z;
                  fVar6 = local_f0.cylinder_radius + local_14c.radius;
                  fVar7 = fVar6 * fVar6;
                  fVar4 = fVar5 * fVar5 + fVar3 * fVar3;
                  if (fVar7 <= fVar4) {
                    fVar8 = fVar5 * local_14c.normal_z + fVar3 * local_14c.normal_x;
                    if (0.0 < fVar8) {
                      fVar11 = local_14c.normal_x * fVar8 + local_14c.center_x;
                      fVar9 = fVar1 - fVar11;
                      fVar10 = local_14c.normal_z * fVar8 + local_14c.center_z;
                      fVar8 = fVar2 - fVar10;
                      fVar8 = fVar8 * fVar8 + fVar9 * fVar9;
                      if (fVar8 < fVar7) {
                        fVar8 = SQRT(fVar7 - fVar8);
                        fVar11 = fVar11 - local_14c.normal_x * fVar8;
                        fVar10 = fVar10 - local_14c.normal_z * fVar8;
                        if (ABS(local_14c.dir_x) <= ABS(local_14c.dir_z)) {
                          fVar8 = (fVar10 - local_14c.center_z) / local_14c.dir_z;
                        }
                        else {
                          fVar8 = (fVar11 - local_14c.center_x) / local_14c.dir_x;
                        }
                        if (((0.0 <= fVar8) && (fVar8 < local_14c.closest_t)) && (fVar8 <= 1.0)) {
                          local_14c.push_normal.x = fVar11 - fVar1;
                          local_14c.push_normal.z = fVar10 - fVar2;
                          local_14c.push_normal.y = 0.0;
                          this_ptr->collision_actor = actor;
                          local_14c.closest_t = fVar8;
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
                      this_ptr->collision_actor = actor;
                      local_14c.closest_t = (float)dStack_278;
                    }
                  }
                }
              }
              else {
                if (bounding_box_type != COLLISION_TYPE_CUSTOM) goto LAB_00573d6f;
                CStack_68.x = local_14c.center_x;
                CStack_68.z = local_14c.center_z;
                CStack_68.y = 0.0;
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                          (actor,&CStack_80,&CStack_68);
                CStack_74.x = local_14c.dir_x;
                CStack_74.z = local_14c.dir_z;
                CStack_74.y = 0.0;
                core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (actor,&CStack_5c,&CStack_74);
                core_dtrace_cpp_initIntersectionCylinder_FUN_00496b90
                          (&SStack_1a8,CStack_80.x,CStack_80.z,CStack_5c.x,CStack_5c.z,radius,
                           bottom_y - (actor->location).position.y,
                           top_y - (actor->location).position.y);
                SStack_1a8.closest_t = local_14c.closest_t;
                (*((actor->vtable)._ub)->customIntersectCylinderXZ)(actor,&SStack_1a8);
                if (SStack_1a8.closest_t < local_14c.closest_t) {
                  local_14c.closest_t = SStack_1a8.closest_t;
                  pCVar11 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                      (actor,aCStack_50,&SStack_1a8.push_normal);
                  if (&local_14c.push_normal != pCVar11) {
                    local_14c.push_normal = *pCVar11;
                  }
                  this_ptr->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                      (local_f0.keyframed_model);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 0x389;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00->model_filename);
              }
              core_dtrace_cpp_initIntersectionCylinder_FUN_00496b90
                        (&SStack_204,local_14c.center_x - (actor->location).position.x,
                         local_14c.center_z - (actor->location).position.z,local_14c.dir_x,
                         local_14c.dir_z,radius,bottom_y - (actor->location).position.y,
                         top_y - (actor->location).position.y);
              SStack_204.closest_t = local_14c.closest_t;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                        (this_ptr_00,0,&SStack_204,&(actor->orient).vec);
              if (SStack_204.closest_t < local_14c.closest_t) {
                if (&local_14c.push_normal != &SStack_204.push_normal) {
                  local_14c.push_normal = SStack_204.push_normal;
                }
                this_ptr->collision_actor = actor;
                local_14c.closest_t = SStack_204.closest_t;
              }
            }
          }
        }
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->collidable_actor_count);
    }
  }
  if (local_14c.closest_t <= 1.0) {
    fVar8 = SQRT(local_14c.push_normal.z * local_14c.push_normal.z +
                 local_14c.push_normal.y * local_14c.push_normal.y +
                 local_14c.push_normal.x * local_14c.push_normal.x);
    if (0.0 < fVar8) {
      fVar8 = 1.0 / fVar8;
      local_14c.push_normal.x = local_14c.push_normal.x * fVar8;
      local_14c.push_normal.y = local_14c.push_normal.y * fVar8;
      local_14c.push_normal.z = local_14c.push_normal.z * fVar8;
    }
    else {
      local_14c.push_normal.y = 0.0;
      local_14c.push_normal.x = 0.0;
      local_14c.push_normal.z = 0.0;
    }
    if (&this_ptr->collision_normal != &local_14c.push_normal) {
      this_ptr->collision_normal = local_14c.push_normal;
      return local_14c.closest_t;
    }
  }
  return local_14c.closest_t;
}
