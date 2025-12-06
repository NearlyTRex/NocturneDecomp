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
  void *pvVar13;
  uint bounding_box_type;
  CBoundingBox3D *pCVar14;
  int iVar15;
  CKeyFramedModel *this_ptr_00;
  CVector3f *pCVar16;
  BADSPACEBASE *in_ESP;
  double in_stack_fffffd88;
  SIntersectXZCylinder *cylinder1;
  double in_stack_fffffd90;
  double dStack_250;
  byte auStack_1d4 [4];
  byte auStack_1d0 [92];
  byte auStack_174 [40];
  byte local_14c [8];
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  void *local_128;
  void *local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  byte auStack_110 [24];
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  byte local_e8 [8];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  SCollisionInfo local_d0;
  CKeyFramedModelInstance *pCStack_a4;
  byte auStack_a0 [20];
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  CBoundingBox3D CStack_74;
  CVector3f CStack_58;
  byte auStack_48 [12];
  CKeyFramedModelInstance *pCStack_3c;
  float fStack_38;
  CVector3f CStack_30;
  float fStack_24;
  CDemonSet *pCVar17;
  int iVar18;
  
  core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
            ((SCapsuleCollision *)local_14c,start_x,start_z,dir_x,dir_z,radius,user_data1,user_data2
            );
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
              (&g_CDemonRaytraceInstance,(SCapsuleCollision *)(local_14c + 4));
  }
  this_ptr->ground_type = 1;
  this_ptr->field11_0x14d148 = -1;
  this_ptr->field12_0x14d14c = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    auStack_a0._16_4_ = local_134 - (float)local_124;
    local_84 = local_134 + (float)local_124;
    if (local_12c <= 0.0) {
      auStack_a0._16_4_ = (float)auStack_a0._16_4_ + local_12c;
    }
    else {
      local_84 = local_84 + local_12c;
    }
    local_8c = fStack_11c;
    local_88 = local_130 - (float)local_124;
    fStack_7c = local_130 + (float)local_124;
    fStack_80 = fStack_120;
    if ((float)local_128 <= 0.0) {
      local_88 = local_88 + (float)local_128;
    }
    else {
      fStack_7c = fStack_7c + (float)local_128;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)local_e8);
    local_e8._0_4_ = this_ptr->ray_type;
    local_e8._4_4_ = this_ptr->field60_0x15f684;
    local_e0 = this_ptr->field61_0x15f688;
    fStack_dc = this_ptr->field62_0x15f68c;
    fStack_d8 = this_ptr->field63_0x15f690;
    iVar18 = 0;
    pCVar17 = this_ptr;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      do {
        actor = *(CDemonActor **)(pCVar17->field19_0x14f0a0 + 0x7d0c);
        pvVar13 = (void *)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        if ((pvVar13 == (void *)0x0) &&
           (local_d0.field3_0xc = (float)pvVar13, local_d0.field4_0x10 = (float)pvVar13,
           bounding_box_type =
                (*actor->vtable->hasCollision)(actor,(SCollisionInfo *)(local_e8 + 4)),
           bounding_box_type != 0)) {
          pCVar14 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                              (actor,(CBoundingBox3D *)(auStack_a0 + 0x10),&local_d0,
                               bounding_box_type);
          iVar15 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&CStack_74,pCVar14);
          cylinder1 = (SIntersectXZCylinder *)((ulonglong)in_stack_fffffd88 >> 0x20);
          if (iVar15 != 0) {
            if (pCStack_a4 == (CKeyFramedModelInstance *)0x0) {
              if (bounding_box_type < 2) {
                if (bounding_box_type == 1) {
                  pCVar14 = (*actor->vtable->getBoundingBox)(actor,(CBoundingBox3D *)auStack_a0);
                  in_stack_fffffd88 = (double)CONCAT44 /* combine 2-byte values */(cylinder1,pCVar14);
                  iVar15 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                     (this_ptr,(CBoundingBox3D *)auStack_110,(CMatrix3x3f *)pCVar14,
                                      cylinder1,SUB84 /* extract 2-byte value */(in_stack_fffffd90,0));
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
                local_d0.cylinder_radius = local_d0.cylinder_radius + (actor->location).position.y;
                local_d0.result_ptr =
                     (void *)((float)local_d0.result_ptr + (actor->location).position.y);
                fVar3 = (actor->location).position.x;
                fVar4 = (actor->location).position.z;
                if ((local_d0.cylinder_radius < (float)auStack_110._16_4_) &&
                   ((float)auStack_110._20_4_ < (float)local_d0.result_ptr)) {
                  fVar5 = fVar3 - fStack_114;
                  fVar7 = fVar4 - (float)auStack_110._0_4_;
                  fVar8 = (float)local_d0.field9_0x24 + (float)auStack_110._12_4_;
                  fVar9 = fVar8 * fVar8;
                  fVar6 = fVar7 * fVar7 + fVar5 * fVar5;
                  in_stack_fffffd88 = (double)fVar9;
                  if (fVar9 <= fVar6) {
                    dVar1 = (double)local_f0;
                    dVar2 = (double)local_ec;
                    dVar10 = (double)fVar7 * dVar2 + (double)fVar5 * dVar1;
                    if (0.0 < dVar10) {
                      in_stack_fffffd90 = (double)fStack_114;
                      dVar11 = dVar1 * dVar10 + in_stack_fffffd90;
                      fVar5 = fVar3 - (float)dVar11;
                      dVar10 = dVar2 * dVar10 + (double)(float)auStack_110._0_4_;
                      fVar6 = fVar4 - (float)dVar10;
                      fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
                      if (fVar5 < fVar9) {
                        dVar12 = SQRT(in_stack_fffffd88 - (double)fVar5);
                        dVar11 = dVar11 - dVar1 * dVar12;
                        dVar10 = dVar10 - dVar2 * dVar12;
                        if (ABS((float)auStack_110._4_4_) <= ABS((float)auStack_110._8_4_)) {
                          dVar1 = (dVar10 - (double)(float)auStack_110._0_4_) /
                                  (double)(float)auStack_110._8_4_;
                        }
                        else {
                          dVar1 = (dVar11 - in_stack_fffffd90) / (double)(float)auStack_110._4_4_;
                        }
                        if (((0.0 <= dVar1) && ((float)dVar1 < (float)local_124)) && (dVar1 <= 1.0))
                        {
                          local_124 = (void *)(float)dVar1;
                          fStack_120 = (float)dVar11 - fVar3;
                          fStack_118 = (float)dVar10 - fVar4;
                          fStack_11c = 0.0;
                          this_ptr->collision_actor = actor;
                        }
                      }
                    }
                  }
                  else {
                    dStack_250 = SQRT((double)fVar6) - (double)fVar8;
                    if (-0.001 < dStack_250) {
                      dStack_250 = -0.001;
                    }
                    if ((float)dStack_250 < (float)local_124) {
                      local_124 = (void *)(float)dStack_250;
                      fStack_120 = -fVar5;
                      fStack_118 = -fVar7;
                      fStack_11c = 0.0;
                      this_ptr->collision_actor = actor;
                    }
                  }
                }
              }
              else {
                if (bounding_box_type != 3) goto LAB_00573d6f;
                auStack_48._8_4_ = fStack_114;
                fStack_38 = (float)auStack_110._0_4_;
                pCStack_3c = pCStack_a4;
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                          (actor,&CStack_58,(CVector3f *)(auStack_48 + 8));
                auStack_48._0_4_ = auStack_110._8_4_;
                auStack_48._8_4_ = auStack_110._12_4_;
                auStack_48._4_4_ = 0.0;
                core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (actor,&CStack_30,(CVector3f *)auStack_48);
                core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                          ((SCapsuleCollision *)(auStack_1d0 + 0x58),CStack_58.z,
                           (float)auStack_48._0_4_,CStack_30.y,fStack_24,radius,
                           (void *)((float)user_data1 - (actor->location).position.y),
                           (void *)((float)user_data2 - (actor->location).position.y));
                auStack_174._0_4_ = fStack_118;
                in_stack_fffffd88 = (double)CONCAT44 /* combine 2-byte values */(cylinder1,(SIntersectXZCylinder *)auStack_174);
                (*actor->vtable->customIntersectCylinderXZ)
                          (actor,(SIntersectXZCylinder *)auStack_174);
                if ((float)auStack_174._20_4_ < (float)auStack_110._12_4_) {
                  auStack_110._12_4_ = auStack_174._20_4_;
                  in_stack_fffffd90 = (double)CONCAT44 /* combine 2-byte values */(actor,0x573d18);
                  pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                      (actor,(CVector3f *)&stack0xfffffff8,
                                       (CVector3f *)(auStack_174 + 0x18));
                  if ((CVector3f *)(auStack_110 + 0x14) != pCVar16) {
                    auStack_110._20_4_ = pCVar16->x;
                    fStack_f8 = pCVar16->y;
                    fStack_f4 = pCVar16->z;
                  }
                  this_ptr->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                      (pCStack_a4);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 0x389;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
              }
              core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                        ((SCapsuleCollision *)auStack_1d4,
                         (float)auStack_110._4_4_ - (actor->location).position.x,
                         (float)auStack_110._8_4_ - (actor->location).position.z,
                         (float)auStack_110._12_4_,(float)auStack_110._16_4_,radius,
                         (void *)((float)user_data1 - (actor->location).position.y),
                         (void *)((float)user_data2 - (actor->location).position.y));
              auStack_1d0._0_4_ = fStack_118;
              in_stack_fffffd88 = (double)CONCAT44 /* combine 2-byte values */(cylinder1,&actor->orient);
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                        (this_ptr_00,0,(SIntersectXZCylinder *)auStack_1d0,
                         (CVector3f *)&actor->orient);
              if ((float)auStack_1d0._4_4_ < fStack_114) {
                fStack_114 = (float)auStack_1d0._4_4_;
                if (auStack_110 != auStack_1d0 + 8) {
                  auStack_110._0_4_ = auStack_1d0._8_4_;
                  auStack_110._4_4_ = auStack_1d0._12_4_;
                  auStack_110._8_4_ = auStack_1d0._16_4_;
                }
                this_ptr->collision_actor = actor;
              }
            }
          }
        }
        iVar18 = iVar18 + 1;
        pCVar17 = (CDemonSet *)pCVar17->cameras;
      } while (iVar18 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
  }
  if (local_144 <= 1.0) {
    fVar3 = SQRT(local_138 * local_138 + local_13c * local_13c + local_140 * local_140);
    if (0.0 < fVar3) {
      fVar3 = 1.0 / fVar3;
      local_140 = local_140 * fVar3;
      local_13c = local_13c * fVar3;
      local_138 = local_138 * fVar3;
    }
    else {
      local_13c = 0.0;
      local_140 = 0.0;
      local_138 = 0.0;
    }
    if (&this_ptr->collision_normal != (CVector3f *)&local_140) {
      (this_ptr->collision_normal).x = local_140;
      (this_ptr->collision_normal).y = local_13c;
      (this_ptr->collision_normal).z = local_138;
      return local_144;
    }
  }
  return local_144;
}
