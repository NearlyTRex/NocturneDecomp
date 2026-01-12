// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// Address: 00499330
// Address Range: [[00499330, 004997c9]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049946d) */
/* WARNING: Removing unreachable block (ram,0x00499701) */
/* WARNING: Removing unreachable block (ram,0x004994c8) */
/* WARNING: Removing unreachable block (ram,0x004994ec) */
/* WARNING: Removing unreachable block (ram,0x00499729) */
/* WARNING: Removing unreachable block (ram,0x00499501) */
/* WARNING: Removing unreachable block (ram,0x00499525) */
/* WARNING: Removing unreachable block (ram,0x0049953a) */
/* WARNING: Removing unreachable block (ram,0x00499751) */
/* WARNING: Removing unreachable block (ram,0x0049955e) */

int __cdecl
core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
          (CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonCube *pCVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  int local_6c;
  int local_64;
  float local_54;
  int local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  fVar6 = (float10)0.125f;
  fVar8 = ((float10)1 / ((float10)(this_ptr->cell_size).y * fVar6)) *
          ((float10)end_position->y - (float10)(this_ptr->bbox_min).y);
  fVar9 = ((float10)end_position->z - (float10)(this_ptr->bbox_min).z) *
          ((float10)1 / ((float10)(this_ptr->cell_size).z * fVar6));
  iVar5 = 1;
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)end_position->x - (float10)(this_ptr->bbox_min).x) *
                              ((float10)1 / ((float10)(this_ptr->cell_size).x * fVar6))));
  fVar6 = (float10)dVar10;
  crt_math_c_round_FUN_005fe6b0((double)fVar8);
  crt_math_c_round_FUN_005fe6b0((double)fVar9);
  fVar9 = (float10)local_44;
  fVar8 = (float10)local_40;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)local_54);
  fVar7 = (float10)dVar10;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  fVar9 = (float10)dVar10;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  local_30 = (int)ROUND(fVar7);
  local_2c = (int)ROUND(fVar9);
  if (((local_30 == local_64) && (local_2c == local_6c)) &&
     (iVar1 = (int)ROUND(dVar10), iVar2 = local_20, iVar3 = local_1c,
     (int)ROUND(dVar10) == (int)ROUND(fVar6))) {
    while( true ) {
      local_1c = iVar3;
      local_20 = iVar2;
      local_24 = iVar1;
      pCVar4 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                         (this_ptr,(int)((local_30 + (local_30 >> 0x1f) * -8) -
                                        (uint)((local_30 >> 0x1f) << 2 < 0)) >> 3,
                          (int)((local_2c + (local_2c >> 0x1f) * -8) -
                               (uint)((local_2c >> 0x1f) << 2 < 0)) >> 3,
                          (int)((local_24 + (local_24 >> 0x1f) * -8) -
                               (uint)((local_24 >> 0x1f) << 2 < 0)) >> 3);
      if (pCVar4 != (CDemonCube *)0x0) {
        if ((pCVar4->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar4->voxel_buffer1->voxels[local_24 % 8][local_2c % 8] &
            g_VoxelYBitMasks[local_30 % 8]) != 0)) {
          return 1;
        }
      }
      iVar5 = iVar5 + -1;
      if (iVar5 < 1) break;
      iVar1 = local_24 + (int)local_44;
      iVar2 = local_20 + local_38;
      iVar3 = local_1c - local_34;
      if (local_28 < 0) {
        if (local_1c < 0) {
          local_30 = local_30 + (int)local_40;
          local_28 = local_28 + local_38;
          iVar1 = local_24;
          iVar2 = local_20;
          iVar3 = local_1c + local_3c;
        }
      }
      else if (-1 < local_20) {
        local_2c = local_2c + local_48;
        local_28 = local_28 - local_34;
        iVar1 = local_24;
        iVar2 = local_20 - local_3c;
        iVar3 = local_1c;
      }
    }
  }
  return 0;
}
