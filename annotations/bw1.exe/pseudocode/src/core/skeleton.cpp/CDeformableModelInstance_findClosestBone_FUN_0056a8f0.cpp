// Name: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0056a8f0
// Address: 0056a8f0
// Address Range: [[0056a8f0, 0056ac5a]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0056a8f0(CDeformableModelInstance *this_ptr,CVector3f *point)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0056a8f0(CDeformableModelInstance *this_ptr,CVector3f *point)

{
  int iVar1;
  float fVar2;
  float fVar3;
  byte *puVar4;
  byte bVar5;
  float afStackY_10e0 [1013];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  uint local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  uint local_7c;
  float local_78;
  float local_68;
  uint local_5c;
  CSkeleton *local_44;
  int local_40;
  byte *local_3c;
  float local_38;
  float local_34;
  int local_30;
  CSkeleton *local_2c;
  uint local_28;
  float local_24;
  float local_1c;
  
  bVar5 = 0;
  local_44 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  local_34 = 1e+30;
  local_40 = 0;
  local_30 = 0;
  if (0 < local_44->bone_count) {
    puVar4 = &this_ptr->field_0xe80;
    local_2c = local_44;
    local_3c = puVar4;
    do {
      iVar1 = *(int *)(local_2c->bone_list + 0x20);
      if (-1 < iVar1) {
        local_68 = *(float *)(puVar4 + 0xc);
        local_5c = *(uint *)(puVar4 + 0x1c);
        local_7c = *(uint *)(puVar4 + 0x2c);
        local_bc = local_68;
        local_b8 = *(uint *)(puVar4 + 0x1c);
        local_b4 = *(uint *)(puVar4 + 0x2c);
        local_98 = local_68;
        *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff48 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        local_78 = *(float *)(local_3c + iVar1 * 0x30 + 0xc);
        local_28 = *(uint *)(local_3c + iVar1 * 0x30 + 0x2c);
        local_a0 = *(uint *)(local_3c + iVar1 * 0x30 + 0x1c);
        local_a4 = local_78;
        local_9c = *(uint *)(local_3c + iVar1 * 0x30 + 0x2c);
        local_d4 = local_78;
        *(uint *)((int)&stack0xffffff30 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffff34 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff64 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        local_f4 = local_d0 - local_94;
        local_f0 = local_cc - local_90;
        local_ec = local_d4 - local_98;
        *(uint *)((int)&stack0xffffff18 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff0c + (uint)bVar5 * -8);
        fVar3 = local_94;
        *(uint *)((int)&stack0xffffff1c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff10 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        local_38 = SQRT(local_e4 * local_e4 + local_ec * local_ec + local_e8 * local_e8);
        if (local_38 <= 0.0) {
LAB_0056aae9:
          local_98 = point->x - local_98;
          fVar3 = point->y - local_94;
          fVar3 = fVar3 * fVar3 + local_98 * local_98;
          fVar2 = point->z - local_90;
        }
        else {
          fVar2 = 1.0 / local_38;
          local_ec = local_ec * fVar2;
          local_e8 = local_e8 * fVar2;
          local_e4 = local_e4 * fVar2;
          local_24 = (point->z * local_e4 + point->y * local_e8 + point->x * local_ec) -
                     (local_90 * local_e4 + local_98 * local_ec + local_94 * local_e8);
          if (local_24 <= 0.0) goto LAB_0056aae9;
          if (local_24 < local_38) {
            local_8c = local_ec * local_24;
            local_88 = local_e8 * local_24;
            local_84 = local_e4 * local_24;
            local_e0 = local_ec * local_24;
            *(uint *)((int)&stack0xffffff24 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffff28 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            local_b0 = local_98 + local_e0;
            local_ac = fVar3 + local_dc;
            local_a8 = local_90 + local_d8;
            local_c8 = local_98 + local_e0;
            *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff54 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffff40 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff58 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            local_c8 = point->x - local_c8;
            fVar3 = point->y - local_c4;
            fVar3 = fVar3 * fVar3 + local_c8 * local_c8;
            fVar2 = point->z - local_c0;
          }
          else {
            local_d4 = point->x - local_d4;
            fVar3 = point->y - local_d0;
            fVar3 = fVar3 * fVar3 + local_d4 * local_d4;
            fVar2 = point->z - local_cc;
          }
        }
        local_1c = SQRT(fVar2 * fVar2 + fVar3);
        if (local_1c < local_34) {
          local_40 = iVar1;
          local_34 = local_1c;
        }
      }
      local_2c = (CSkeleton *)&local_2c->field_0x24;
      puVar4 = puVar4 + 0x30;
      local_30 = local_30 + 1;
    } while (local_30 < local_44->bone_count);
  }
  return local_40;
}
