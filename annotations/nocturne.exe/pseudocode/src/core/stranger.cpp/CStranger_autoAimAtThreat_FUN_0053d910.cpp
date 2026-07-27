// Name: core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0053d910
// Address: 0053d910
// Address Range: [[0053d910, 0053e314]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(int param_1,int param_2,float param_3)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  byte *puVar10;
  uint uVar11;
  float fStack_1a8;
  byte auStack_1a0 [120];
  byte auStack_128 [40];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  byte auStack_e8 [12];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  byte auStack_c4 [12];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  byte auStack_a0 [12];
  byte auStack_94 [12];
  byte auStack_88 [12];
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int local_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  int iStack_28;
  float *local_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  local_24 = (float *)(param_1 + 0x1fa70);
  if (param_2 == 1) {
    local_24 = (float *)(param_1 + 0x1fa50);
  }
  if (*(int *)(param_1 + 0x1fa94) == 0) {
    local_24[3] = 0.0;
    local_24[1] = 0.0;
    iVar6 = *(int *)(param_2 * 0x44 + param_1 + 0x24ac);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x6c))(iVar6);
    }
    if ((uVar3 & 4) == 0) {
      local_24[2] = 0.0;
      *local_24 = 0.0;
      return;
    }
    local_48 = 3;
  }
  else {
    local_48 = *(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8);
  }
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x1f59c) == 2) && (local_48 == 0)) {
      return;
    }
    local_30 = -1.3089969;
    local_2c = 0.5235988;
    uVar9 = _DAT_02dc9f84;
    uVar11 = _DAT_02dc9f5c;
  }
  else {
    uVar9 = _DAT_02dc9f88;
    uVar11 = _DAT_02dc9f60;
    if (local_48 == 0) {
      local_2c = 1.3089969;
      local_30 = -0.5235988;
    }
    else {
      local_2c = 0.5235988;
      local_30 = -0.5235988;
    }
  }
  fVar8 = *(float *)(param_1 + 0xbcbc) * (float)3.1415926535000001 * (float)2 * param_3 +
          *local_24;
  local_24[1] = 0.0;
  *local_24 = fVar8;
  if (fVar8 < -1.047198f) {
    *local_24 = -1.047198f;
  }
  if (1.22173f < *local_24) {
    *local_24 = 1.22173f;
  }
  if (local_24[3] < local_30) {
    local_24[3] = local_30;
  }
  if (local_2c < local_24[3]) {
    local_24[3] = local_2c;
  }
  if (local_24[1] < local_30) {
    local_24[1] = local_30;
  }
  if (local_2c < local_24[1]) {
    local_24[1] = local_2c;
  }
  local_24[7] = 0.0;
  fStack_38 = local_24[1];
  fStack_34 = *local_24;
  if ((local_48 == 3) || (iVar6 = *(int *)(param_1 + 0x1f59c), iVar6 != 0)) {
    local_24[3] = 0.0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1fa94);
    iStack_7c = iVar6;
    iStack_78 = iVar6;
    iStack_74 = iVar6;
    if ((iVar7 != 0) &&
       (piVar4 = (int *)(**(code **)(*(int *)(iVar7 + 0x14c) + 0xd8))(iVar7,auStack_e8),
       &iStack_7c != piVar4)) {
      iStack_7c = *piVar4;
      iStack_78 = piVar4[1];
      iStack_74 = piVar4[2];
    }
    if (local_48 == 0) {
      pfVar5 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                                  (param_1 + 0x150,auStack_a0,uVar11);
      if (&fStack_100 != pfVar5) {
        fStack_100 = *pfVar5;
        fStack_fc = pfVar5[1];
        fStack_f8 = pfVar5[2];
      }
    }
    else {
      pfVar5 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                                  (param_1 + 0x150,auStack_c4,uVar9);
      if (&fStack_100 != pfVar5) {
        fStack_100 = *pfVar5;
        fStack_fc = pfVar5[1];
        fStack_f8 = pfVar5[2];
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_94,&fStack_100);
    fStack_70 = *local_24;
    uStack_68 = 0;
    fStack_6c = local_24[1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(auStack_128,&fStack_70);
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0x3f800000;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(auStack_128,&fStack_d0,&uStack_ac);
    fStack_20 = 1e+30;
    iStack_3c = 0;
    for (iStack_40 = 0; iStack_40 < *(int *)(0x01E57284 + 0x152b38); iStack_40 = iStack_40 + 1) {
      iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(0x01E57284 + iStack_3c + 0x152b3c),
                         g_CCharacterActorType_00765a60.name_hash);
      if ((iVar6 == 0) ||
         ((iVar7 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6), iVar7 == 0 &&
          (iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x68))(iVar6), iVar6 == 0)))) {
        iStack_1c = *(int *)(0x01E57284 + iStack_3c + 0x152b3c);
        __arrinit(auStack_1a0,10,&g_CVectorTypeInfo_005993b0);
        iStack_28 = (**(code **)(*(int *)(iStack_1c + 0x14c) + 0x4c))(iStack_1c,auStack_1a0);
        if ((0 < iStack_28) && (iVar6 = 0, 0 < iStack_28)) {
          puVar10 = auStack_1a0;
          do {
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iStack_1c,auStack_88,puVar10);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&fStack_dc,auStack_88)
            ;
            fStack_b8 = fStack_dc - fStack_100;
            fStack_b4 = fStack_d8 - fStack_fc;
            fStack_b0 = fStack_d4 - fStack_f8;
            if ((0.0 < (double)fStack_b0) && ((double)fStack_b0 <= 30)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                        (&fStack_f4,&fStack_b8);
              fStack_1a8 = 0.5235988;
              if (fStack_b0 < (float)10) {
                fStack_1a8 = 1.5707964;
              }
              if (((ABS(fStack_f4) <= fStack_1a8) && (local_30 <= fStack_f0)) &&
                 (fStack_f0 <= local_2c)) {
                fVar8 = SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
                fVar1 = 1.0 / fVar8;
                fStack_b4 = fStack_b4 * fVar1;
                fStack_b8 = fStack_b8 * fVar1;
                fStack_b0 = fStack_b0 * fVar1;
                fVar8 = fVar8 * (float)0.033333333333333298 +
                        ((float)2 -
                        (fStack_b0 * fStack_c8 + fStack_b8 * fStack_d0 + fStack_b4 * fStack_cc));
                if (fVar8 < fStack_20) {
                  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,iStack_1c);
                  iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                                    (0x01E57284,auStack_94,auStack_88);
                  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
                  if (iVar7 == 0) {
                    fStack_38 = fStack_f0;
                    fStack_34 = fStack_f4;
                    local_24[7] = 1.4013e-45;
                    fStack_20 = fVar8;
                  }
                }
              }
            }
            iVar6 = iVar6 + 1;
            puVar10 = puVar10 + 0xc;
          } while (iVar6 < iStack_28);
        }
      }
      iStack_3c = iStack_3c + 4;
    }
  }
  dVar2 = 1.5;
  if (local_48 != 0) {
    dVar2 = 0.5;
  }
  fStack_44 = param_3 * (float)3.1415926535000001 * (float)dVar2;
  fStack_4c = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(fStack_38 - local_24[3]);
  fStack_18 = fStack_4c;
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(fStack_34 - local_24[2]);
  fStack_54 = -fStack_44;
  if (fStack_4c < fStack_54) {
    fStack_4c = fStack_54;
  }
  if (fStack_44 < fStack_4c) {
    fStack_4c = fStack_44;
  }
  fStack_58 = -fStack_44;
  fStack_50 = fStack_18;
  if (fStack_18 < fStack_58) {
    fStack_50 = fStack_58;
  }
  if (fStack_44 < fStack_50) {
    fStack_50 = fStack_44;
  }
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_24[3] + fStack_4c);
  local_24[3] = fStack_18;
  fVar8 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_24[2] + fStack_50);
  local_24[2] = fVar8;
  local_24[5] = 1.0;
  if (((local_24[7] == 1.4013e-45) && (ABS(local_24[3] - fStack_38) < (float)0.01)) &&
     (ABS(local_24[2] - fStack_34) < (float)0.01)) {
    local_24[7] = 2.8026e-45;
    return;
  }
  return;
}
