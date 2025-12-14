// Name: core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
// Address: 0044bdd0
// Address Range: [[0044bdd0, 0044bfa2]]
// Convention: __cdecl
// Signature: uint core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0(SFogGrid * fog_ptr, CVector3i * start_pos, CVector3i * end_pos, int ray_length)

#include "nocturne.h"

uint __cdecl
core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
          (SFogGrid *fog_ptr,CVector3i *start_pos,CVector3i *end_pos,int ray_length)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  uint local_14;
  
  if (ray_length == 0) {
    local_14 = 0;
  }
  else {
    iVar2 = (int)((ray_length + (ray_length >> 0x1f) * -0x100) -
                 (uint)((ray_length >> 0x1f) << 7 < 0)) >> 8;
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
                                   [(int)((local_24 + (local_24 >> 0x1f) * -0x100) -
                                         (uint)((local_24 >> 0x1f) << 7 < 0)) >> 8 & 0xf].grid
                                   [(int)((local_28 + (local_28 >> 0x1f) * -0x100) -
                                         (uint)((local_28 >> 0x1f) << 7 < 0)) >> 8 & 0xf]
                                   [(int)((local_2c + (local_2c >> 0x1f) * -0x100) -
                                         (uint)((local_2c >> 0x1f) << 7 < 0)) >> 8 & 0xf];
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          iVar4 = fog_ptr->height_threshold;
          if (iVar4 != 0) {
            if (iVar4 < local_28) {
              iVar4 = 0;
            }
            else if (local_28 < 0) {
              iVar4 = 0x10000;
            }
            else {
              iVar4 = (int)(((longlong)(iVar4 - local_28) * 0x10000) / (longlong)iVar4);
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
