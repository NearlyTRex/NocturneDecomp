// Name: core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
// Address: 0044bdd0
// MANUAL RECONSTRUCTION
// Address Range: [[0044bdd0, 0044bfa2]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0(SFogGrid *fog_ptr,CVector3i *start_pos,CVector3i *end_pos,int ray_length)

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0(SFogGrid *fog_ptr,CVector3i *start_pos,CVector3i *end_pos,int ray_length)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  uint local_14;
  longlong lVar1;
  
  if (ray_length == 0) {
    local_14 = 0;
  }
  else {
    iVar2 = ray_length / 0x100;
    local_14 = 0;
    if (iVar2 != 0) {
      local_14 = 0;
      local_2c = start_pos->x + (fog_ptr->sampling_offset).x;
      local_28 = start_pos->y + (fog_ptr->sampling_offset).y;
      iVar5 = 0;
      local_24 = start_pos->z + (fog_ptr->sampling_offset).z;
      if (0 < iVar2) {
        do {
          lVar1 = (longlong)fog_ptr->density_multiplier *
                  (longlong)
                  (int)(uint)(byte)fog_ptr->planes
                                   [local_24 / 0x100 & 0xf].grid
                                   [local_28 / 0x100 & 0xf]
                                   [local_2c / 0x100 & 0xf];
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          iVar1 = fog_ptr->height_threshold;
          if (iVar1 != 0) {
            if (iVar1 < local_28) {
              iVar4 = 0;
            }
            else if (local_28 < 0) {
              iVar4 = 0x10000;
            }
            else {
              iVar4 = (int)((longlong)
                            ((((longlong)(iVar1 - local_28) & 0xffffffffffffU) >> 0x10) << 0x20 |
                            (longlong)(iVar1 - local_28) * 0x10000 & 0xffffffffU) / (longlong)iVar1)
              ;
            }
            uVar3 = (uint)((longlong)iVar4 * (longlong)(int)uVar3) >> 0x10 |
                    (int)((ulonglong)((longlong)iVar4 * (longlong)(int)uVar3) >> 0x20) << 0x10;
          }
          local_14 = local_14 + uVar3;
          if (0x4000 < local_14) {
            return 0x4000;
          }
          local_2c = local_2c + (end_pos->x - start_pos->x) / iVar2;
          iVar5 = iVar5 + 1;
          local_28 = local_28 + (end_pos->y - start_pos->y) / iVar2;
          local_24 = local_24 + (end_pos->z - start_pos->z) / iVar2;
        } while (iVar5 < iVar2);
      }
    }
  }
  return local_14;
}
