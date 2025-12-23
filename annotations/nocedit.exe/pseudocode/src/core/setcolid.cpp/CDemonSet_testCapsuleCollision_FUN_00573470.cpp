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
  CDemonActor *actor;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint bounding_box_type;
  CBoundingBox3D *pCVar8;
  int iVar9;
  CKeyFramedModel *this_ptr_00;
  BADSPACEBASE *in_ESP;
  CDemonActor *cylinder1;
  SIntersectXZCylinder *cylinder2;
  double dStack_278;
  byte auStack_1fc [4];
  byte auStack_1f8 [88];
  byte auStack_1a0 [4];
  byte auStack_19c [84];
  float local_148;
  CBoundingBox3D local_144;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  byte local_f0 [8];
  byte local_e8 [36];
  float fStack_c4;
  byte auStack_b0 [28];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f CStack_80;
  byte auStack_70 [12];
  CKeyFramedModelInstance *pCStack_64;
  float fStack_60;
  byte auStack_58 [12];
  float fStack_4c;
  CDemonSet *local_14;
  int iVar10;
  
  core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
            ((SCapsuleCollision *)(auStack_19c + 0x50),start_x,start_z,dir_x,dir_z,radius,user_data1
             ,user_data2);
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
              (&g_CDemonRaytraceInstance,(SCapsuleCollision *)(auStack_19c + 0x50));
  }
  this_ptr->ground_type = 1;
  this_ptr->field11_0x14d148 = -1;
  this_ptr->field12_0x14d14c = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    local_94 = local_144.max.x - local_128;
    local_88 = local_144.max.x + local_128;
    if (local_144.max.z <= 0.0) {
      local_94 = local_94 + local_144.max.z;
    }
    else {
      local_88 = local_88 + local_144.max.z;
    }
    local_90 = fStack_120;
    local_8c = local_144.max.y - local_128;
    CStack_80.x = local_144.max.y + local_128;
    local_84 = local_124;
    if (local_12c <= 0.0) {
      local_8c = local_8c + local_12c;
    }
    else {
      CStack_80.x = CStack_80.x + local_12c;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(local_f0 + 4));
    local_f0._4_4_ = this_ptr->ray_type;
    local_e8._0_4_ = this_ptr->field60_0x15f684;
    local_e8._4_4_ = this_ptr->field61_0x15f688;
    local_e8._8_4_ = this_ptr->field62_0x15f68c;
    local_e8._12_4_ = this_ptr->field63_0x15f690;
    iVar10 = 0;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      local_14 = this_ptr;
      do {
        actor = *(CDemonActor **)(local_14->field19_0x14f0a0 + 0x7d0c);
        fVar7 = (float)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        if (fVar7 == 0.0) {
          cylinder2 = (SIntersectXZCylinder *)local_e8;
          cylinder1 = actor;
          local_e8._32_4_ = fVar7;
          fStack_c4 = fVar7;
          bounding_box_type = (*actor->vtable->hasCollision)(actor,(SCollisionInfo *)cylinder2);
          if (bounding_box_type != 0) {
            pCVar8 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                               (actor,(CBoundingBox3D *)auStack_b0,(SCollisionInfo *)local_f0,
                                bounding_box_type);
            iVar9 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                              ((CBoundingBox3D *)(auStack_b0 + 0x14),pCVar8);
            if (iVar9 != 0) {
              if ((CKeyFramedModelInstance *)local_e8._28_4_ == (CKeyFramedModelInstance *)0x0) {
                if (bounding_box_type < 2) {
                  if (bounding_box_type == 1) {
                    pCVar8 = (*actor->vtable->getBoundingBox)
                                       (actor,(CBoundingBox3D *)(local_e8 + 0x20));
                    iVar9 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                      (this_ptr,&local_144,(CMatrix3x3f *)pCVar8,
                                       (SIntersectXZCylinder *)cylinder1,cylinder2);
                    if (iVar9 != 0) {
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
                  local_e8._12_4_ = (float)local_e8._12_4_ + (actor->location).position.y;
                  local_e8._16_4_ = (float)local_e8._16_4_ + (actor->location).position.y;
                  fVar7 = (actor->location).position.x;
                  fVar1 = (actor->location).position.z;
                  if (((float)local_e8._12_4_ < local_128) && (local_124 < (float)local_e8._16_4_))
                  {
                    fVar2 = fVar7 - local_144.min.z;
                    fVar4 = fVar1 - local_144.max.x;
                    fVar5 = (float)local_e8._20_4_ + local_12c;
                    fVar6 = fVar5 * fVar5;
                    fVar3 = fVar4 * fVar4 + fVar2 * fVar2;
                    if (fVar6 <= fVar3) {
                      fVar2 = fVar4 * fStack_114 + fVar2 * fStack_118;
                      if (0.0 < fVar2) {
                        fVar5 = fStack_118 * fVar2 + local_144.min.z;
                        fVar3 = fVar7 - fVar5;
                        fVar4 = fStack_114 * fVar2 + local_144.max.x;
                        fVar2 = fVar1 - fVar4;
                        fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
                        if (fVar2 < fVar6) {
                          fVar2 = SQRT(fVar6 - fVar2);
                          fVar5 = fVar5 - fStack_118 * fVar2;
                          fVar4 = fVar4 - fStack_114 * fVar2;
                          if (ABS(local_144.max.y) <= ABS(local_144.max.z)) {
                            fVar2 = (fVar4 - local_144.max.x) / local_144.max.z;
                          }
                          else {
                            fVar2 = (fVar5 - local_144.min.z) / local_144.max.y;
                          }
                          if (((0.0 <= fVar2) && (fVar2 < (float)auStack_19c._80_4_)) &&
                             (fVar2 <= 1.0)) {
                            local_148 = fVar5 - fVar7;
                            local_144.min.y = fVar4 - fVar1;
                            local_144.min.x = 0.0;
                            this_ptr->collision_actor = actor;
                            auStack_19c._80_4_ = fVar2;
                          }
                        }
                      }
                    }
                    else {
                      dStack_278 = SQRT((double)fVar3) - (double)fVar5;
                      if (-0.001 < dStack_278) {
                        dStack_278 = -0.001;
                      }
                      if ((float)dStack_278 < (float)auStack_19c._80_4_) {
                        local_148 = -fVar2;
                        local_144.min.y = -fVar4;
                        local_144.min.x = 0.0;
                        this_ptr->collision_actor = actor;
                        auStack_19c._80_4_ = (float)dStack_278;
                      }
                    }
                  }
                }
                else {
                  if (bounding_box_type != 3) goto LAB_00573d6f;
                  auStack_70._8_4_ = local_144.min.z;
                  fStack_60 = local_144.max.x;
                  pCStack_64 = (CKeyFramedModelInstance *)local_e8._28_4_;
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (actor,&CStack_80,(CVector3f *)(auStack_70 + 8));
                  auStack_70._0_4_ = local_144.max.z;
                  auStack_70._8_4_ = local_12c;
                  auStack_70._4_4_ = 0.0;
                  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                            (actor,(CVector3f *)auStack_58,(CVector3f *)auStack_70);
                  core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                            ((SCapsuleCollision *)auStack_1a0,CStack_80.z,(float)auStack_70._0_4_,
                             (float)auStack_58._4_4_,fStack_4c,radius,
                             (void *)((float)user_data1 - (actor->location).position.y),
                             (void *)((float)user_data2 - (actor->location).position.y));
                  auStack_19c._0_4_ = local_144.min.y;
                  (*actor->vtable->customIntersectCylinderXZ)
                            (actor,(SIntersectXZCylinder *)auStack_19c);
                  if ((float)auStack_1f8._80_4_ < (float)auStack_19c._80_4_) {
                    auStack_19c._80_4_ = auStack_1f8._80_4_;
                    pCVar8 = (CBoundingBox3D *)
                             core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                       (actor,(CVector3f *)(auStack_58 + 8),
                                        (CVector3f *)(auStack_1f8 + 0x54));
                    if (&local_144 != pCVar8) {
                      local_144.min.x = (pCVar8->min).x;
                      local_144.min.y = (pCVar8->min).y;
                      local_144.min.z = (pCVar8->min).z;
                    }
                    this_ptr->collision_actor = actor;
                  }
                }
              }
              else {
                this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                        ((CKeyFramedModelInstance *)local_e8._28_4_);
                if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                  g_CurrentFilename = "..\\core\\setcolid.cpp";
                  g_CurrentLineNumber = 0x389;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
                }
                core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                          ((SCapsuleCollision *)auStack_1fc,
                           local_144.max.y - (actor->location).position.x,
                           local_144.max.z - (actor->location).position.z,local_12c,local_128,radius
                           ,(void *)((float)user_data1 - (actor->location).position.y),
                           (void *)((float)user_data2 - (actor->location).position.y));
                auStack_1f8._0_4_ = local_144.min.y;
                core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                          (this_ptr_00,0,(SIntersectXZCylinder *)auStack_1f8,
                           (CVector3f *)&actor->orient);
                if ((float)auStack_1f8._4_4_ < local_144.min.z) {
                  local_144.min.z = (float)auStack_1f8._4_4_;
                  if (&local_144.max != (CVector3f *)(auStack_1f8 + 8)) {
                    local_144.max.x = (float)auStack_1f8._8_4_;
                    local_144.max.y = (float)auStack_1f8._12_4_;
                    local_144.max.z = (float)auStack_1f8._16_4_;
                  }
                  this_ptr->collision_actor = actor;
                }
              }
            }
          }
        }
        local_14 = (CDemonSet *)local_14->cameras;
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
  }
  if (local_148 <= 1.0) {
    fVar7 = SQRT(local_144.min.z * local_144.min.z +
                 local_144.min.y * local_144.min.y + local_144.min.x * local_144.min.x);
    if (0.0 < fVar7) {
      fVar7 = 1.0 / fVar7;
      local_144.min.x = local_144.min.x * fVar7;
      local_144.min.y = local_144.min.y * fVar7;
      local_144.min.z = local_144.min.z * fVar7;
    }
    else {
      local_144.min.y = 0.0;
      local_144.min.x = 0.0;
      local_144.min.z = 0.0;
    }
    if ((CBoundingBox3D *)&this_ptr->collision_normal != &local_144) {
      (this_ptr->collision_normal).x = local_144.min.x;
      (this_ptr->collision_normal).y = local_144.min.y;
      (this_ptr->collision_normal).z = local_144.min.z;
      return local_148;
    }
  }
  return local_148;
}
