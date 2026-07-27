// Name: core_setcolid.cpp_FUN_00510a40
// Address: 00510a40
// Address Range: [[00510a40, 005113d4]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_00510a40(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6,float param_7,float param_8)

#include "nocturne.h"

float core_setcolid_cpp_FUN_00510a40(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,float param_7,float param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  double dStack_278;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1a8;
  byte auStack_1a4 [88];
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_118;
  float fStack_114;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int local_d0;
  int local_cc;
  byte auStack_c8 [24];
  byte auStack_b0 [24];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  uint auStack_80 [2];
  uint uStack_78;
  float afStack_74 [3];
  float fStack_68;
  int iStack_64;
  float fStack_60;
  uint auStack_5c [2];
  uint uStack_54;
  byte auStack_50 [56];
  int local_18;
  int local_14;
  
  core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20
            (&local_14c,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((param_4 & 0x7fffffff) != 0) || ((param_5 & 0x7fffffff) != 0)) {
    core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0(&DAT_01fba938,&local_14c);
  }
  *(uint *)(param_1 + 0x14cd4c) = 1;
  *(uint *)(param_1 + 0x14cd60) = 0xffffffff;
  *(uint *)(param_1 + 0x14cd64) = 0xffffffff;
  *(uint *)(param_1 + 0x14cd5c) = 0;
  if (-1 < *(int *)(param_1 + 0x15f2ac)) {
    local_98 = local_13c - local_12c;
    local_8c = local_13c + local_12c;
    if (local_134 <= 0.0) {
      local_98 = local_98 + local_134;
    }
    else {
      local_8c = local_8c + local_134;
    }
    local_94 = local_124;
    local_90 = local_138 - local_12c;
    local_84 = local_138 + local_12c;
    local_88 = local_128;
    if (local_130 <= 0.0) {
      local_90 = local_90 + local_130;
    }
    else {
      local_84 = local_84 + local_130;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_f0);
    local_f0 = *(uint *)(param_1 + 0x15f298);
    local_ec = *(uint *)(param_1 + 0x15f29c);
    local_e8 = *(uint *)(param_1 + 0x15f2a0);
    local_e4 = *(uint *)(param_1 + 0x15f2a4);
    local_e0 = *(uint *)(param_1 + 0x15f2a8);
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x1569c0)) {
      local_18 = param_1;
      do {
        iVar1 = *(int *)(local_18 + 0x1569c4);
        iVar9 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(param_1,iVar1);
        if ((iVar9 == 0) &&
           (local_d0 = iVar9, local_cc = iVar9,
           uVar10 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x34))(iVar1,&local_f0), uVar10 != 0)) {
          uVar11 = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
                             (iVar1,auStack_b0,&local_f0,uVar10);
          iVar9 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(&local_98,uVar11);
          if (iVar9 != 0) {
            if (local_cc == 0) {
              if (uVar10 < 2) {
                if (uVar10 == 1) {
                  uVar11 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))
                                     (iVar1,auStack_c8,iVar1 + 0x20,iVar1 + 0x3c);
                  iVar9 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710
                                    (param_1,&local_14c,uVar11);
                  if (iVar9 != 0) {
                    *(int *)(param_1 + 0x14cd5c) = iVar1;
                  }
                }
                else {
LAB_0051133f:
                  PTR_01cc4800 = "..\\core\\setcolid.cpp";
                  INT_01cc4804 = 0x3f1;
                  core_main_c_FUN_004c8440("Invalid collision type!");
                }
              }
              else if (uVar10 < 3) {
                fStack_dc = fStack_dc + *(float *)(iVar1 + 0x24);
                fStack_d8 = fStack_d8 + *(float *)(iVar1 + 0x24);
                fVar2 = *(float *)(iVar1 + 0x20);
                fVar3 = *(float *)(iVar1 + 0x28);
                if ((fStack_dc < local_128) && (local_124 < fStack_d8)) {
                  fVar4 = fVar2 - local_13c;
                  fVar6 = fVar3 - local_138;
                  fVar7 = fStack_d4 + local_12c;
                  fVar8 = fVar7 * fVar7;
                  fVar5 = fVar6 * fVar6 + fVar4 * fVar4;
                  if (fVar8 <= fVar5) {
                    fVar4 = fVar6 * fStack_114 + fVar4 * fStack_118;
                    if (0.0 < fVar4) {
                      fVar7 = fStack_118 * fVar4 + local_13c;
                      fVar5 = fVar2 - fVar7;
                      fVar6 = fStack_114 * fVar4 + local_138;
                      fVar4 = fVar3 - fVar6;
                      fVar4 = fVar4 * fVar4 + fVar5 * fVar5;
                      if (fVar4 < fVar8) {
                        fVar4 = SQRT(fVar8 - fVar4);
                        fVar7 = fVar7 - fStack_118 * fVar4;
                        fVar6 = fVar6 - fStack_114 * fVar4;
                        if (ABS(local_134) <= ABS(local_130)) {
                          fVar4 = (fVar6 - local_138) / local_130;
                        }
                        else {
                          fVar4 = (fVar7 - local_13c) / local_134;
                        }
                        if (((0.0 <= fVar4) && (fVar4 < local_14c)) && (fVar4 <= 1.0)) {
                          local_148 = fVar7 - fVar2;
                          local_140 = fVar6 - fVar3;
                          local_144 = 0.0;
                          *(int *)(param_1 + 0x14cd5c) = iVar1;
                          local_14c = fVar4;
                        }
                      }
                    }
                  }
                  else {
                    dStack_278 = SQRT((double)fVar5) - (double)fVar7;
                    if (-0.001 < dStack_278) {
                      dStack_278 = -0.001;
                    }
                    if ((float)dStack_278 < local_14c) {
                      local_148 = -fVar4;
                      local_140 = -fVar6;
                      local_144 = 0.0;
                      *(int *)(param_1 + 0x14cd5c) = iVar1;
                      local_14c = (float)dStack_278;
                    }
                  }
                }
              }
              else {
                if (uVar10 != 3) goto LAB_0051133f;
                fStack_68 = local_13c;
                fStack_60 = local_138;
                iStack_64 = local_cc;
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                          (iVar1,auStack_80,&fStack_68);
                afStack_74[0] = local_134;
                afStack_74[2] = local_130;
                afStack_74[1] = 0.0;
                core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                          (iVar1,auStack_5c,afStack_74);
                core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20
                          (&fStack_1a8,auStack_80[0],uStack_78,auStack_5c[0],uStack_54,param_6,
                           param_7 - *(float *)(iVar1 + 0x24),param_8 - *(float *)(iVar1 + 0x24));
                fStack_1a8 = local_14c;
                (**(code **)(*(int *)(iVar1 + 0x14c) + 0xb4))(iVar1,&fStack_1a8);
                if (fStack_1a8 < local_14c) {
                  local_14c = fStack_1a8;
                  pfVar12 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                               (iVar1,auStack_50,auStack_1a4);
                  if (&local_148 != pfVar12) {
                    local_148 = *pfVar12;
                    local_144 = pfVar12[1];
                    local_140 = pfVar12[2];
                  }
                  *(int *)(param_1 + 0x14cd5c) = iVar1;
                }
              }
            }
            else {
              iVar9 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(local_cc);
              if (*(int *)(iVar9 + 0x358) == 0) {
                PTR_01cc4800 = "..\\core\\setcolid.cpp";
                INT_01cc4804 = 0x389;
                core_main_c_FUN_004c8440("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",iVar9);
              }
              core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20
                        (&fStack_204,local_13c - *(float *)(iVar1 + 0x20),
                         local_138 - *(float *)(iVar1 + 0x28),local_134,local_130,param_6,
                         param_7 - *(float *)(iVar1 + 0x24),param_8 - *(float *)(iVar1 + 0x24));
              fStack_204 = local_14c;
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10
                        (iVar9,0,&fStack_204,iVar1 + 0x30);
              if (fStack_204 < local_14c) {
                if (&local_148 != &fStack_200) {
                  local_148 = fStack_200;
                  local_144 = fStack_1fc;
                  local_140 = fStack_1f8;
                }
                *(int *)(param_1 + 0x14cd5c) = iVar1;
                local_14c = fStack_204;
              }
            }
          }
        }
        local_18 = local_18 + 4;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x1569c0));
    }
  }
  if (local_14c <= 1.0) {
    fVar2 = SQRT(local_140 * local_140 + local_144 * local_144 + local_148 * local_148);
    if (0.0 < fVar2) {
      fVar2 = 1.0 / fVar2;
      local_148 = local_148 * fVar2;
      local_144 = local_144 * fVar2;
      local_140 = local_140 * fVar2;
    }
    else {
      local_144 = 0.0;
      local_148 = 0.0;
      local_140 = 0.0;
    }
    if ((float *)(param_1 + 0x14cd40) != &local_148) {
      *(float *)(param_1 + 0x14cd40) = local_148;
      *(float *)(param_1 + 0x14cd44) = local_144;
      *(float *)(param_1 + 0x14cd48) = local_140;
      return local_14c;
    }
  }
  return local_14c;
}
