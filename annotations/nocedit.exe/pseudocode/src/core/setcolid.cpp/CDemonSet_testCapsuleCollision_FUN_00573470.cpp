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
  CKeyFramedModelInstance *pCVar8;
  uint bounding_box_type;
  CBoundingBox3D *pCVar9;
  int iVar10;
  CKeyFramedModel *this_ptr_00;
  CVector3f *pCVar11;
  SIntersectXZCylinder *cylinder1;
  SIntersectXZCylinder *cylinder2;
  double dStack_278;
  byte auStack_204 [8];
  float fStack_1fc;
  float fStack_1f8;
  byte auStack_1a8 [92];
  byte local_14c [4];
  CVector3f local_148;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  void *local_128;
  void *local_124;
  float fStack_118;
  float fStack_114;
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
            ((SCapsuleCollision *)local_14c,start_x,start_z,dir_x,dir_z,radius,user_data1,user_data2
            );
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
              (&g_CDemonRaytraceInstance,(SCapsuleCollision *)local_14c);
  }
  this_ptr->ground_type = 1;
  this_ptr->unk1 = -1;
  this_ptr->unk2 = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    local_98.min.x = local_13c - local_12c;
    local_98.max.x = local_13c + local_12c;
    if (local_134 <= 0.0) {
      local_98.min.x = local_98.min.x + local_134;
    }
    else {
      local_98.max.x = local_98.max.x + local_134;
    }
    local_98.min.y = (float)local_124;
    local_98.min.z = local_138 - local_12c;
    local_98.max.z = local_138 + local_12c;
    local_98.max.y = (float)local_128;
    if (local_130 <= 0.0) {
      local_98.min.z = local_98.min.z + local_130;
    }
    else {
      local_98.max.z = local_98.max.z + local_130;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_f0);
    local_f0.ray_type = this_ptr->ray_type;
    local_f0.unk1 = this_ptr->unk8;
    local_f0.unk2 = this_ptr->unk9;
    local_f0.unk3 = this_ptr->unk10;
    local_f0.unk4 = this_ptr->unk11;
    local_14 = 0;
    if (0 < *(int *)(this_ptr->unk4 + 0x7d08)) {
      local_18 = this_ptr;
      do {
        actor = *(CDemonActor **)(local_18->unk4 + 0x7d0c);
        pCVar8 = (CKeyFramedModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        if ((pCVar8 == (CKeyFramedModelInstance *)0x0) &&
           (local_f0.result_ptr = pCVar8, local_f0.model = pCVar8,
           bounding_box_type = (*((actor->vtable)._ub)->hasCollision)(actor,&local_f0),
           bounding_box_type != 0)) {
          pCVar9 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                             (actor,&CStack_b0,&local_f0,bounding_box_type);
          iVar10 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&local_98,pCVar9);
          if (iVar10 != 0) {
            if (local_f0.model == (CKeyFramedModelInstance *)0x0) {
              if (bounding_box_type < 2) {
                if (bounding_box_type == 1) {
                  cylinder2 = (SIntersectXZCylinder *)&actor->orient_matrix;
                  cylinder1 = (SIntersectXZCylinder *)&actor->location;
                  pCVar9 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_c8);
                  iVar10 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                     (this_ptr,(CBoundingBox3D *)local_14c,(CMatrix3x3f *)pCVar9,
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
                if ((local_f0.cylinder_bottom_y < (float)local_128) &&
                   ((float)local_124 < local_f0.cylinder_top_y)) {
                  fVar3 = fVar1 - local_13c;
                  fVar5 = fVar2 - local_138;
                  fVar6 = local_f0.cylinder_radius + local_12c;
                  fVar7 = fVar6 * fVar6;
                  fVar4 = fVar5 * fVar5 + fVar3 * fVar3;
                  if (fVar7 <= fVar4) {
                    fVar3 = fVar5 * fStack_114 + fVar3 * fStack_118;
                    if (0.0 < fVar3) {
                      fVar6 = fStack_118 * fVar3 + local_13c;
                      fVar4 = fVar1 - fVar6;
                      fVar5 = fStack_114 * fVar3 + local_138;
                      fVar3 = fVar2 - fVar5;
                      fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
                      if (fVar3 < fVar7) {
                        fVar3 = SQRT(fVar7 - fVar3);
                        fVar6 = fVar6 - fStack_118 * fVar3;
                        fVar5 = fVar5 - fStack_114 * fVar3;
                        if (ABS(local_134) <= ABS(local_130)) {
                          fVar3 = (fVar5 - local_138) / local_130;
                        }
                        else {
                          fVar3 = (fVar6 - local_13c) / local_134;
                        }
                        if (((0.0 <= fVar3) && (fVar3 < (float)local_14c)) && (fVar3 <= 1.0)) {
                          local_148.x = fVar6 - fVar1;
                          local_148.z = fVar5 - fVar2;
                          local_148.y = 0.0;
                          this_ptr->collision_actor = actor;
                          local_14c = (byte  [4])fVar3;
                        }
                      }
                    }
                  }
                  else {
                    dStack_278 = SQRT((double)fVar4) - (double)fVar6;
                    if (-0.001 < dStack_278) {
                      dStack_278 = -0.001;
                    }
                    if ((float)dStack_278 < (float)local_14c) {
                      local_148.x = -fVar3;
                      local_148.z = -fVar5;
                      local_148.y = 0.0;
                      this_ptr->collision_actor = actor;
                      local_14c = (byte  [4])(float)dStack_278;
                    }
                  }
                }
              }
              else {
                if (bounding_box_type != 3) goto LAB_00573d6f;
                CStack_68.x = local_13c;
                CStack_68.z = local_138;
                CStack_68.y = (float)local_f0.model;
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                          (actor,&CStack_80,&CStack_68);
                CStack_74.x = local_134;
                CStack_74.z = local_130;
                CStack_74.y = 0.0;
                core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (actor,&CStack_5c,&CStack_74);
                core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                          ((SCapsuleCollision *)auStack_1a8,CStack_80.x,CStack_80.z,CStack_5c.x,
                           CStack_5c.z,radius,
                           (void *)((float)user_data1 - (actor->location).position.y),
                           (void *)((float)user_data2 - (actor->location).position.y));
                auStack_1a8._0_4_ = local_14c;
                (*((actor->vtable)._ub)->customIntersectCylinderXZ)
                          (actor,(SIntersectXZCylinder *)auStack_1a8);
                if ((float)auStack_1a8._0_4_ < (float)local_14c) {
                  local_14c = (byte  [4])auStack_1a8._0_4_;
                  pCVar11 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                      (actor,aCStack_50,(CVector3f *)(auStack_1a8 + 4));
                  if (&local_148 != pCVar11) {
                    local_148.x = pCVar11->x;
                    local_148.y = pCVar11->y;
                    local_148.z = pCVar11->z;
                  }
                  this_ptr->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                      (local_f0.model);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 0x389;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
              }
              core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                        ((SCapsuleCollision *)auStack_204,local_13c - (actor->location).position.x,
                         local_138 - (actor->location).position.z,local_134,local_130,radius,
                         (void *)((float)user_data1 - (actor->location).position.y),
                         (void *)((float)user_data2 - (actor->location).position.y));
              auStack_204._0_4_ = local_14c;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                        (this_ptr_00,0,(SIntersectXZCylinder *)auStack_204,&(actor->orient).vec);
              if ((float)auStack_204._0_4_ < (float)local_14c) {
                if (&local_148 != (CVector3f *)(auStack_204 + 4)) {
                  local_148.x = (float)auStack_204._4_4_;
                  local_148.y = fStack_1fc;
                  local_148.z = fStack_1f8;
                }
                this_ptr->collision_actor = actor;
                local_14c = (byte  [4])(float)auStack_204._0_4_;
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this_ptr->unk4 + 0x7d08));
    }
  }
  if ((float)local_14c <= 1.0) {
    fVar1 = SQRT(local_148.z * local_148.z + local_148.y * local_148.y + local_148.x * local_148.x);
    if (0.0 < fVar1) {
      fVar1 = 1.0 / fVar1;
      local_148.x = local_148.x * fVar1;
      local_148.y = local_148.y * fVar1;
      local_148.z = local_148.z * fVar1;
    }
    else {
      local_148.y = 0.0;
      local_148.x = 0.0;
      local_148.z = 0.0;
    }
    if (&this_ptr->collision_normal != &local_148) {
      (this_ptr->collision_normal).x = local_148.x;
      (this_ptr->collision_normal).y = local_148.y;
      (this_ptr->collision_normal).z = local_148.z;
      return (float)local_14c;
    }
  }
  return (float)local_14c;
}
