// Name: core_colonel.cpp_FUN_00444b50
// Address: 00444b50
// Address Range: [[00444b50, 00445137]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_00444b50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_colonel_cpp_FUN_00444b50(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  CPathMap *this_ptr;
  byte bVar4;
  float afStackY_10b4 [1007];
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  float local_cc;
  float local_c8 [6];
  float local_b0;
  float local_a8;
  float local_a4 [5];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar4 = 0;
  local_28 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_24 = 0;
  local_1c = 0.25;
  local_2c = 0.7853982;
  memset((void *)(param_1 + 0xc1d8),0,0x30);
  if (*(int *)(param_1 + 0x1ffa8) != 0) {
    iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_a8 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
    local_a4[0] = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
    local_a4[1] = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
    local_84 = local_a8;
    local_a4[(uint)bVar4 * -2 + 9] = local_a4[(uint)bVar4 * -2];
    local_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         local_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_44 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if ((((*(int *)(param_1 + 0x1ffa8) == 3) || (local_44 < _DAT_005d6cb3)) &&
        ((*(int *)(param_1 + 0x1ffa8) == 2 || (*(int *)(param_1 + 0x1ffa8) == 3)))) &&
       ((iVar2 = core_hero_cpp_FUN_004ec350(param_1,&local_e0), iVar2 != 0 &&
        (local_e0 < (float)_DAT_005d6cb7)))) {
      local_28 = iVar2;
      local_24 = 1;
    }
    local_cc = *(float *)(local_28 + 0x20) - *(float *)(param_1 + 0x20);
    local_c8[0] = *(float *)(local_28 + 0x24) - *(float *)(param_1 + 0x24);
    local_c8[1] = *(float *)(local_28 + 0x28) - *(float *)(param_1 + 0x28);
    local_6c = local_cc;
    local_a4[(uint)bVar4 * -2 + 0xf] = local_c8[(uint)bVar4 * -2];
    local_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         local_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (local_a4 + 8 != local_a4 + 0xe) {
      local_84 = local_6c;
      local_80 = local_68;
      local_7c = local_64;
    }
    local_48 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    local_dc = local_48;
    if ((float)_DAT_005d6cbf <= local_48) {
      this_ptr = (CPathMap *)0x0;
      if (local_24 == 0) {
        iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        this_ptr = (CPathMap *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xc4))(iVar2);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)(local_28 + 0x20));
      }
      iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        (this_ptr,(CVector3f *)(param_1 + 0x20),&local_d8,*(int *)(param_1 + 0x6c));
      if (iVar2 != 0) {
        local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                    (local_d8.y - *(float *)(param_1 + 0x34));
        fVar1 = local_18 * _DAT_005d6cc7 * (float)_DAT_005d6ccf;
        local_38 = -local_1c;
        *(float *)(param_1 + 0xc200) = fVar1;
        if (fVar1 < local_38) {
          *(float *)(param_1 + 0xc200) = local_38;
        }
        if (local_1c < *(float *)(param_1 + 0xc200)) {
          *(float *)(param_1 + 0xc200) = local_1c;
        }
        if (((float)_DAT_005d6cd7 <= local_dc) || (local_24 == 1)) {
          *(uint *)(param_1 + 0xc1e0) = 1;
          *(uint *)(param_1 + 0xc1d8) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc1d8) = 1;
        }
      }
    }
    else {
      if (local_24 == 1) {
        if (*(int *)(param_1 + 0x1ffac) == 0) {
          *(uint *)(param_1 + 0xc1f0) = 1;
        }
        else {
          pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             ((CMotionController *)(param_1 + 0x158));
          if ((pSVar3->state_index != 2) && (pSVar3->state_index != 1)) {
            *(uint *)(param_1 + 0xc1e4) = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                  ((CMotionController *)(param_1 + 0x158));
      }
      if (local_24 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(local_a4 + 8);
        local_a4[2] = local_c8[2];
        local_a4[(uint)bVar4 * -2 + 3] = local_c8[(uint)bVar4 * -2 + 3];
        local_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             local_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                    (local_a4[3] - *(float *)(param_1 + 0x34));
        fVar1 = local_18 * _DAT_005d6cc7 * (float)_DAT_005d6ccf;
        local_40 = -local_1c;
        *(float *)(param_1 + 0xc200) = fVar1;
        if (fVar1 < local_40) {
          *(float *)(param_1 + 0xc200) = local_40;
        }
        if (local_1c < *(float *)(param_1 + 0xc200)) {
          *(float *)(param_1 + 0xc200) = local_1c;
        }
        if ((((float)_DAT_005d6cdf < *(float *)(param_1 + 0xc200)) &&
            ((double)*(float *)(param_1 + 0xc200) < _DAT_005d6ce7)) &&
           (*(int *)(param_1 + 0xc1e4) != 0)) {
          *(uint *)(param_1 + 0xc200) = 0;
        }
      }
    }
    local_60 = *(float *)(local_28 + 0x20) - *(float *)(param_1 + 0x20);
    local_5c = *(float *)(local_28 + 0x24) - *(float *)(param_1 + 0x24);
    local_58 = *(float *)(local_28 + 0x28) - *(float *)(param_1 + 0x28);
    local_90 = local_60;
    local_a4[(uint)bVar4 * -2 + 6] = local_a4[(uint)bVar4 * -2 + 0x12];
    local_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         local_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
    if (local_a4 + 8 != local_a4 + 5) {
      local_84 = local_90;
      local_80 = local_8c;
      local_7c = local_88;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(local_a4 + 8);
    local_78 = local_54;
    local_a4[(uint)bVar4 * -2 + 0xc] = local_a4[(uint)bVar4 * -2 + 0x15];
    local_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         local_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    if (local_a4 + 8 != local_a4 + 0xb) {
      local_84 = local_78;
      local_80 = local_74;
      local_7c = local_70;
    }
    local_b0 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                (local_80 - *(float *)(param_1 + 0x34));
    if (local_2c < local_b0) {
      local_b0 = local_2c;
    }
    if (local_b0 < -local_2c) {
      local_b0 = -local_2c;
    }
    local_20 = local_b0 - *(float *)(param_1 + 0x1ffb8);
    if (param_2 * _DAT_005d6cef < local_20) {
      local_20 = param_2 * _DAT_005d6cef;
    }
    if (local_20 < param_2 * _DAT_005d6cf3) {
      local_20 = param_2 * _DAT_005d6cf3;
    }
    *(float *)(param_1 + 0x1ffb8) = *(float *)(param_1 + 0x1ffb8) + local_20;
  }
  return;
}
