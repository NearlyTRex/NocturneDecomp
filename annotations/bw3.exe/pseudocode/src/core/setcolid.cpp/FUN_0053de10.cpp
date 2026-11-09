// Name: core_setcolid.cpp_FUN_0053de10
// Address: 0053de10
// Address Range: [[0053de10, 0053e86c]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_0053de10(CDemonSet *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6,float param_7,float param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_setcolid_cpp_FUN_0053de10(CDemonSet *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,float param_7,float param_8)

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
  CKeyFramedModel *this_ptr;
  int iVar9;
  uint *puVar10;
  CBoundingBox3D *pCVar11;
  byte bVar12;
  float afStackY_1094 [861];
  CVector3f *position;
  CMatrix3x3f *orientation_matrix;
  double dStack_2a8;
  float fStack_260;
  byte auStack_25c [88];
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
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
  float fStack_174;
  float fStack_170;
  byte local_14c [24];
  float fStack_134;
  float fStack_130;
  CKeyFramedModelInstance *local_12c;
  CKeyFramedModelInstance *local_128;
  uint auStack_124 [6];
  CBoundingBox3D CStack_10c;
  CBoundingBox3D CStack_f4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  uint auStack_c4 [6];
  uint uStack_ac;
  float afStack_a8 [3];
  CKeyFramedModelInstance *pCStack_9c;
  float fStack_98;
  float fStack_94;
  float afStack_90 [5];
  uint uStack_7c;
  uint uStack_74;
  uint uStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [15];
  int local_1c;
  CDemonSet *local_18;
  uint uStack_14;
  
  bVar12 = 0;
  core_dtrace_cpp_initIntersectionCylinder_FUN_00474db0
            (&local_1a8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((param_4 & 0x7fffffff) != 0) || ((param_5 & 0x7fffffff) != 0)) {
    core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80
              (&g_CDemonRaytraceInstance,(SIntersectXZCylinder *)&local_1a8);
  }
  *(uint *)&param_1->field_0x14d134 = 1;
  *(uint *)&param_1->field_0x14d148 = 0xffffffff;
  *(uint *)&param_1->field_0x14d14c = 0xffffffff;
  *(uint *)&param_1->field_0x14d144 = 0;
  if (-1 < *(int *)&param_1->field_0x15f6ac) {
    local_dc = local_198 - local_188;
    local_d0 = local_198 + local_188;
    if (local_190 <= 0.0) {
      local_dc = local_dc + local_190;
    }
    else {
      local_d0 = local_d0 + local_190;
    }
    local_d8 = local_180;
    local_d4 = local_194 - local_188;
    local_c8 = local_194 + local_188;
    local_cc = local_184;
    if (local_18c <= 0.0) {
      local_d4 = local_d4 + local_18c;
    }
    else {
      local_c8 = local_c8 + local_18c;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)local_14c);
    local_14c._0_4_ = *(uint *)&param_1->field_0x15f698;
    local_14c._4_4_ = *(uint *)&param_1->field_0x15f69c;
    local_14c._8_4_ = *(uint *)&param_1->field_0x15f6a0;
    local_14c._12_4_ = *(uint *)&param_1->field_0x15f6a4;
    local_14c._16_4_ = *(uint *)&param_1->field_0x15f6a8;
    local_1c = 0;
    if (0 < *(int *)&param_1->field_0x156db8) {
      local_18 = param_1;
      do {
        actor = *(CDemonActor **)&local_18->field_0x156dbc;
        pCVar8 = (CKeyFramedModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_0053d770(param_1,actor);
        if ((pCVar8 == (CKeyFramedModelInstance *)0x0) &&
           (local_12c = pCVar8, local_128 = pCVar8,
           uStack_14 = (**(code **)(*(int *)&actor->field_0x154 + 0x3c))(actor,local_14c),
           uStack_14 != 0)) {
          core_actor_cpp_FUN_00408f00(actor,local_14c,uStack_14);
          puVar10 = auStack_c4;
          pCVar11 = &CStack_f4;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(uint *)pCVar11 = *puVar10;
            puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
            pCVar11 = (CBoundingBox3D *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
          }
          iVar9 = core_box_cpp_FUN_0041e910((CBoundingBox3D *)&local_dc,&CStack_f4);
          if (iVar9 != 0) {
            if (local_128 == (CKeyFramedModelInstance *)0x0) {
              if (uStack_14 < 2) {
                if (uStack_14 == 1) {
                  orientation_matrix = (CMatrix3x3f *)&actor->field_0x3c;
                  position = (CVector3f *)&actor->field_0x20;
                  (**(code **)(*(int *)&actor->field_0x154 + 0x1c))(actor);
                  puVar10 = auStack_124;
                  pCVar11 = &CStack_10c;
                  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *(uint *)pCVar11 = *puVar10;
                    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
                    pCVar11 = (CBoundingBox3D *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
                  }
                  iVar9 = core_setcolid_cpp_FUN_0053da90
                                    (param_1,(SIntersectXZCylinder *)&local_1a8,&CStack_10c,position
                                     ,orientation_matrix);
                  if (iVar9 != 0) {
                    *(CDemonActor **)&param_1->field_0x14d144 = actor;
                  }
                }
                else {
LAB_0053e7d7:
                  _DAT_01d71de0 = "..\\core\\setcolid.cpp";
                  _DAT_01d71de4 = 0x3f1;
                  core_main_c_FUN_004e4330("Invalid collision type!");
                }
              }
              else if (uStack_14 < 3) {
                local_14c._20_4_ = (float)local_14c._20_4_ + *(float *)&actor->field_0x24;
                fStack_134 = fStack_134 + *(float *)&actor->field_0x24;
                fVar1 = *(float *)&actor->field_0x20;
                fVar2 = *(float *)&actor->field_0x28;
                if (((float)local_14c._20_4_ < local_184) && (local_180 < fStack_134)) {
                  fVar3 = fVar1 - local_198;
                  fVar5 = fVar2 - local_194;
                  fVar6 = fStack_130 + local_188;
                  fVar7 = fVar6 * fVar6;
                  fVar4 = fVar5 * fVar5 + fVar3 * fVar3;
                  if (fVar7 <= fVar4) {
                    fVar3 = fVar5 * fStack_170 + fVar3 * fStack_174;
                    if (0.0 < fVar3) {
                      fVar6 = fStack_174 * fVar3 + local_198;
                      fVar4 = fVar1 - fVar6;
                      fVar5 = fStack_170 * fVar3 + local_194;
                      fVar3 = fVar2 - fVar5;
                      fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
                      if (fVar3 < fVar7) {
                        fVar3 = SQRT(fVar7 - fVar3);
                        fVar6 = fVar6 - fStack_174 * fVar3;
                        fVar5 = fVar5 - fStack_170 * fVar3;
                        if (ABS(local_190) <= ABS(local_18c)) {
                          fVar3 = (fVar5 - local_194) / local_18c;
                        }
                        else {
                          fVar3 = (fVar6 - local_198) / local_190;
                        }
                        if (((0.0 <= fVar3) && (fVar3 < local_1a8)) && (fVar3 <= 1.0)) {
                          local_1a4 = fVar6 - fVar1;
                          local_19c = fVar5 - fVar2;
                          local_1a0 = 0.0;
                          *(CDemonActor **)&param_1->field_0x14d144 = actor;
                          local_1a8 = fVar3;
                        }
                      }
                    }
                  }
                  else {
                    dStack_2a8 = SQRT((double)fVar4) - (double)fVar6;
                    if (_DAT_005d0b6e < dStack_2a8) {
                      dStack_2a8 = -0.001;
                    }
                    if ((float)dStack_2a8 < local_1a8) {
                      local_1a4 = -fVar3;
                      local_19c = -fVar5;
                      local_1a0 = 0.0;
                      *(CDemonActor **)&param_1->field_0x14d144 = actor;
                      local_1a8 = (float)dStack_2a8;
                    }
                  }
                }
              }
              else {
                if (uStack_14 != 3) goto LAB_0053e7d7;
                afStack_a8[2] = local_198;
                fStack_98 = local_194;
                pCStack_9c = local_128;
                core_actor_cpp_FUN_00408bf0(actor,afStack_a8 + 2);
                fVar1 = local_18c;
                afStack_58[0] = local_190;
                uStack_ac = afStack_90[2];
                afStack_a8[(uint)bVar12 * -2] = afStack_90[(uint)bVar12 * -2 + 3];
                afStack_a8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                     afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
                afStack_58[2] = fVar1;
                afStack_58[1] = 0.0;
                core_actor_cpp_FUN_00408b40(actor,afStack_90 + 0xe);
                uStack_7c = uStack_70;
                afStack_90[(uint)bVar12 * -2 + 6] = afStack_90[(uint)bVar12 * -2 + 9];
                afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                     afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
                core_dtrace_cpp_initIntersectionCylinder_FUN_00474db0
                          (&fStack_260,uStack_ac,afStack_a8[1],uStack_7c,uStack_74,param_6,
                           param_7 - *(float *)&actor->field_0x24,
                           param_8 - *(float *)&actor->field_0x24);
                fStack_260 = local_1a8;
                (**(code **)(*(int *)&actor->field_0x154 + 0xbc))(actor,&fStack_260);
                if (fStack_260 < local_1a8) {
                  local_1a8 = fStack_260;
                  core_actor_cpp_FUN_00408b00(actor,auStack_25c);
                  fStack_64 = fStack_94;
                  afStack_90[(uint)bVar12 * -2 + 0xc] = afStack_90[(uint)bVar12 * -2];
                  afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
                       afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
                  if (&local_1a4 != afStack_90 + 0xb) {
                    local_1a4 = fStack_64;
                    local_1a0 = fStack_60;
                    local_19c = fStack_5c;
                  }
                  *(CDemonActor **)&param_1->field_0x14d144 = actor;
                }
              }
            }
            else {
              this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(local_128)
              ;
              if (*(int *)&this_ptr->field_0x358 == 0) {
                _DAT_01d71de0 = "..\\core\\setcolid.cpp";
                _DAT_01d71de4 = 0x389;
                core_main_c_FUN_004e4330("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr);
              }
              core_dtrace_cpp_initIntersectionCylinder_FUN_00474db0
                        (&fStack_204,local_198 - *(float *)&actor->field_0x20,
                         local_194 - *(float *)&actor->field_0x28,local_190,local_18c,param_6,
                         param_7 - *(float *)&actor->field_0x24,
                         param_8 - *(float *)&actor->field_0x24);
              fStack_204 = local_1a8;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00
                        (this_ptr,0,(SIntersectXZCylinder *)&fStack_204,
                         (CVector3f *)&actor->field_0x30);
              if (fStack_204 < local_1a8) {
                if (&local_1a4 != &fStack_200) {
                  local_1a4 = fStack_200;
                  local_1a0 = fStack_1fc;
                  local_19c = fStack_1f8;
                }
                *(CDemonActor **)&param_1->field_0x14d144 = actor;
                local_1a8 = fStack_204;
              }
            }
          }
        }
        local_18 = (CDemonSet *)&local_18->field_0x4;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)&param_1->field_0x156db8);
    }
  }
  if (local_1a8 <= 1.0) {
    fVar1 = SQRT(local_19c * local_19c + local_1a0 * local_1a0 + local_1a4 * local_1a4);
    if (0.0 < fVar1) {
      fVar1 = 1.0 / fVar1;
      local_1a4 = local_1a4 * fVar1;
      local_1a0 = local_1a0 * fVar1;
      local_19c = local_19c * fVar1;
    }
    else {
      local_1a0 = 0.0;
      local_1a4 = 0.0;
      local_19c = 0.0;
    }
    if ((float *)&param_1->field_0x14d128 != &local_1a4) {
      *(float *)&param_1->field_0x14d128 = local_1a4;
      *(float *)&param_1->field_0x14d12c = local_1a0;
      *(float *)&param_1->field_0x14d130 = local_19c;
      return local_1a8;
    }
  }
  return local_1a8;
}
