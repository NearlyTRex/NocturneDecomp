// Name: core_gabriela.cpp_CGabriella_processAI_FUN_00496d10
// Address: 00496d10
// Address Range: [[00496d10, 004973b3]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float local_120;
  float local_11c;
  float fStack_118;
  byte auStack_114 [24];
  byte local_fc [24];
  byte local_e4 [12];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  byte local_c0 [4];
  float local_bc;
  float local_b4 [3];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_1c;
  float local_18;
  
  local_1c = 0.25;
  memset(param_1 + 0xbc94,0,0x2c);
  if (*(int *)(param_1 + 0x1fa38) != 0) {
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_84 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
    local_80 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
    local_7c = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
    local_120 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if (*(int *)(param_1 + 0x1fa38) == 3) {
      local_120 = 0.0;
    }
    if ((float)4 <= local_120) {
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                        (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0xbcc0,param_1 + 0x20,local_c0,
                         *(uint *)(param_1 + 0x6c));
      if (iVar4 != 0) {
        fVar3 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_bc - *(float *)(param_1 + 0x34));
        fVar3 = fVar3 * (float)0.31830988619288902 * (float)4;
        *(float *)(param_1 + 0xbcb8) = fVar3;
        if (fVar3 < -local_1c) {
          *(float *)(param_1 + 0xbcb8) = -local_1c;
        }
        if (local_1c < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_1c;
        }
        iVar4 = _DAT_01cae0e8;
        *(uint *)(param_1 + 0xbc94) = 1;
        iVar4 = *(int *)(iVar4 * 4 + 0x1cae0d8);
        if (&local_9c != local_b4) {
          local_9c = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
          local_98 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
          local_94 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
        }
        if ((float)10 <
            SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98)) {
          *(uint *)(param_1 + 0xbc9c) = 1;
          return;
        }
      }
    }
    else {
      local_11c = 9999.9;
      iVar4 = 0;
      if ((*(int *)(param_1 + 0x1fa38) == 2) || (*(int *)(param_1 + 0x1fa38) == 3)) {
        iVar4 = core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(param_1,&local_11c);
      }
      if ((iVar4 == 0) || ((float)30 <= local_11c)) {
        if (*(int *)(param_1 + 0x1fa3c) != 0) {
          iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
          if (*(int *)(iVar4 + 0x24) == 0) {
            *(uint *)(param_1 + 0xbcac) = 1;
            return;
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0x1fa3c) == 0) {
          iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
          if (*(int *)(iVar1 + 0x24) == 0) {
            *(uint *)(param_1 + 0xbcac) = 1;
          }
        }
        local_6c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        local_68 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        local_64 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        iVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_e4,&local_6c)
        ;
        local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                    (*(float *)(iVar1 + 4) - *(float *)(param_1 + 0x34));
        fVar3 = local_18 * (float)0.31830988619288902 * (float)4;
        local_24 = -local_1c;
        *(float *)(param_1 + 0xbcb8) = fVar3;
        if (fVar3 < local_24) {
          *(float *)(param_1 + 0xbcb8) = local_24;
        }
        if (local_1c < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_1c;
        }
        if (((float)-0.050000000000000003 < *(float *)(param_1 + 0xbcb8)) &&
           ((double)*(float *)(param_1 + 0xbcb8) < 0.050000000000000003)) {
          pfVar2 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_fc);
          fStack_d8 = *pfVar2 + pfVar2[3];
          fStack_d4 = pfVar2[1] + pfVar2[4];
          fStack_54 = fStack_d8 * 0.5f;
          fStack_d0 = pfVar2[2] + pfVar2[5];
          fStack_50 = fStack_d4 * 0.5f;
          fStack_4c = fStack_d0 * 0.5f;
          fStack_78 = *(float *)(param_1 + 0x20) + fStack_54;
          fStack_74 = *(float *)(param_1 + 0x24) + fStack_50;
          fStack_70 = *(float *)(param_1 + 0x28) + fStack_4c;
          pfVar2 = (float *)(**(code **)(*(int *)(iVar4 + 0x14c) + 0x14))(iVar4,auStack_114);
          fStack_30 = *pfVar2 + pfVar2[3];
          fStack_2c = pfVar2[1] + pfVar2[4];
          fStack_60 = fStack_30 * 0.5f;
          fStack_28 = pfVar2[2] + pfVar2[5];
          fStack_5c = fStack_2c * 0.5f;
          fStack_58 = fStack_28 * 0.5f;
          fStack_48 = *(float *)(iVar4 + 0x20) + fStack_60;
          fStack_44 = *(float *)(iVar4 + 0x24) + fStack_5c;
          fStack_cc = fStack_48 - fStack_78;
          fStack_c8 = fStack_44 - fStack_74;
          fStack_40 = *(float *)(iVar4 + 0x28) + fStack_58;
          fStack_c4 = fStack_40 - fStack_70;
          fStack_118 = SQRT(fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8);
          if (fStack_118 <= 0.0) {
            fStack_c8 = 0.0;
            fStack_cc = 0.0;
            fStack_c4 = 0.0;
          }
          else {
            fVar3 = 1.0 / fStack_118;
            fStack_cc = fStack_cc * fVar3;
            fStack_c8 = fStack_c8 * fVar3;
            fStack_c4 = fStack_c4 * fVar3;
          }
          fStack_3c = fStack_cc * 3.0f;
          fStack_38 = fStack_c8 * 3.0f;
          fStack_34 = fStack_c4 * 3.0f;
          fStack_a8 = fStack_48 + fStack_3c;
          fStack_a4 = fStack_44 + fStack_38;
          fStack_a0 = fStack_40 + fStack_34;
          if (&fStack_48 != &fStack_a8) {
            fStack_48 = fStack_a8;
            fStack_44 = fStack_a4;
            fStack_40 = fStack_a0;
          }
          core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
          iVar1 = 0x01E57284;
          *(uint *)(0x01E57284 + 0x14cd5c) = 0;
          core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(iVar1,&fStack_78,&fStack_48);
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
          if (iVar4 == *(int *)(0x01E57284 + 0x14cd5c)) {
            *(uint *)(param_1 + 0xbca0) = 1;
            return;
          }
        }
      }
    }
  }
  return;
}
