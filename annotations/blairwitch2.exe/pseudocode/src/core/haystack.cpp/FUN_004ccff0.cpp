// Name: core_haystack.cpp_FUN_004ccff0
// Address: 004ccff0
// Address Range: [[004ccff0, 004cd636]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004ccff0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_haystack_cpp_FUN_004ccff0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CPathMap *this_ptr;
  byte bVar4;
  float afStackY_10b4 [1007];
  float local_dc;
  byte local_d8 [12];
  float local_cc;
  float afStack_c8 [5];
  uint local_b4;
  float afStack_b0 [4];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  uint local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar4 = 0;
  local_2c = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_24 = 0;
  local_20 = 0.25;
  local_30 = 0.7853982;
  memset((void *)(param_1 + 0x10a68),0,0x34);
  if (*(int *)(param_1 + 0x25638) != 0) {
    iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_60 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
    local_5c = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
    local_58 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
    local_9c = local_60;
    afStack_b0[(uint)bVar4 * -2 + 6] = afStack_b0[(uint)bVar4 * -2 + 0x15];
    afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    local_48 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
    if (((*(int *)(param_1 + 0x25638) == 3) || (local_48 < _DAT_005d9942)) &&
       ((*(int *)(param_1 + 0x25638) == 2 || (*(int *)(param_1 + 0x25638) == 3)))) {
      local_dc = 9999.9;
      iVar3 = core_hero_cpp_FUN_004d00c0(param_1,&local_dc);
      if ((iVar3 == 0) || ((float)_DAT_005d9946 <= local_dc)) {
        if (*(int *)(param_1 + 0x25640) != 0) {
          *(uint *)(param_1 + 0x10a80) = 1;
        }
      }
      else {
        local_2c = iVar3;
        local_24 = 1;
      }
    }
    local_84 = *(float *)(local_2c + 0x20) - *(float *)(param_1 + 0x20);
    local_80 = *(float *)(local_2c + 0x24) - *(float *)(param_1 + 0x24);
    local_7c = *(float *)(local_2c + 0x28) - *(float *)(param_1 + 0x28);
    local_54 = local_84;
    afStack_b0[(uint)bVar4 * -2 + 0x18] = afStack_b0[(uint)bVar4 * -2 + 0xc];
    afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
         afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    if (afStack_b0 + 5 != afStack_b0 + 0x17) {
      local_9c = local_54;
      local_98 = local_50;
      local_94 = local_4c;
    }
    fVar1 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
    local_1c = fVar1;
    if ((float)_DAT_005d994e <= fVar1) {
      this_ptr = (CPathMap *)0x0;
      if (local_24 == 0) {
        iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        this_ptr = (CPathMap *)(**(code **)(*(int *)(iVar3 + 0x2b0) + 0xcc))(iVar3);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)(local_2c + 0x20));
      }
      iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr,(CVector3f *)(param_1 + 0x20),(CVector3f *)local_d8,
                         *(int *)(param_1 + 0x6c));
      if (iVar3 != 0) {
        local_18 = (float)core_actor_cpp_FUN_0040d0c0
                                    ((float)local_d8._4_4_ - *(float *)(param_1 + 0x34));
        fVar2 = local_18 * _DAT_005d9956 * (float)_DAT_005d995e;
        local_3c = -local_20;
        *(float *)(param_1 + 0x10a90) = fVar2;
        if (fVar2 < local_3c) {
          *(float *)(param_1 + 0x10a90) = local_3c;
        }
        if (local_20 < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_20;
        }
        if (((float)_DAT_005d9966 <= fVar1) || (local_24 == 1)) {
          *(uint *)(param_1 + 0x10a70) = 1;
          *(uint *)(param_1 + 0x10a68) = 1;
        }
        else {
          *(uint *)(param_1 + 0x10a68) = 1;
        }
      }
    }
    else {
      if (local_24 == 1) {
        if (*(int *)(param_1 + 0x25640) == 0) {
          *(uint *)(param_1 + 0x10a80) = 1;
        }
        else {
          iVar3 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
          if ((*(int *)(iVar3 + 0x24) != 2) && (*(int *)(iVar3 + 0x24) != 1)) {
            *(uint *)(param_1 + 0x10a74) = 1;
          }
        }
      }
      else {
        iVar3 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
        if ((*(int *)(iVar3 + 0x24) == 10) && (*(int *)(param_1 + 0x25640) != 0)) {
          *(uint *)(param_1 + 0x10a80) = 1;
        }
      }
      if (local_24 == 1) {
        core_vecdir_cpp_FUN_005838f0(afStack_b0 + 5);
        local_78 = local_b4;
        afStack_b0[(uint)bVar4 * -2 + 0xf] = afStack_b0[(uint)bVar4 * -2];
        afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
             afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        local_18 = (float)core_actor_cpp_FUN_0040d0c0(local_74 - *(float *)(param_1 + 0x34));
        fVar1 = local_18 * _DAT_005d9956 * (float)_DAT_005d995e;
        local_40 = -local_20;
        *(float *)(param_1 + 0x10a90) = fVar1;
        if (fVar1 < local_40) {
          *(float *)(param_1 + 0x10a90) = local_40;
        }
        if (local_20 < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_20;
        }
        if ((((float)_DAT_005d996e < *(float *)(param_1 + 0x10a90)) &&
            ((double)*(float *)(param_1 + 0x10a90) < _DAT_005d9976)) &&
           (*(int *)(param_1 + 0x10a74) != 0)) {
          *(uint *)(param_1 + 0x10a90) = 0;
        }
      }
    }
    local_90 = *(float *)(local_2c + 0x20) - *(float *)(param_1 + 0x20);
    local_8c = *(float *)(local_2c + 0x24) - *(float *)(param_1 + 0x24);
    local_88 = *(float *)(local_2c + 0x28) - *(float *)(param_1 + 0x28);
    afStack_b0[2] = local_90;
    afStack_b0[(uint)bVar4 * -2 + 3] = afStack_b0[(uint)bVar4 * -2 + 9];
    afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    if (afStack_b0 + 5 != afStack_b0 + 2) {
      local_9c = afStack_b0[2];
      local_98 = afStack_b0[3];
      local_94 = local_a0;
    }
    core_vecdir_cpp_FUN_005838f0(afStack_b0 + 5);
    local_6c = local_cc;
    afStack_b0[(uint)bVar4 * -2 + 0x12] = afStack_c8[(uint)bVar4 * -2];
    afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
         afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_b0 + 5 != afStack_b0 + 0x11) {
      local_9c = local_6c;
      local_98 = local_68;
      local_94 = local_64;
    }
    afStack_c8[3] = (float)core_actor_cpp_FUN_0040d0c0(local_98 - *(float *)(param_1 + 0x34));
    if (local_30 < afStack_c8[3]) {
      afStack_c8[3] = local_30;
    }
    if (afStack_c8[3] < -local_30) {
      afStack_c8[3] = -local_30;
    }
    local_28 = afStack_c8[3] - *(float *)(param_1 + 0x2564c);
    if (param_2 * _DAT_005d997e < local_28) {
      local_28 = param_2 * _DAT_005d997e;
    }
    if (local_28 < param_2 * _DAT_005d9982) {
      local_28 = param_2 * _DAT_005d9982;
    }
    *(float *)(param_1 + 0x2564c) = *(float *)(param_1 + 0x2564c) + local_28;
  }
  return;
}
