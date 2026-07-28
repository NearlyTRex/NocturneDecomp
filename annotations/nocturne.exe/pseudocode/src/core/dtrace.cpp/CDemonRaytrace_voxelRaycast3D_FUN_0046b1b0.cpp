// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0
// Address: 0046b1b0
// Address Range: [[0046b1b0, 0046b649]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0046b5a9) */
/* WARNING: Removing unreachable block (ram,0x0046b2ed) */
/* WARNING: Removing unreachable block (ram,0x0046b348) */
/* WARNING: Removing unreachable block (ram,0x0046b581) */
/* WARNING: Removing unreachable block (ram,0x0046b36c) */
/* WARNING: Removing unreachable block (ram,0x0046b381) */
/* WARNING: Removing unreachable block (ram,0x0046b3a5) */
/* WARNING: Removing unreachable block (ram,0x0046b3ba) */
/* WARNING: Removing unreachable block (ram,0x0046b5d1) */
/* WARNING: Removing unreachable block (ram,0x0046b3de) */

int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  CDemonCube *pCVar16;
  float fVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int iStack_74;
  float local_6c;
  int local_68;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
  
  fVar12 = 1.0 / ((this_ptr->cell_size).x * 0.125f);
  fVar1 = start_position->y;
  fVar17 = (this_ptr->bbox_min).y;
  fVar14 = 1.0 / ((this_ptr->cell_size).y * 0.125f);
  fVar2 = start_position->z;
  fVar3 = (this_ptr->bbox_min).z;
  local_60 = (start_position->x - (this_ptr->bbox_min).x) * fVar12;
  fVar13 = 1.0 / ((this_ptr->cell_size).z * 0.125f);
  fVar4 = end_position->y;
  fVar5 = (this_ptr->bbox_min).y;
  fVar6 = end_position->z;
  fVar7 = end_position->x;
  fVar8 = start_position->x;
  fVar9 = (this_ptr->bbox_min).z;
  fVar10 = end_position->z;
  fVar11 = start_position->z;
  iVar18 = 1;
  dVar19 = round
                     ((double)((end_position->x - (this_ptr->bbox_min).x) * fVar12));
  dVar20 = round((double)(fVar14 * (fVar4 - fVar5)));
  dVar21 = round((double)((fVar6 - fVar9) * fVar13));
  dVar22 = round((double)local_6c);
  dVar23 = round((double)local_5c);
  dVar24 = round((double)local_58);
  if ((((float)(int)ROUND(dVar22) == fVar10 - fVar11) &&
      ((float)(int)ROUND(dVar23) == fVar7 - fVar8)) &&
     (iVar15 = local_54, fVar1 = (fVar1 - fVar17) * fVar14, fVar17 = (fVar2 - fVar3) * fVar13,
     (int)ROUND(dVar24) == (int)ROUND(dVar19))) {
    while( true ) {
      local_4c = fVar17;
      local_50 = fVar1;
      local_54 = iVar15;
      pCVar16 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                          (this_ptr,(int)(((int)local_60 + ((int)local_60 >> 0x1f) * -8) -
                                         (uint)(((int)local_60 >> 0x1f) << 2 < 0)) >> 3,
                           (int)(((int)local_5c + ((int)local_5c >> 0x1f) * -8) -
                                (uint)(((int)local_5c >> 0x1f) << 2 < 0)) >> 3,
                           (int)((local_54 + (local_54 >> 0x1f) * -8) -
                                (uint)((local_54 >> 0x1f) << 2 < 0)) >> 3);
      if (pCVar16 != (CDemonCube *)0x0) {
        if ((pCVar16->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar16->voxel_buffer1->voxels[local_54 % 8][(int)local_5c % 8] &
            (&DAT_005b6d08)[(int)local_60 % 8]) != 0)) {
          return 1;
        }
      }
      iVar18 = iVar18 + -1;
      if (iVar18 < 1) break;
      fVar17 = (float)((int)local_4c - (int)ROUND(dVar21));
      iVar15 = local_54 + iStack_74;
      fVar1 = (float)((int)local_50 + local_68);
      if ((int)local_58 < 0) {
        if ((int)local_4c < 0) {
          local_60 = (float)((int)local_60 + (int)ROUND(dVar19));
          local_58 = (float)((int)local_58 + local_68);
          iVar15 = local_54;
          fVar1 = local_50;
          fVar17 = (float)((int)local_4c + (int)local_6c);
        }
      }
      else if (-1 < (int)local_50) {
        local_5c = (float)((int)local_5c + (int)ROUND(dVar20));
        local_58 = (float)((int)local_58 - (int)ROUND(dVar21));
        iVar15 = local_54;
        fVar1 = (float)((int)local_50 - (int)local_6c);
        fVar17 = local_4c;
      }
    }
  }
  return 0;
}
