// Name: core_setcolid.cpp_FUN_00537030
// Address: 00537030
// Address Range: [[00537030, 00537a8c]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_00537030(CDemonSet *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6,float param_7,undefined4 param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_setcolid_cpp_FUN_00537030(CDemonSet *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,float param_7,uint param_8)

{
  CDemonActor *actor;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ECollisionType EVar8;
  CKeyFramedModel *this_ptr;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_108c [859];
  CDemonActor *in_stack_fffffd08;
  CMatrix3x3f *in_stack_fffffd0c;
  double dStack_2a0;
  float afStack_258 [2];
  float fStack_250;
  CMatrix3x3f aCStack_24c [2];
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_16c;
  float fStack_168;
  byte local_14c [32];
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
  
  bVar12 = 0;
  core_dtrace_cpp_initIntersectionCylinder_FUN_00473d40
            (&local_1a8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((param_4 & 0x7fffffff) != 0) || ((param_5 & 0x7fffffff) != 0)) {
    core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10
              (&g_CDemonRaytraceInstance,(SIntersectXZCylinder *)&local_1a8);
  }
  param_1->ground_type = 1;
  param_1->collision_part_index = -1;
  param_1->collision_bone_index = -1;
  param_1->collision_actor = (CDemonActor *)0x0;
  if (-1 < param_1->ignore_list_count) {
    local_dc = local_198 - local_188;
    local_d4.min.y = local_198 + local_188;
    if (local_190 <= 0.0) {
      local_dc = local_dc + local_190;
    }
    else {
      local_d4.min.y = local_d4.min.y + local_190;
    }
    local_d8 = local_180;
    local_d4.min.x = local_194 - local_188;
    local_d4.max.x = local_194 + local_188;
    local_d4.min.z = local_184;
    if (local_18c <= 0.0) {
      local_d4.min.x = local_d4.min.x + local_18c;
    }
    else {
      local_d4.max.x = local_d4.max.x + local_18c;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)local_14c);
    local_14c[0] = param_1->ray_query;
    local_14c._1_3_ = *(undefined3 *)&param_1->field_0x15f695;
    local_14c._4_4_ = *(uint *)&param_1->field_0x15f698;
    local_14c._8_4_ = *(uint *)&param_1->field_0x15f69c;
    local_14c._12_4_ = *(uint *)&param_1->field_0x15f6a0;
    local_14c._16_4_ = *(uint *)&param_1->field_0x15f6a4;
    local_1c = 0;
    if (0 < param_1->collidable_actor_count) {
      local_18 = param_1;
      do {
        actor = local_18->collidable_actors[0];
        fVar7 = (float)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00536990(param_1,actor);
        if ((fVar7 == 0.0) &&
           (local_12c = fVar7, local_128 = fVar7,
           EVar8 = (*((actor->vtable)._ub)->getCollisionType)(actor,(SCollisionInfo *)local_14c),
           EVar8 != COLLISION_TYPE_NONE)) {
          core_actor_cpp_FUN_004090f0(actor,local_14c + 8);
          puVar10 = auStack_bc;
          puVar11 = (uint *)(auStack_fc + 0x10);
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
          }
          iVar9 = core_box_cpp_FUN_0041b660(&local_d4,(CBoundingBox3D *)(auStack_fc + 0x10));
          if (iVar9 != 0) {
            if (pCStack_120 == (CKeyFramedModelInstance *)0x0) {
              if (EVar8 < COLLISION_TYPE_CYLINDER) {
                if (EVar8 == COLLISION_TYPE_MESH) {
                  (*((actor->vtable)._ub)->getBoundingBox)
                            (actor,(CBoundingBox3D *)&actor->field_0x20);
                  puVar10 = auStack_114;
                  puVar11 = (uint *)auStack_fc;
                  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar11 = *puVar10;
                    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
                    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
                  }
                  iVar9 = core_setcolid_cpp_FUN_00536cb0
                                    (param_1,(SIntersectXZCylinder *)&local_198,
                                     (CBoundingBox3D *)auStack_fc,(CVector3f *)in_stack_fffffd08,
                                     in_stack_fffffd0c);
                  if (iVar9 != 0) {
                    param_1->collision_actor = actor;
                  }
                }
                else {
LAB_005379f7:
                  _DAT_01d046a0 = "..\\core\\setcolid.cpp";
                  _DAT_01d046a4 = 0x3f1;
                  core_main_c_FUN_004e4500();
                }
              }
              else if (EVar8 < COLLISION_TYPE_CUSTOM) {
                local_14c._28_4_ = (float)local_14c._28_4_ + *(float *)&actor->field_0x24;
                local_12c = local_12c + *(float *)&actor->field_0x24;
                fVar7 = *(float *)&actor->field_0x20;
                fVar1 = *(float *)&actor->field_0x28;
                if (((float)local_14c._28_4_ < fStack_17c) && (fStack_178 < local_12c)) {
                  fVar2 = fVar7 - local_190;
                  fVar4 = fVar1 - local_18c;
                  fVar5 = local_128 + local_180;
                  fVar6 = fVar5 * fVar5;
                  fVar3 = fVar4 * fVar4 + fVar2 * fVar2;
                  if (fVar6 <= fVar3) {
                    fVar2 = fVar4 * fStack_168 + fVar2 * fStack_16c;
                    if (0.0 < fVar2) {
                      fVar5 = fStack_16c * fVar2 + local_190;
                      fVar3 = fVar7 - fVar5;
                      fVar4 = fStack_168 * fVar2 + local_18c;
                      fVar2 = fVar1 - fVar4;
                      fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
                      if (fVar2 < fVar6) {
                        fVar2 = SQRT(fVar6 - fVar2);
                        fVar5 = fVar5 - fStack_16c * fVar2;
                        fVar4 = fVar4 - fStack_168 * fVar2;
                        if (ABS(local_188) <= ABS(local_184)) {
                          fVar2 = (fVar4 - local_18c) / local_184;
                        }
                        else {
                          fVar2 = (fVar5 - local_190) / local_188;
                        }
                        if (((0.0 <= fVar2) && (fVar2 < local_1a0)) && (fVar2 <= 1.0)) {
                          local_19c = fVar5 - fVar7;
                          local_194 = fVar4 - fVar1;
                          local_198 = 0.0;
                          param_1->collision_actor = actor;
                          local_1a0 = fVar2;
                        }
                      }
                    }
                  }
                  else {
                    dStack_2a0 = SQRT((double)fVar3) - (double)fVar5;
                    if (_DAT_005e5e55 < dStack_2a0) {
                      dStack_2a0 = -0.001;
                    }
                    if ((float)dStack_2a0 < local_1a0) {
                      local_19c = -fVar2;
                      local_194 = -fVar4;
                      local_198 = 0.0;
                      param_1->collision_actor = actor;
                      local_1a0 = (float)dStack_2a0;
                    }
                  }
                }
              }
              else {
                if (EVar8 != COLLISION_TYPE_CUSTOM) goto LAB_005379f7;
                afStack_a0[2] = local_190;
                fStack_90 = local_18c;
                pCStack_94 = pCStack_120;
                core_actor_cpp_FUN_00408de0(actor);
                fVar7 = local_184;
                afStack_50[0] = local_188;
                fStack_a4 = afStack_80[0];
                afStack_a0[(uint)bVar12 * -2] = afStack_80[(uint)bVar12 * -2 + 1];
                afStack_a0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                     afStack_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 2];
                afStack_50[2] = fVar7;
                afStack_50[1] = 0.0;
                core_actor_cpp_FUN_00408d30(actor);
                afStack_80[3] = (float)uStack_68;
                afStack_80[(uint)bVar12 * -2 + 4] = afStack_80[(uint)bVar12 * -2 + 7];
                afStack_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5] =
                     afStack_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 8];
                core_dtrace_cpp_initIntersectionCylinder_FUN_00473d40
                          (afStack_258,fStack_a4,afStack_a0[1],afStack_80[3],uStack_6c,param_6,
                           param_7 - *(float *)&actor->field_0x24);
                afStack_258[0] = local_1a0;
                (*((actor->vtable)._ub)->customIntersectCylinderXZ)
                          (actor,(SIntersectXZCylinder *)afStack_258);
                if (fStack_250 < local_198) {
                  local_198 = fStack_250;
                  in_stack_fffffd0c = aCStack_24c;
                  in_stack_fffffd08 = actor;
                  core_actor_cpp_FUN_00408cf0();
                  fStack_54 = fStack_84;
                  afStack_50[(uint)bVar12 * -2] = afStack_80[(uint)bVar12 * -2];
                  afStack_50[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                       afStack_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
                  if (&local_194 != afStack_80 + 0xb) {
                    local_194 = fStack_54;
                    local_190 = afStack_50[0];
                    local_18c = afStack_50[1];
                  }
                  param_1->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                                   (pCStack_120);
              if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
                _DAT_01d046a0 = "..\\core\\setcolid.cpp";
                _DAT_01d046a4 = 0x389;
                core_main_c_FUN_004e4500("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
              }
              core_dtrace_cpp_initIntersectionCylinder_FUN_00473d40
                        (&fStack_1fc,local_190 - *(float *)&actor->field_0x20,
                         local_18c - *(float *)&actor->field_0x28,local_188,local_184,param_6,
                         param_7 - *(float *)&actor->field_0x24);
              fStack_1fc = local_1a0;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_0044f580
                        (this_ptr,0,(SIntersectXZCylinder *)&fStack_1fc,&(actor->orient).vec);
              if (fStack_1fc < local_1a0) {
                if (&local_19c != &fStack_1f8) {
                  local_19c = fStack_1f8;
                  local_198 = fStack_1f4;
                  local_194 = fStack_1f0;
                }
                param_1->collision_actor = actor;
                local_1a0 = fStack_1fc;
              }
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        local_1c = local_1c + 1;
      } while (local_1c < param_1->collidable_actor_count);
    }
  }
  if (local_1a8 <= 1.0) {
    fVar7 = SQRT(local_19c * local_19c + local_1a0 * local_1a0 + local_1a4 * local_1a4);
    if (0.0 < fVar7) {
      fVar7 = 1.0 / fVar7;
      local_1a4 = local_1a4 * fVar7;
      local_1a0 = local_1a0 * fVar7;
      local_19c = local_19c * fVar7;
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
      return local_1a8;
    }
  }
  return local_1a8;
}
