// Name: core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
// Address: 00573470
// Address Range: [[00573470, 00573e04]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, float dir_z, float radius, void * user_data1, void * user_data2)

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
          (CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,
          void *user_data1,void *user_data2)

{
  double dVar1;
  double dVar2;
  CDemonActor *actor;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  CKeyFramedModelInstance *pCVar13;
  uint bounding_box_type;
  CBoundingBox3D *pCVar14;
  int iVar15;
  CKeyFramedModel *this_ptr_00;
  CVector3f *pCVar16;
  double in_stack_fffffd58;
  double dStack_278;
  SIntersectXZCylinder SStack_204;
  byte auStack_1a8 [92];
  byte local_14c [4];
  byte local_148 [8];
  float local_140;
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
  this_ptr->field11_0x14d148 = -1;
  this_ptr->field12_0x14d14c = -1;
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
    local_f0.field1_0x4 = this_ptr->field60_0x15f684;
    local_f0.field2_0x8 = this_ptr->field61_0x15f688;
    local_f0.field3_0xc = this_ptr->field62_0x15f68c;
    local_f0.field4_0x10 = this_ptr->field63_0x15f690;
    local_14 = 0;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      local_18 = this_ptr;
      do {
        actor = *(CDemonActor **)(local_18->field19_0x14f0a0 + 0x7d0c);
        pCVar13 = (CKeyFramedModelInstance *)
                  core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        if ((pCVar13 == (CKeyFramedModelInstance *)0x0) &&
           (local_f0.result_ptr = pCVar13, local_f0.field9_0x24 = pCVar13,
           bounding_box_type = (*actor->vtable->hasCollision)(actor,&local_f0),
           bounding_box_type != 0)) {
          pCVar14 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                              (actor,&CStack_b0,&local_f0,bounding_box_type);
          iVar15 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&local_98,pCVar14);
          if (iVar15 != 0) {
            if (local_f0.field9_0x24 == (CKeyFramedModelInstance *)0x0) {
              if (bounding_box_type < 2) {
                if (bounding_box_type == 1) {
                  pCVar14 = (*actor->vtable->getBoundingBox)(actor,&CStack_c8);
                  iVar15 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                     (this_ptr,(CBoundingBox3D *)(local_148 + 4),
                                      (CMatrix3x3f *)pCVar14,SUB84 /* extract 2-byte value */(in_stack_fffffd58,0),
                                      (SIntersectXZCylinder *)((ulonglong)in_stack_fffffd58 >> 0x20)
                                     );
                  if (iVar15 != 0) {
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
                fVar3 = (actor->location).position.x;
                fVar4 = (actor->location).position.z;
                if ((local_f0.cylinder_bottom_y < (float)local_128) &&
                   ((float)local_124 < local_f0.cylinder_top_y)) {
                  fVar5 = fVar3 - local_13c;
                  fVar7 = fVar4 - local_138;
                  fVar8 = local_f0.cylinder_radius + local_12c;
                  fVar9 = fVar8 * fVar8;
                  fVar6 = fVar7 * fVar7 + fVar5 * fVar5;
                  if (fVar9 <= fVar6) {
                    dVar1 = (double)fStack_118;
                    dVar2 = (double)fStack_114;
                    dVar10 = (double)fVar7 * dVar2 + (double)fVar5 * dVar1;
                    if (0.0 < dVar10) {
                      dVar11 = dVar1 * dVar10 + (double)local_13c;
                      fVar5 = fVar3 - (float)dVar11;
                      dVar10 = dVar2 * dVar10 + (double)local_138;
                      fVar6 = fVar4 - (float)dVar10;
                      fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
                      if (fVar5 < fVar9) {
                        dVar12 = SQRT((double)fVar9 - (double)fVar5);
                        in_stack_fffffd58 = dVar11 - dVar1 * dVar12;
                        dVar10 = dVar10 - dVar2 * dVar12;
                        if (ABS(local_134) <= ABS(local_130)) {
                          dVar1 = (dVar10 - (double)local_138) / (double)local_130;
                        }
                        else {
                          dVar1 = (in_stack_fffffd58 - (double)local_13c) / (double)local_134;
                        }
                        if (((0.0 <= dVar1) && ((float)dVar1 < (float)local_14c)) && (dVar1 <= 1.0))
                        {
                          local_14c = (byte  [4])(float)dVar1;
                          local_148._0_4_ = (float)in_stack_fffffd58 - fVar3;
                          local_140 = (float)dVar10 - fVar4;
                          local_148._4_4_ = 0.0;
                          this_ptr->collision_actor = actor;
                        }
                      }
                    }
                  }
                  else {
                    dStack_278 = SQRT((double)fVar6) - (double)fVar8;
                    if (-0.001 < dStack_278) {
                      dStack_278 = -0.001;
                    }
                    if ((float)dStack_278 < (float)local_14c) {
                      local_14c = (byte  [4])(float)dStack_278;
                      local_148._0_4_ = -fVar5;
                      local_140 = -fVar7;
                      local_148._4_4_ = 0.0;
                      this_ptr->collision_actor = actor;
                    }
                  }
                }
              }
              else {
                if (bounding_box_type != 3) goto LAB_00573d6f;
                CStack_68.x = local_13c;
                CStack_68.z = local_138;
                CStack_68.y = (float)local_f0.field9_0x24;
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
                (*actor->vtable->customIntersectCylinderXZ)
                          (actor,(SIntersectXZCylinder *)auStack_1a8);
                if ((float)auStack_1a8._0_4_ < (float)local_14c) {
                  local_14c = (byte  [4])auStack_1a8._0_4_;
                  pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                      (actor,aCStack_50,(CVector3f *)(auStack_1a8 + 4));
                  if ((CVector3f *)local_148 != pCVar16) {
                    local_148._0_4_ = pCVar16->x;
                    local_148._4_4_ = pCVar16->y;
                    local_140 = pCVar16->z;
                  }
                  this_ptr->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                      (local_f0.field9_0x24);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 0x389;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
              }
              core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                        ((SCapsuleCollision *)&SStack_204,local_13c - (actor->location).position.x,
                         local_138 - (actor->location).position.z,local_134,local_130,radius,
                         (void *)((float)user_data1 - (actor->location).position.y),
                         (void *)((float)user_data2 - (actor->location).position.y));
              SStack_204.max_distance = (float)local_14c;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                        (this_ptr_00,0,&SStack_204,(CVector3f *)&actor->orient);
              if (SStack_204.max_distance < (float)local_14c) {
                local_14c = (byte  [4])SStack_204.max_distance;
                if ((float *)local_148 != &SStack_204.push_z) {
                  local_148._0_4_ = SStack_204.push_z;
                  local_148._4_4_ = SStack_204.flags;
                  local_140 = SStack_204.push_x;
                }
                this_ptr->collision_actor = actor;
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
  }
  if ((float)local_14c <= 1.0) {
    fVar3 = SQRT(local_140 * local_140 +
                 (float)local_148._4_4_ * (float)local_148._4_4_ +
                 (float)local_148._0_4_ * (float)local_148._0_4_);
    if (0.0 < fVar3) {
      fVar3 = 1.0 / fVar3;
      local_148._0_4_ = (float)local_148._0_4_ * fVar3;
      local_148._4_4_ = (float)local_148._4_4_ * fVar3;
      local_140 = local_140 * fVar3;
    }
    else {
      local_148._4_4_ = 0.0;
      local_148._0_4_ = 0.0;
      local_140 = 0.0;
    }
    if (&this_ptr->collision_normal != (CVector3f *)local_148) {
      (this_ptr->collision_normal).x = (float)local_148._0_4_;
      (this_ptr->collision_normal).y = (float)local_148._4_4_;
      (this_ptr->collision_normal).z = local_140;
      return (float)local_14c;
    }
  }
  return (float)local_14c;
}
