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
/* WARNING: Removing unreachable block (ram,0x00499501) */
/* WARNING: Removing unreachable block (ram,0x00499729) */
/* WARNING: Removing unreachable block (ram,0x00499525) */
/* WARNING: Removing unreachable block (ram,0x00499751) */
/* WARNING: Removing unreachable block (ram,0x0049953a) */
/* WARNING: Removing unreachable block (ram,0x0049955e) */

int __cdecl
core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
          (CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  CDemonCube *pCVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  float local_6c;
  float local_5c;
  float local_58;
  int local_54;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  fVar13 = (float10)0.125f;
  fVar14 = (float10)1 / ((float10)(this_ptr->cell_size).y * fVar13);
  fVar16 = (float10)1 / ((float10)(this_ptr->cell_size).z * fVar13);
  fVar2 = (float)(((float10)start_position->y - (float10)(this_ptr->bbox_min).y) * fVar14);
  fVar14 = fVar14 * ((float10)end_position->y - (float10)(this_ptr->bbox_min).y);
  fVar3 = end_position->x;
  fVar4 = start_position->x;
  fVar15 = ((float10)end_position->z - (float10)(this_ptr->bbox_min).z) * fVar16;
  fVar5 = end_position->z;
  fVar6 = start_position->z;
  iVar12 = 1;
  fVar7 = (float)(((float10)start_position->z - (float10)(this_ptr->bbox_min).z) * fVar16);
  dVar17 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)end_position->x - (float10)(this_ptr->bbox_min).x) *
                              ((float10)1 / ((float10)(this_ptr->cell_size).x * fVar13))));
  fVar13 = (float10)dVar17;
  crt_math_c_round_FUN_005fe6b0((double)fVar14);
  crt_math_c_round_FUN_005fe6b0((double)fVar15);
  fVar14 = (float10)local_5c;
  fVar15 = (float10)local_58;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)local_6c);
  fVar16 = (float10)dVar17;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
  fVar14 = (float10)dVar17;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
  fVar1 = (float)(int)ROUND(fVar16);
  local_44 = (float)(int)ROUND(fVar14);
  local_3c = (int)ROUND(dVar17);
  if (((fVar1 == fVar5 - fVar6) && (local_44 == fVar3 - fVar4)) &&
     (iVar8 = local_38, iVar11 = local_34, iVar9 = local_30, local_3c == (int)ROUND(fVar13))) {
    while( true ) {
      local_30 = iVar9;
      local_34 = iVar11;
      local_38 = iVar8;
      pCVar10 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                          (this_ptr,(int)(((int)fVar1 + ((int)fVar1 >> 0x1f) * -8) -
                                         (uint)(((int)fVar1 >> 0x1f) << 2 < 0)) >> 3,
                           (int)(((int)local_44 + ((int)local_44 >> 0x1f) * -8) -
                                (uint)(((int)local_44 >> 0x1f) << 2 < 0)) >> 3,
                           (int)((local_3c + (local_3c >> 0x1f) * -8) -
                                (uint)((local_3c >> 0x1f) << 2 < 0)) >> 3);
      if (pCVar10 != (CDemonCube *)0x0) {
        if ((pCVar10->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar10->voxel_buffer1->voxels[local_38 % 8][local_40 % 8] &
            g_VoxelYBitMasks[(int)local_44 % 8]) != 0)) {
          return 1;
        }
      }
      iVar12 = iVar12 + -1;
      if (iVar12 < 1) break;
      iVar11 = local_34 + (int)fVar7;
      iVar8 = local_38 + (int)local_58;
      iVar9 = local_30 - (int)fVar1;
      if (local_3c < 0) {
        if (local_30 < 0) {
          local_44 = (float)((int)local_44 + local_54);
          local_3c = local_3c + (int)fVar7;
          iVar8 = local_38;
          iVar11 = local_34;
          iVar9 = local_30 + (int)fVar2;
        }
      }
      else if (-1 < local_34) {
        local_40 = local_40 + (int)local_5c;
        local_3c = local_3c - (int)fVar1;
        iVar8 = local_38;
        iVar11 = local_34 - (int)fVar2;
        iVar9 = local_30;
      }
    }
  }
  return 0;
}
