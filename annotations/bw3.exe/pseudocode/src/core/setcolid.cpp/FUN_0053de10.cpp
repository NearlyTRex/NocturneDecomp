// Name: core_setcolid.cpp_FUN_0053de10
// Address: 0053de10
// Address Range: [[0053de10, 0053e86c]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_0053de10(CDemonSet *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6,float param_7,undefined4 param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_setcolid_cpp_FUN_0053de10(CDemonSet *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,float param_7,uint param_8)

{
  CDemonActor *actor;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  ECollisionType EVar9;
  CKeyFramedModel *this_ptr;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_108c [859];
  CDemonActor *in_stack_fffffd08;
  CMatrix3x3f *in_stack_fffffd0c;
  double dStack_2a0;
  byte auStack_258 [92];
  byte auStack_1fc [88];
  float local_1a4;
  float local_1a0;
  float local_19c;
  byte local_198 [80];
  float local_148;
  float local_144;
  float local_140;
  int local_13c;
  float fStack_130;
  float local_12c;
  float local_128;
  CKeyFramedModelInstance *pCStack_120;
  uint auStack_114 [6];
  byte auStack_fc [32];
  float local_dc;
  float local_d8;
  CBoundingBox3D local_d4;
  uint auStack_bc [6];
  float fStack_a4;
  float afStack_a0 [3];
  CKeyFramedModelInstance *pCStack_94;
  float fStack_90;
  float fStack_84;
  float afStack_80 [5];
  uint uStack_6c;
  uint uStack_68;
  float fStack_54;
  float afStack_50 [13];
  int local_1c;
  CDemonSet *local_18;
  
  bVar13 = 0;
  core_dtrace_cpp_initIntersectionCylinder_FUN_00474db0
            (auStack_1fc + 0x54,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((param_4 & 0x7fffffff) != 0) || ((param_5 & 0x7fffffff) != 0)) {
    core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80
              (&g_CDemonRaytraceInstance,(SIntersectXZCylinder *)(auStack_1fc + 0x54));
  }
  param_1->ground_type = 1;
  param_1->collision_part_index = -1;
  param_1->collision_bone_index = -1;
  param_1->collision_actor = (CDemonActor *)0x0;
  if (-1 < param_1->ignore_list_count) {
    local_dc = (float)local_198._0_4_ - (float)local_198._16_4_;
    local_d4.min.y = (float)local_198._0_4_ + (float)local_198._16_4_;
    if ((float)local_198._8_4_ <= 0.0) {
      local_dc = local_dc + (float)local_198._8_4_;
    }
    else {
      local_d4.min.y = local_d4.min.y + (float)local_198._8_4_;
    }
    local_d8 = (float)local_198._24_4_;
    local_d4.min.x = (float)local_198._4_4_ - (float)local_198._16_4_;
    local_d4.max.x = (float)local_198._4_4_ + (float)local_198._16_4_;
    local_d4.min.z = (float)local_198._20_4_;
    if ((float)local_198._12_4_ <= 0.0) {
      local_d4.min.x = local_d4.min.x + (float)local_198._12_4_;
    }
    else {
      local_d4.max.x = local_d4.max.x + (float)local_198._12_4_;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)(local_198 + 0x4c));
    local_198._76_4_ = (param_1->ray_query).ray_type;
    local_148 = (float)(param_1->ray_query).laser_type;
    local_144 = (float)(param_1->ray_query).laser_color.r;
    local_140 = (float)(param_1->ray_query).laser_color.g;
    local_13c = (param_1->ray_query).laser_color.b;
    local_1c = 0;
    if (0 < param_1->collidable_actor_count) {
      local_18 = param_1;
      do {
        actor = local_18->collidable_actors[0];
        fVar8 = (float)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_0053d770(param_1,actor);
        if ((fVar8 == 0.0) &&
           (local_12c = fVar8, local_128 = fVar8,
           EVar9 = (*((actor->vtable)._ub)->getCollisionType)
                             (actor,(SCollisionInfo *)(local_198 + 0x4c)),
           EVar9 != COLLISION_TYPE_NONE)) {
          core_actor_cpp_FUN_00408f00(actor,&local_144);
          puVar11 = auStack_bc;
          puVar12 = (uint *)(auStack_fc + 0x10);
          for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
          }
          iVar10 = core_box_cpp_FUN_0041e910(&local_d4,(CBoundingBox3D *)(auStack_fc + 0x10));
          if (iVar10 != 0) {
            if (pCStack_120 == (CKeyFramedModelInstance *)0x0) {
              if (EVar9 < COLLISION_TYPE_CYLINDER) {
                if (EVar9 == COLLISION_TYPE_MESH) {
                  (*((actor->vtable)._ub)->getBoundingBox)(actor,(CBoundingBox3D *)&actor->location)
                  ;
                  puVar11 = auStack_114;
                  puVar12 = (uint *)auStack_fc;
                  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
                    *puVar12 = *puVar11;
                    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
                    puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
                  }
                  iVar10 = core_setcolid_cpp_FUN_0053da90
                                     (param_1,(SIntersectXZCylinder *)local_198,
                                      (CBoundingBox3D *)auStack_fc,(CVector3f *)in_stack_fffffd08,
                                      in_stack_fffffd0c);
                  if (iVar10 != 0) {
                    param_1->collision_actor = actor;
                  }
                }
                else {
LAB_0053e7d7:
                  _DAT_01d71de0 = "..\\core\\setcolid.cpp";
                  _DAT_01d71de4 = 0x3f1;
                  core_main_c_FUN_004e4330();
                }
              }
              else if (EVar9 < COLLISION_TYPE_CUSTOM) {
                fStack_130 = fStack_130 + (actor->location).position.y;
                local_12c = local_12c + (actor->location).position.y;
                fVar8 = (actor->location).position.x;
                fVar1 = (actor->location).position.z;
                if ((fStack_130 < (float)local_198._28_4_) && ((float)local_198._32_4_ < local_12c))
                {
                  fVar2 = fVar8 - (float)local_198._8_4_;
                  fVar4 = fVar1 - (float)local_198._12_4_;
                  fVar5 = local_128 + (float)local_198._24_4_;
                  fVar6 = fVar5 * fVar5;
                  fVar3 = fVar4 * fVar4 + fVar2 * fVar2;
                  if (fVar6 <= fVar3) {
                    fVar2 = fVar4 * (float)local_198._48_4_ + fVar2 * (float)local_198._44_4_;
                    if (0.0 < fVar2) {
                      fVar5 = (float)local_198._44_4_ * fVar2 + (float)local_198._8_4_;
                      fVar3 = fVar8 - fVar5;
                      fVar4 = (float)local_198._48_4_ * fVar2 + (float)local_198._12_4_;
                      fVar2 = fVar1 - fVar4;
                      fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
                      if (fVar2 < fVar6) {
                        fVar2 = SQRT(fVar6 - fVar2);
                        fVar5 = fVar5 - (float)local_198._44_4_ * fVar2;
                        fVar4 = fVar4 - (float)local_198._48_4_ * fVar2;
                        if (ABS((float)local_198._16_4_) <= ABS((float)local_198._20_4_)) {
                          fVar2 = (fVar4 - (float)local_198._12_4_) / (float)local_198._20_4_;
                        }
                        else {
                          fVar2 = (fVar5 - (float)local_198._8_4_) / (float)local_198._16_4_;
                        }
                        if (((0.0 <= fVar2) && (fVar2 < local_1a0)) && (fVar2 <= 1.0)) {
                          local_19c = fVar5 - fVar8;
                          local_198._4_4_ = fVar4 - fVar1;
                          local_198._0_4_ = 0.0;
                          param_1->collision_actor = actor;
                          local_1a0 = fVar2;
                        }
                      }
                    }
                  }
                  else {
                    dStack_2a0 = SQRT((double)fVar3) - (double)fVar5;
                    if (_DAT_005d0b6e < dStack_2a0) {
                      dStack_2a0 = -0.001;
                    }
                    if ((float)dStack_2a0 < local_1a0) {
                      local_19c = -fVar2;
                      local_198._4_4_ = -fVar4;
                      local_198._0_4_ = 0.0;
                      param_1->collision_actor = actor;
                      local_1a0 = (float)dStack_2a0;
                    }
                  }
                }
              }
              else {
                if (EVar9 != COLLISION_TYPE_CUSTOM) goto LAB_0053e7d7;
                afStack_a0[2] = (float)local_198._8_4_;
                fStack_90 = (float)local_198._12_4_;
                pCStack_94 = pCStack_120;
                core_actor_cpp_FUN_00408bf0(actor);
                uVar7 = local_198._20_4_;
                afStack_50[0] = (float)local_198._16_4_;
                fStack_a4 = afStack_80[0];
                afStack_a0[(uint)bVar13 * -2] = afStack_80[(uint)bVar13 * -2 + 1];
                afStack_a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                     afStack_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 2];
                afStack_50[2] = (float)uVar7;
                afStack_50[1] = 0.0;
                core_actor_cpp_FUN_00408b40(actor);
                afStack_80[3] = (float)uStack_68;
                afStack_80[(uint)bVar13 * -2 + 4] = afStack_80[(uint)bVar13 * -2 + 7];
                afStack_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 5] =
                     afStack_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 8];
                core_dtrace_cpp_initIntersectionCylinder_FUN_00474db0
                          (auStack_258,fStack_a4,afStack_a0[1],afStack_80[3],uStack_6c,param_6,
                           param_7 - (actor->location).position.y);
                auStack_258._0_4_ = local_1a0;
                (*((actor->vtable)._ub)->customIntersectCylinderXZ)
                          (actor,(SIntersectXZCylinder *)auStack_258);
                if ((float)auStack_258._8_4_ < (float)local_198._0_4_) {
                  local_198._0_4_ = auStack_258._8_4_;
                  in_stack_fffffd0c = (CMatrix3x3f *)(auStack_258 + 0xc);
                  in_stack_fffffd08 = actor;
                  core_actor_cpp_FUN_00408b00();
                  fStack_54 = fStack_84;
                  afStack_50[(uint)bVar13 * -2] = afStack_80[(uint)bVar13 * -2];
                  afStack_50[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                       afStack_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
                  if ((float *)(local_198 + 4) != afStack_80 + 0xb) {
                    local_198._4_4_ = fStack_54;
                    local_198._8_4_ = afStack_50[0];
                    local_198._12_4_ = afStack_50[1];
                  }
                  param_1->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                                   (pCStack_120);
              if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
                _DAT_01d71de0 = "..\\core\\setcolid.cpp";
                _DAT_01d71de4 = 0x389;
                core_main_c_FUN_004e4330("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
              }
              core_dtrace_cpp_initIntersectionCylinder_FUN_00474db0
                        (auStack_1fc,(float)local_198._8_4_ - (actor->location).position.x,
                         (float)local_198._12_4_ - (actor->location).position.z,local_198._16_4_,
                         local_198._20_4_,param_6,param_7 - (actor->location).position.y);
              auStack_1fc._0_4_ = local_1a0;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00
                        (this_ptr,0,(SIntersectXZCylinder *)auStack_1fc,&(actor->orient).vec);
              if ((float)auStack_1fc._0_4_ < local_1a0) {
                if (&local_19c != (float *)(auStack_1fc + 4)) {
                  local_19c = (float)auStack_1fc._4_4_;
                  local_198._0_4_ = auStack_1fc._8_4_;
                  local_198._4_4_ = auStack_1fc._12_4_;
                }
                param_1->collision_actor = actor;
                local_1a0 = (float)auStack_1fc._0_4_;
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        local_1c = local_1c + 1;
      } while (local_1c < param_1->collidable_actor_count);
    }
  }
  if ((float)auStack_1fc._84_4_ <= 1.0) {
    fVar8 = SQRT(local_19c * local_19c + local_1a0 * local_1a0 + local_1a4 * local_1a4);
    if (0.0 < fVar8) {
      fVar8 = 1.0 / fVar8;
      local_1a4 = local_1a4 * fVar8;
      local_1a0 = local_1a0 * fVar8;
      local_19c = local_19c * fVar8;
    }
    else {
      local_1a0 = 0.0;
      local_1a4 = 0.0;
      local_19c = 0.0;
    }
    if (&param_1->collision_normal != (CVector3f *)&local_1a4) {
      (param_1->collision_normal).x = local_1a4;
      (param_1->collision_normal).y = local_1a0;
      (param_1->collision_normal).z = local_19c;
      return (float)auStack_1fc._84_4_;
    }
  }
  return (float)auStack_1fc._84_4_;
}
