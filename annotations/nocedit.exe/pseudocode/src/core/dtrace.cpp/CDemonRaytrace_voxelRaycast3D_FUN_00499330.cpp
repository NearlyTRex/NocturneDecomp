// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// Address: 00499330
// Address Range: [[00499330, 004997c9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00499729) */
/* WARNING: Removing unreachable block (ram,0x0049946d) */
/* WARNING: Removing unreachable block (ram,0x00499701) */
/* WARNING: Removing unreachable block (ram,0x004994c8) */
/* WARNING: Removing unreachable block (ram,0x004994ec) */
/* WARNING: Removing unreachable block (ram,0x00499501) */
/* WARNING: Removing unreachable block (ram,0x00499525) */
/* WARNING: Removing unreachable block (ram,0x0049953a) */
/* WARNING: Removing unreachable block (ram,0x00499751) */
/* WARNING: Removing unreachable block (ram,0x0049955e) */

int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  CDemonCube *pCVar11;
  float fVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  int iStack_74;
  float local_6c;
  int local_68;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
  
  fVar14 = (float10)0.125f;
  fVar15 = (float10)1 / ((float10)(this_ptr->cell_size).x * fVar14);
  fVar1 = start_position->y;
  fVar12 = (this_ptr->bbox_min).y;
  fVar16 = (float10)1 / ((float10)(this_ptr->cell_size).y * fVar14);
  fVar2 = start_position->z;
  fVar3 = (this_ptr->bbox_min).z;
  fVar18 = (float10)1 / ((float10)(this_ptr->cell_size).z * fVar14);
  local_60 = (float)(((float10)start_position->x - (float10)(this_ptr->bbox_min).x) * fVar15);
  fVar17 = fVar16 * ((float10)end_position->y - (float10)(this_ptr->bbox_min).y);
  fVar4 = end_position->z;
  fVar5 = end_position->x;
  fVar6 = start_position->x;
  fVar7 = (this_ptr->bbox_min).z;
  fVar8 = end_position->z;
  fVar9 = start_position->z;
  iVar13 = 1;
  dVar19 = round
                     ((double)(((float10)end_position->x - (float10)(this_ptr->bbox_min).x) * fVar15
                              ));
  fVar14 = (float10)dVar19;
  dVar19 = round((double)fVar17);
  dVar20 = round((double)(((float10)fVar4 - (float10)fVar7) * fVar18));
  fVar15 = (float10)local_58;
  dVar21 = round((double)local_6c);
  dVar22 = round((double)local_5c);
  fVar17 = (float10)dVar22;
  dVar22 = round((double)fVar15);
  if ((((float)(int)ROUND(dVar21) == fVar8 - fVar9) && ((float)(int)ROUND(fVar17) == fVar5 - fVar6))
     && (iVar10 = local_54, fVar1 = (float)(((float10)fVar1 - (float10)fVar12) * fVar16),
        fVar12 = (float)(((float10)fVar2 - (float10)fVar3) * fVar18),
        (int)ROUND(dVar22) == (int)ROUND(fVar14))) {
    while( true ) {
      local_4c = fVar12;
      local_50 = fVar1;
      local_54 = iVar10;
      pCVar11 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                          (this_ptr,(int)(((int)local_60 + ((int)local_60 >> 0x1f) * -8) -
                                         (uint)(((int)local_60 >> 0x1f) << 2 < 0)) >> 3,
                           (int)(((int)local_5c + ((int)local_5c >> 0x1f) * -8) -
                                (uint)(((int)local_5c >> 0x1f) << 2 < 0)) >> 3,
                           (int)((local_54 + (local_54 >> 0x1f) * -8) -
                                (uint)((local_54 >> 0x1f) << 2 < 0)) >> 3);
      if (pCVar11 != (CDemonCube *)0x0) {
        if ((pCVar11->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar11->voxel_buffer1->voxels[local_54 % 8][(int)local_5c % 8] &
            g_VoxelYBitMasks[(int)local_60 % 8]) != 0)) {
          return 1;
        }
      }
      iVar13 = iVar13 + -1;
      if (iVar13 < 1) break;
      fVar12 = (float)((int)local_4c - (int)ROUND(dVar20));
      iVar10 = local_54 + iStack_74;
      fVar1 = (float)((int)local_50 + local_68);
      if ((int)local_58 < 0) {
        if ((int)local_4c < 0) {
          local_60 = (float)((int)local_60 + (int)ROUND(fVar14));
          local_58 = (float)((int)local_58 + local_68);
          iVar10 = local_54;
          fVar1 = local_50;
          fVar12 = (float)((int)local_4c + (int)local_6c);
        }
      }
      else if (-1 < (int)local_50) {
        local_5c = (float)((int)local_5c + (int)ROUND(dVar19));
        local_58 = (float)((int)local_58 - (int)ROUND(dVar20));
        iVar10 = local_54;
        fVar1 = (float)((int)local_50 - (int)local_6c);
        fVar12 = local_4c;
      }
    }
  }
  return 0;
}
