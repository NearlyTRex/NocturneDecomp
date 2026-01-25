// Name: core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
// Address: 00573470
// Address Range: [[00573470, 00573e04]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, float dir_z, float radius, void * user_data1, void * user_data2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl
core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
          (CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,
          void *user_data1,void *user_data2)

{
  CDemonActor *actor;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  uint bounding_box_type;
  CBoundingBox3D *pCVar9;
  int iVar10;
  CKeyFramedModel *this_ptr_00;
  CVector3f *pCVar11;
  SIntersectXZCylinder *in_stack_fffffd60;
  SIntersectXZCylinder *in_stack_fffffd64;
  double dStack_270;
  SIntersectXZCylinder SStack_1fc;
  byte auStack_1a0 [84];
  byte local_14c [4];
  float local_148;
  float local_144;
  float local_140;
  CBoundingBox3D local_13c;
  void *local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  byte local_f0 [12];
  float local_e4;
  float local_e0;
  float fStack_d4;
  void *local_d0;
  void *local_cc;
  CKeyFramedModelInstance *pCStack_c4;
  CBoundingBox3D CStack_c0;
  CBoundingBox3D CStack_a8;
  CBoundingBox3D local_90;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f aCStack_54 [5];
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
    CStack_a8.max.y = local_13c.min.x - local_13c.max.y;
    local_90.min.y = local_13c.min.x + local_13c.max.y;
    if (local_13c.min.z <= 0.0) {
      CStack_a8.max.y = CStack_a8.max.y + local_13c.min.z;
    }
    else {
      local_90.min.y = local_90.min.y + local_13c.min.z;
    }
    CStack_a8.max.z = (float)local_124;
    local_90.min.x = local_13c.min.y - local_13c.max.y;
    local_90.max.x = local_13c.min.y + local_13c.max.y;
    local_90.min.z = local_13c.max.z;
    if (local_13c.max.x <= 0.0) {
      local_90.min.x = local_90.min.x + local_13c.max.x;
    }
    else {
      local_90.max.x = local_90.max.x + local_13c.max.x;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)local_f0);
    local_f0._0_4_ = this_ptr->ray_type;
    local_f0._4_4_ = this_ptr->field60_0x15f684;
    local_f0._8_4_ = this_ptr->field61_0x15f688;
    local_e4 = this_ptr->field62_0x15f68c;
    local_e0 = this_ptr->field63_0x15f690;
    local_14 = 0;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      local_18 = this_ptr;
      do {
        actor = *(CDemonActor **)(local_18->field19_0x14f0a0 + 0x7d0c);
        pvVar8 = (void *)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        if ((pvVar8 == (void *)0x0) &&
           (local_d0 = pvVar8, local_cc = pvVar8,
           bounding_box_type =
                (*((actor->vtable)._ub)->hasCollision)(actor,(SCollisionInfo *)local_f0),
           bounding_box_type != 0)) {
          pCVar9 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                             (actor,&CStack_a8,(SCollisionInfo *)(local_f0 + 8),bounding_box_type);
          iVar10 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&local_90,pCVar9);
          if (iVar10 != 0) {
            if (pCStack_c4 == (CKeyFramedModelInstance *)0x0) {
              if (bounding_box_type < 2) {
                if (bounding_box_type == 1) {
                  pCVar9 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_c0);
                  iVar10 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                     (this_ptr,&local_13c,(CMatrix3x3f *)pCVar9,in_stack_fffffd60,
                                      in_stack_fffffd64);
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
                fStack_d4 = fStack_d4 + (actor->location).position.y;
                local_d0 = (void *)((float)local_d0 + (actor->location).position.y);
                fVar1 = (actor->location).position.x;
                fVar2 = (actor->location).position.z;
                if ((fStack_d4 < fStack_120) && (fStack_11c < (float)local_d0)) {
                  fVar3 = fVar1 - local_13c.min.z;
                  fVar5 = fVar2 - local_13c.max.x;
                  fVar6 = (float)local_cc + (float)local_124;
                  fVar7 = fVar6 * fVar6;
                  fVar4 = fVar5 * fVar5 + fVar3 * fVar3;
                  if (fVar7 <= fVar4) {
                    fVar3 = fVar5 * fStack_10c + fVar3 * fStack_110;
                    if (0.0 < fVar3) {
                      fVar6 = fStack_110 * fVar3 + local_13c.min.z;
                      fVar4 = fVar1 - fVar6;
                      fVar5 = fStack_10c * fVar3 + local_13c.max.x;
                      fVar3 = fVar2 - fVar5;
                      fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
                      if (fVar3 < fVar7) {
                        fVar3 = SQRT(fVar7 - fVar3);
                        fVar6 = fVar6 - fStack_110 * fVar3;
                        fVar5 = fVar5 - fStack_10c * fVar3;
                        if (ABS(local_13c.max.y) <= ABS(local_13c.max.z)) {
                          fVar3 = (fVar5 - local_13c.max.x) / local_13c.max.z;
                        }
                        else {
                          fVar3 = (fVar6 - local_13c.min.z) / local_13c.max.y;
                        }
                        if (((0.0 <= fVar3) && (fVar3 < local_144)) && (fVar3 <= 1.0)) {
                          local_140 = fVar6 - fVar1;
                          local_13c.min.y = fVar5 - fVar2;
                          local_13c.min.x = 0.0;
                          this_ptr->collision_actor = actor;
                          local_144 = fVar3;
                        }
                      }
                    }
                  }
                  else {
                    dStack_270 = SQRT((double)fVar4) - (double)fVar6;
                    if (-0.001 < dStack_270) {
                      dStack_270 = -0.001;
                    }
                    if ((float)dStack_270 < local_144) {
                      local_140 = -fVar3;
                      local_13c.min.y = -fVar5;
                      local_13c.min.x = 0.0;
                      this_ptr->collision_actor = actor;
                      local_144 = (float)dStack_270;
                    }
                  }
                }
              }
              else {
                if (bounding_box_type != 3) goto LAB_00573d6f;
                CStack_60.x = local_13c.min.z;
                CStack_60.z = local_13c.max.x;
                CStack_60.y = (float)pCStack_c4;
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                          (actor,&CStack_78,&CStack_60);
                CStack_6c.x = local_13c.max.y;
                CStack_6c.z = local_13c.max.z;
                CStack_6c.y = 0.0;
                core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (actor,aCStack_54,&CStack_6c);
                core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                          ((SCapsuleCollision *)auStack_1a0,CStack_78.x,CStack_78.z,aCStack_54[0].x,
                           aCStack_54[0].z,radius,
                           (void *)((float)user_data1 - (actor->location).position.y),
                           (void *)((float)user_data2 - (actor->location).position.y));
                auStack_1a0._0_4_ = local_144;
                (*((actor->vtable)._ub)->customIntersectCylinderXZ)
                          (actor,(SIntersectXZCylinder *)auStack_1a0);
                if ((float)auStack_1a0._8_4_ < local_13c.min.x) {
                  local_13c.min.x = (float)auStack_1a0._8_4_;
                  in_stack_fffffd64 = (SIntersectXZCylinder *)(auStack_1a0 + 0xc);
                  in_stack_fffffd60 = (SIntersectXZCylinder *)((int)(aCStack_54 + 1) + 8);
                  pCVar11 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                      (actor,(CVector3f *)in_stack_fffffd60,
                                       (CVector3f *)in_stack_fffffd64);
                  if ((CVector3f *)&local_13c.min.y != pCVar11) {
                    local_13c.min.y = pCVar11->x;
                    local_13c.min.z = pCVar11->y;
                    local_13c.max.x = pCVar11->z;
                  }
                  this_ptr->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                      (pCStack_c4);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 0x389;
                core_main_c_displayErrorAndQuit_FUN_00506f10("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
              }
              core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                        ((SCapsuleCollision *)&SStack_1fc,
                         local_13c.min.z - (actor->location).position.x,
                         local_13c.max.x - (actor->location).position.z,local_13c.max.y,
                         local_13c.max.z,radius,
                         (void *)((float)user_data1 - (actor->location).position.y),
                         (void *)((float)user_data2 - (actor->location).position.y));
              SStack_1fc.max_distance = local_144;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                        (this_ptr_00,0,&SStack_1fc,(CVector3f *)&actor->orient);
              if (SStack_1fc.max_distance < local_144) {
                if (&local_140 != &SStack_1fc.push_z) {
                  local_140 = SStack_1fc.push_z;
                  local_13c.min.x = (float)SStack_1fc.flags;
                  local_13c.min.y = SStack_1fc.push_x;
                }
                this_ptr->collision_actor = actor;
                local_144 = SStack_1fc.max_distance;
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
    fVar1 = SQRT(local_140 * local_140 + local_144 * local_144 + local_148 * local_148);
    if (0.0 < fVar1) {
      fVar1 = 1.0 / fVar1;
      local_148 = local_148 * fVar1;
      local_144 = local_144 * fVar1;
      local_140 = local_140 * fVar1;
    }
    else {
      local_144 = 0.0;
      local_148 = 0.0;
      local_140 = 0.0;
    }
    if (&this_ptr->collision_normal != (CVector3f *)&local_148) {
      (this_ptr->collision_normal).x = local_148;
      (this_ptr->collision_normal).y = local_144;
      (this_ptr->collision_normal).z = local_140;
      return (float)local_14c;
    }
  }
  return (float)local_14c;
}
