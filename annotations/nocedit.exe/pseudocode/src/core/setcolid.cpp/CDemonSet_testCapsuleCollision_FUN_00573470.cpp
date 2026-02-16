// Name: core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
// Address: 00573470
// Address Range: [[00573470, 00573e04]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,void *user_data1,void *user_data2)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,void *user_data1,void *user_data2)

{
  CDemonActor *actor;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDeformableModelInstance *pCVar8;
  uint bounding_box_type;
  CBoundingBox3D *pCVar9;
  int iVar10;
  CKeyFramedModel *this_ptr_00;
  CVector3f *pCVar11;
  SIntersectXZCylinder *cylinder1;
  SIntersectXZCylinder *cylinder2;
  double dStack_278;
  SIntersectXZCylinder SStack_204;
  SIntersectXZCylinder SStack_1a8;
  SCapsuleCollision local_14c;
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
  
  core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
            (&local_14c,start_x,start_z,dir_x,dir_z,radius,user_data1,user_data2);
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
              (&g_CDemonRaytraceInstance,&local_14c);
  }
  this_ptr->ground_type = 1;
  this_ptr->collision_part_index = -1;
  this_ptr->collision_triangle_index = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    local_98.min.x = local_14c.start_x - local_14c.radius;
    local_98.max.x = local_14c.start_x + local_14c.radius;
    if (local_14c.dir_x <= 0.0) {
      local_98.min.x = local_98.min.x + local_14c.dir_x;
    }
    else {
      local_98.max.x = local_98.max.x + local_14c.dir_x;
    }
    local_98.min.y = local_14c.bottom_y;
    local_98.min.z = local_14c.start_z - local_14c.radius;
    local_98.max.z = local_14c.start_z + local_14c.radius;
    local_98.max.y = local_14c.top_y;
    if (local_14c.dir_z <= 0.0) {
      local_98.min.z = local_98.min.z + local_14c.dir_z;
    }
    else {
      local_98.max.z = local_98.max.z + local_14c.dir_z;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_f0);
    local_f0.ray_type = this_ptr->ray_type;
    local_f0.laser_type = this_ptr->laser_type;
    local_f0.laser_color.r = (this_ptr->laser_color).r;
    local_f0.laser_color.g = (this_ptr->laser_color).g;
    local_f0.laser_color.b = (this_ptr->laser_color).b;
    local_14 = 0;
    if (0 < this_ptr->collidable_actor_count) {
      local_18 = this_ptr;
      do {
        actor = local_18->collidable_actors[0];
        pCVar8 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        if ((pCVar8 == (CDeformableModelInstance *)0x0) &&
           (local_f0.deformable_model = pCVar8,
           local_f0.keyframed_model = (CKeyFramedModelInstance *)pCVar8,
           bounding_box_type = (*((actor->vtable)._ub)->hasCollision)(actor,&local_f0),
           bounding_box_type != 0)) {
          pCVar9 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                             (actor,&CStack_b0,&local_f0,bounding_box_type);
          iVar10 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&local_98,pCVar9);
          if (iVar10 != 0) {
            if ((CDeformableModelInstance *)local_f0.keyframed_model ==
                (CDeformableModelInstance *)0x0) {
              if (bounding_box_type < 2) {
                if (bounding_box_type == 1) {
                  cylinder2 = (SIntersectXZCylinder *)&actor->orient_matrix;
                  cylinder1 = (SIntersectXZCylinder *)&actor->location;
                  pCVar9 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_c8);
                  iVar10 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                     (this_ptr,(CBoundingBox3D *)&local_14c,(CMatrix3x3f *)pCVar9,
                                      cylinder1,cylinder2);
                  if (iVar10 != 0) {
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
              else if (bounding_box_type < 3) {
                local_f0.cylinder_bottom_y =
                     local_f0.cylinder_bottom_y + (actor->location).position.y;
                local_f0.cylinder_top_y = local_f0.cylinder_top_y + (actor->location).position.y;
                fVar1 = (actor->location).position.x;
                fVar2 = (actor->location).position.z;
                if ((local_f0.cylinder_bottom_y < local_14c.top_y) &&
                   (local_14c.bottom_y < local_f0.cylinder_top_y)) {
                  fVar3 = fVar1 - local_14c.start_x;
                  fVar5 = fVar2 - local_14c.start_z;
                  fVar6 = local_f0.cylinder_radius + local_14c.radius;
                  fVar7 = fVar6 * fVar6;
                  fVar4 = fVar5 * fVar5 + fVar3 * fVar3;
                  if (fVar7 <= fVar4) {
                    fVar3 = fVar5 * local_14c.normal_z + fVar3 * local_14c.normal_x;
                    if (0.0 < fVar3) {
                      fVar6 = local_14c.normal_x * fVar3 + local_14c.start_x;
                      fVar4 = fVar1 - fVar6;
                      fVar5 = local_14c.normal_z * fVar3 + local_14c.start_z;
                      fVar3 = fVar2 - fVar5;
                      fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
                      if (fVar3 < fVar7) {
                        fVar3 = SQRT(fVar7 - fVar3);
                        fVar6 = fVar6 - local_14c.normal_x * fVar3;
                        fVar5 = fVar5 - local_14c.normal_z * fVar3;
                        if (ABS(local_14c.dir_x) <= ABS(local_14c.dir_z)) {
                          fVar3 = (fVar5 - local_14c.start_z) / local_14c.dir_z;
                        }
                        else {
                          fVar3 = (fVar6 - local_14c.start_x) / local_14c.dir_x;
                        }
                        if (((0.0 <= fVar3) && (fVar3 < local_14c.closest_t)) && (fVar3 <= 1.0)) {
                          local_14c.push_normal.x = fVar6 - fVar1;
                          local_14c.push_normal.z = fVar5 - fVar2;
                          local_14c.push_normal.y = 0.0;
                          this_ptr->collision_actor = actor;
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
                      this_ptr->collision_actor = actor;
                      local_14c.closest_t = (float)dStack_278;
                    }
                  }
                }
              }
              else {
                if (bounding_box_type != 3) goto LAB_00573d6f;
                CStack_68.x = local_14c.start_x;
                CStack_68.z = local_14c.start_z;
                CStack_68.y = (float)local_f0.keyframed_model;
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                          (actor,&CStack_80,&CStack_68);
                CStack_74.x = local_14c.dir_x;
                CStack_74.z = local_14c.dir_z;
                CStack_74.y = 0.0;
                core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (actor,&CStack_5c,&CStack_74);
                core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                          ((SCapsuleCollision *)&SStack_1a8,CStack_80.x,CStack_80.z,CStack_5c.x,
                           CStack_5c.z,radius,
                           (void *)((float)user_data1 - (actor->location).position.y),
                           (void *)((float)user_data2 - (actor->location).position.y));
                SStack_1a8.closest_t = local_14c.closest_t;
                (*((actor->vtable)._ub)->customIntersectCylinderXZ)(actor,&SStack_1a8);
                if (SStack_1a8.closest_t < local_14c.closest_t) {
                  local_14c.closest_t = SStack_1a8.closest_t;
                  pCVar11 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                      (actor,aCStack_50,&SStack_1a8.push_normal);
                  if (&local_14c.push_normal != pCVar11) {
                    local_14c.push_normal.x = pCVar11->x;
                    local_14c.push_normal.y = pCVar11->y;
                    local_14c.push_normal.z = pCVar11->z;
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
                          ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
              }
              core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                        ((SCapsuleCollision *)&SStack_204,
                         local_14c.start_x - (actor->location).position.x,
                         local_14c.start_z - (actor->location).position.z,local_14c.dir_x,
                         local_14c.dir_z,radius,
                         (void *)((float)user_data1 - (actor->location).position.y),
                         (void *)((float)user_data2 - (actor->location).position.y));
              SStack_204.closest_t = local_14c.closest_t;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                        (this_ptr_00,0,&SStack_204,&(actor->orient).vec);
              if (SStack_204.closest_t < local_14c.closest_t) {
                if (&local_14c.push_normal != &SStack_204.push_normal) {
                  local_14c.push_normal.x = SStack_204.push_normal.x;
                  local_14c.push_normal.y = SStack_204.push_normal.y;
                  local_14c.push_normal.z = SStack_204.push_normal.z;
                }
                this_ptr->collision_actor = actor;
                local_14c.closest_t = SStack_204.closest_t;
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->collidable_actor_count);
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
    if (&this_ptr->collision_normal != &local_14c.push_normal) {
      (this_ptr->collision_normal).x = local_14c.push_normal.x;
      (this_ptr->collision_normal).y = local_14c.push_normal.y;
      (this_ptr->collision_normal).z = local_14c.push_normal.z;
      return local_14c.closest_t;
    }
  }
  return local_14c.closest_t;
}
