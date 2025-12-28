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
  double dVar3;
  CDemonActor *actor;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  void *pvVar13;
  uint bounding_box_type;
  CBoundingBox3D *pCVar14;
  int iVar15;
  CKeyFramedModel *this_ptr_00;
  CVector3f *pCVar16;
  BADSPACEBASE *in_ESP;
  SIntersectXZCylinder *cylinder1;
  SIntersectXZCylinder *in_stack_fffffd5c;
  uint uVar17;
  uint uStack_2a0;
  double dStack_284;
  byte auStack_20c [4];
  SIntersectXZCylinder local_208;
  byte auStack_1ac [4];
  byte auStack_1a8 [80];
  float fStack_158;
  float fStack_154;
  byte auStack_150 [4];
  byte local_14c [4];
  byte local_148 [8];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  void *local_12c;
  void *local_128;
  void *local_124;
  float fStack_120;
  byte local_f0 [8];
  float local_e8;
  float local_e4;
  float local_e0;
  CKeyFramedModelInstance *pCStack_d8;
  CBoundingBox3D CStack_d4;
  byte auStack_b0 [24];
  float local_98;
  void *local_94;
  float local_90;
  CVector3f local_8c;
  byte auStack_7c [12];
  CKeyFramedModelInstance *pCStack_70;
  float fStack_6c;
  CVector3f CStack_64;
  float fStack_58;
  CVector3f aCStack_50 [4];
  CDemonSet *local_18;
  int local_14;
  
  core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
            ((SCapsuleCollision *)local_14c,start_x,start_z,dir_x,dir_z,radius,user_data1,user_data2
            );
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
              (&g_CDemonRaytraceInstance,(SCapsuleCollision *)auStack_150);
  }
  this_ptr->ground_type = 1;
  this_ptr->field11_0x14d148 = -1;
  this_ptr->field12_0x14d14c = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    local_98 = local_13c - (float)local_12c;
    local_8c.x = local_13c + (float)local_12c;
    if (local_134 <= 0.0) {
      local_98 = local_98 + local_134;
    }
    else {
      local_8c.x = local_8c.x + local_134;
    }
    local_94 = local_124;
    local_90 = local_138 - (float)local_12c;
    local_8c.z = local_138 + (float)local_12c;
    local_8c.y = (float)local_128;
    if (local_130 <= 0.0) {
      local_90 = local_90 + local_130;
    }
    else {
      local_8c.z = local_8c.z + local_130;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)local_f0);
    local_f0._0_4_ = this_ptr->ray_type;
    local_f0._4_4_ = this_ptr->field60_0x15f684;
    local_e8 = this_ptr->field61_0x15f688;
    local_e4 = this_ptr->field62_0x15f68c;
    local_e0 = this_ptr->field63_0x15f690;
    local_14 = 0;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      local_18 = this_ptr;
      do {
        actor = *(CDemonActor **)(local_18->field19_0x14f0a0 + 0x7d0c);
        pvVar13 = (void *)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        dVar3 = (double)ZEXT48(in_stack_fffffd5c);
        if (pvVar13 == (void *)0x0) {
          cylinder1 = (SIntersectXZCylinder *)(local_f0 + 4);
          CStack_d4.min.z = (float)pvVar13;
          CStack_d4.max.x = (float)pvVar13;
          bounding_box_type = (*actor->vtable->hasCollision)(actor,(SCollisionInfo *)cylinder1);
          dVar3 = (double)ZEXT48(in_stack_fffffd5c);
          if (bounding_box_type != 0) {
            pCVar14 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                                (actor,(CBoundingBox3D *)auStack_b0,(SCollisionInfo *)local_f0,
                                 bounding_box_type);
            iVar15 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                               ((CBoundingBox3D *)(auStack_b0 + 8),pCVar14);
            dVar3 = (double)ZEXT48(in_stack_fffffd5c);
            if (iVar15 != 0) {
              if (pCStack_d8 == (CKeyFramedModelInstance *)0x0) {
                if (bounding_box_type < 2) {
                  if (bounding_box_type == 1) {
                    pCVar14 = (*actor->vtable->getBoundingBox)(actor,&CStack_d4);
                    iVar15 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                       (this_ptr,(CBoundingBox3D *)(local_148 + 4),
                                        (CMatrix3x3f *)pCVar14,cylinder1,in_stack_fffffd5c);
                    dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                    if (iVar15 != 0) {
                      this_ptr->collision_actor = actor;
                      dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                    }
                  }
                  else {
LAB_00573d6f:
                    g_CurrentFilename = "..\\core\\setcolid.cpp";
                    g_CurrentLineNumber = 0x3f1;
                    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid collision type!");
                    dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                  }
                }
                else if (bounding_box_type < 3) {
                  local_e8 = local_e8 + (actor->location).position.y;
                  local_e4 = local_e4 + (actor->location).position.y;
                  fVar4 = (actor->location).position.x;
                  fVar5 = (actor->location).position.z;
                  dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                  if ((local_e8 < local_134) &&
                     (dVar3 = (double)ZEXT48(in_stack_fffffd5c), local_130 < local_e4)) {
                    fVar6 = fVar4 - (float)local_148._0_4_;
                    fVar8 = fVar5 - (float)local_148._4_4_;
                    fVar9 = local_e0 + local_138;
                    fVar10 = fVar9 * fVar9;
                    fVar7 = fVar8 * fVar8 + fVar6 * fVar6;
                    if (fVar10 <= fVar7) {
                      dVar1 = (double)(float)local_124;
                      dVar2 = (double)fStack_120;
                      dVar11 = (double)fVar8 * dVar2 + (double)fVar6 * dVar1;
                      dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                      if (0.0 < dVar11) {
                        dVar3 = (double)(float)local_148._0_4_;
                        uStack_2a0 = (uint)((ulonglong)dVar3 >> 0x20);
                        dVar12 = dVar1 * dVar11 + dVar3;
                        fVar6 = fVar4 - (float)dVar12;
                        dVar11 = dVar2 * dVar11 + (double)(float)local_148._4_4_;
                        fVar7 = fVar5 - (float)dVar11;
                        fVar6 = fVar7 * fVar7 + fVar6 * fVar6;
                        if (fVar6 < fVar10) {
                          dVar3 = SQRT((double)fVar10 - (double)fVar6);
                          dVar12 = dVar12 - dVar1 * dVar3;
                          dVar11 = dVar11 - dVar2 * dVar3;
                          uVar17 = (uint)((ulonglong)dVar12 >> 0x20);
                          if (ABS(local_140) <= ABS(local_13c)) {
                            dVar1 = (dVar11 - (double)(float)local_148._4_4_) / (double)local_13c;
                          }
                          else {
                            dVar1 = (dVar12 - (double)CONCAT44 /* combine 2-byte values */(uStack_2a0,uVar17)) /
                                    (double)local_140;
                          }
                          dVar3 = (double)CONCAT44 /* combine 2-byte values */(uStack_2a0,uVar17);
                          if (((0.0 <= dVar1) &&
                              (dVar3 = (double)CONCAT44 /* combine 2-byte values */(uStack_2a0,uVar17),
                              (float)dVar1 < fStack_158)) &&
                             (dVar3 = (double)CONCAT44 /* combine 2-byte values */(uStack_2a0,uVar17), dVar1 <= 1.0)) {
                            fStack_158 = (float)dVar1;
                            fStack_154 = (float)dVar12 - fVar4;
                            local_14c = (byte  [4])((float)dVar11 - fVar5);
                            auStack_150 = (byte  [4])0x0;
                            this_ptr->collision_actor = actor;
                            dVar3 = (double)CONCAT44 /* combine 2-byte values */(uStack_2a0,uVar17);
                          }
                        }
                      }
                    }
                    else {
                      dStack_284 = SQRT((double)fVar7) - (double)fVar9;
                      if (-0.001 < dStack_284) {
                        dStack_284 = -0.001;
                      }
                      dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                      if ((float)dStack_284 < fStack_158) {
                        fStack_158 = (float)dStack_284;
                        fStack_154 = -fVar6;
                        local_14c = (byte  [4])-fVar8;
                        auStack_150 = (byte  [4])0x0;
                        this_ptr->collision_actor = actor;
                        dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                      }
                    }
                  }
                }
                else {
                  if (bounding_box_type != 3) goto LAB_00573d6f;
                  auStack_7c._8_4_ = local_148._0_4_;
                  fStack_6c = (float)local_148._4_4_;
                  pCStack_70 = pCStack_d8;
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (actor,&local_8c,(CVector3f *)(auStack_7c + 8));
                  auStack_7c._0_4_ = local_13c;
                  auStack_7c._8_4_ = local_138;
                  auStack_7c._4_4_ = 0.0;
                  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                            (actor,&CStack_64,(CVector3f *)auStack_7c);
                  core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                            ((SCapsuleCollision *)auStack_1ac,local_8c.z,(float)auStack_7c._0_4_,
                             CStack_64.y,fStack_58,radius,
                             (void *)((float)user_data1 - (actor->location).position.y),
                             (void *)((float)user_data2 - (actor->location).position.y));
                  auStack_1a8._0_4_ = local_14c;
                  (*actor->vtable->customIntersectCylinderXZ)
                            (actor,(SIntersectXZCylinder *)auStack_1a8);
                  dVar3 = (double)ZEXT48(in_stack_fffffd5c);
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
                    dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                  }
                }
              }
              else {
                this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                        (pCStack_d8);
                if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                  g_CurrentFilename = "..\\core\\setcolid.cpp";
                  g_CurrentLineNumber = 0x389;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
                }
                core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                          ((SCapsuleCollision *)auStack_20c,
                           (float)local_148._4_4_ - (actor->location).position.x,
                           local_140 - (actor->location).position.z,local_13c,local_138,radius,
                           (void *)((float)user_data1 - (actor->location).position.y),
                           (void *)((float)user_data2 - (actor->location).position.y));
                local_208.max_distance = (float)auStack_150;
                core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                          (this_ptr_00,0,&local_208,(CVector3f *)&actor->orient);
                dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                if (local_208.push_z < (float)local_14c) {
                  local_14c = (byte  [4])local_208.push_z;
                  if ((int *)local_148 != &local_208.flags) {
                    local_148._0_4_ = local_208.flags;
                    local_148._4_4_ = local_208.push_x;
                    local_140 = local_208.center_x;
                  }
                  this_ptr->collision_actor = actor;
                  dVar3 = (double)ZEXT48(in_stack_fffffd5c);
                }
              }
            }
          }
        }
        in_stack_fffffd5c = SUB84 /* extract 2-byte value */(dVar3,0);
        local_18 = (CDemonSet *)local_18->cameras;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
  }
  if ((float)local_14c <= 1.0) {
    fVar4 = SQRT(local_140 * local_140 +
                 (float)local_148._4_4_ * (float)local_148._4_4_ +
                 (float)local_148._0_4_ * (float)local_148._0_4_);
    if (0.0 < fVar4) {
      fVar4 = 1.0 / fVar4;
      local_148._0_4_ = (float)local_148._0_4_ * fVar4;
      local_148._4_4_ = (float)local_148._4_4_ * fVar4;
      local_140 = local_140 * fVar4;
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
