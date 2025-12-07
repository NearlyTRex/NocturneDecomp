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
  float fVar8;
  int iVar9;
  int iVar10;
  CDemonCube *pCVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  double dVar18;
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
  
  fVar14 = (float10)0.125f;
  fVar15 = (float10)1 / ((float10)(this_ptr->cell_size).y * fVar14);
  fVar16 = (float10)1 / ((float10)(this_ptr->cell_size).z * fVar14);
  fVar1 = (float)(((float10)start_position->y - (float10)(this_ptr->bbox_min).y) * fVar15);
  fVar15 = fVar15 * ((float10)end_position->y - (float10)(this_ptr->bbox_min).y);
  fVar2 = end_position->z;
  fVar3 = end_position->x;
  fVar4 = start_position->x;
  fVar5 = (this_ptr->bbox_min).z;
  fVar6 = end_position->z;
  fVar7 = start_position->z;
  iVar13 = 1;
  fVar8 = (float)(((float10)start_position->z - (float10)(this_ptr->bbox_min).z) * fVar16);
  dVar17 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)end_position->x - (float10)(this_ptr->bbox_min).x) *
                              ((float10)1 / ((float10)(this_ptr->cell_size).x * fVar14))));
  fVar14 = (float10)dVar17;
  crt_math_c_round_FUN_005fe6b0((double)fVar15);
  crt_math_c_round_FUN_005fe6b0((double)(((float10)fVar2 - (float10)fVar5) * fVar16));
  fVar15 = (float10)local_58;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)local_6c);
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)local_5c);
  fVar16 = (float10)dVar18;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
  fVar2 = (float)(int)ROUND(dVar17);
  local_44 = (float)(int)ROUND(fVar16);
  local_3c = (int)ROUND(dVar18);
  if (((fVar2 == fVar6 - fVar7) && (local_44 == fVar3 - fVar4)) &&
     (iVar9 = local_38, iVar12 = local_34, iVar10 = local_30, local_3c == (int)ROUND(fVar14))) {
    while( true ) {
      local_30 = iVar10;
      local_34 = iVar12;
      local_38 = iVar9;
      pCVar11 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                          (this_ptr,(int)(((int)fVar2 + ((int)fVar2 >> 0x1f) * -8) -
                                         (uint)(((int)fVar2 >> 0x1f) << 2 < 0)) >> 3,
                           (int)(((int)local_44 + ((int)local_44 >> 0x1f) * -8) -
                                (uint)(((int)local_44 >> 0x1f) << 2 < 0)) >> 3,
                           (int)((local_3c + (local_3c >> 0x1f) * -8) -
                                (uint)((local_3c >> 0x1f) << 2 < 0)) >> 3);
      if (pCVar11 != (CDemonCube *)0x0) {
        if ((pCVar11->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar11->voxel_buffer1->voxels[local_38 % 8][local_40 % 8] &
            g_VoxelYBitMasks[(int)local_44 % 8]) != 0)) {
          return 1;
        }
      }
      iVar13 = iVar13 + -1;
      if (iVar13 < 1) break;
      iVar12 = local_34 + (int)fVar8;
      iVar9 = local_38 + (int)local_58;
      iVar10 = local_30 - (int)fVar2;
      if (local_3c < 0) {
        if (local_30 < 0) {
          local_44 = (float)((int)local_44 + local_54);
          local_3c = local_3c + (int)fVar8;
          iVar9 = local_38;
          iVar12 = local_34;
          iVar10 = local_30 + (int)fVar1;
        }
      }
      else if (-1 < local_34) {
        local_40 = local_40 + (int)local_5c;
        local_3c = local_3c - (int)fVar2;
        iVar9 = local_38;
        iVar12 = local_34 - (int)fVar1;
        iVar10 = local_30;
      }
    }
  }
  return 0;
}
