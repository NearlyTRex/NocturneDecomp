// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0048e9b0
// Address: 0048e9b0
// Address Range: [[0048e9b0, 0048ee8e]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0048e9b0(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048ede2) */
/* WARNING: Removing unreachable block (ram,0x0048edb4) */
/* WARNING: Removing unreachable block (ram,0x0048ee10) */

int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0048e9b0(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

{
  int iVar1;
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
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float local_98;
  float local_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  float local_2c;
  
  fVar8 = (this_ptr->cell_size).y * 0.125f;
  fVar9 = (this_ptr->cell_size).z * 0.125f;
  fVar2 = end_position->z;
  fVar3 = end_position->y;
  fVar4 = (this_ptr->bbox_min).y;
  fVar5 = (this_ptr->bbox_min).z;
  iVar13 = 1;
  fVar6 = end_position->x - start_position->x;
  fVar7 = end_position->y - start_position->y;
  local_80 = end_position->z - start_position->z;
  dVar14 = round
                     ((double)((end_position->x - (this_ptr->bbox_min).x) *
                              (1.0 / ((this_ptr->cell_size).x * 0.125f))));
  dVar15 = round((double)((fVar3 - fVar4) * (1.0 / fVar8)));
  dVar16 = round((double)((fVar2 - fVar5) * (1.0 / fVar9)));
  local_70 = (int)ROUND(dVar14);
  iStack_74 = (int)ROUND(dVar16);
  dVar14 = round((double)fStack_7c);
  dVar16 = round((double)local_2c);
  dVar17 = round((double)fStack_78);
  fVar2 = (float)(int)ROUND(dVar14);
  if (((fVar2 != fStack_7c) || ((float)(int)ROUND(dVar16) != fStack_78)) ||
     (iVar1 = local_5c, iVar12 = local_58, iVar10 = local_54, (float)(int)ROUND(dVar17) != local_80)
     ) {
    fVar3 = SQRT(local_98 * local_98 + 0.0);
    if (fVar3 <= 0.0) {
      return 0;
    }
    fVar3 = 2.684355e+08f / fVar3;
    dVar14 = round((double)(fVar3 * 6.69626e-39));
    iVar1 = (int)ROUND(dVar14);
    dVar14 = round((double)(fVar3 * 6.69625e-39));
    dVar16 = round((double)(ABS(local_98) * fVar3));
    local_60 = (int)ROUND(dVar14);
    local_68 = (int)ROUND(dVar16);
    fVar3 = (float)(iVar1 + 1) - fVar6;
    local_70 = 1;
    fStack_7c = (float)(local_58 + 1) - (float)(int)ROUND(dVar17);
    fVar4 = (float)((int)fVar2 + 1) - fVar7;
    iStack_74 = 1;
    iVar13 = ((int)fVar6 - iVar1) + 1 + ((int)fVar7 - local_58) + ((int)local_80 - (int)fVar2);
    dVar14 = round
                       ((double)((float)local_60 * fVar3 - (float)local_64 * fStack_7c));
    round((double)((float)local_60 * fVar4 - (float)local_68 * fStack_7c));
    dVar16 = round
                       ((double)((float)local_68 * fVar3 - (float)local_64 * fVar4));
    local_80 = fVar3;
    iVar12 = (int)ROUND(dVar14);
    iVar10 = (int)ROUND(dVar16);
  }
  do {
    local_54 = iVar10;
    local_58 = iVar12;
    local_5c = iVar1;
    pCVar11 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
                        (this_ptr,(int)((local_68 + (local_68 >> 0x1f) * -8) -
                                       (uint)((local_68 >> 0x1f) << 2 < 0)) >> 3,
                         (int)((local_64 + (local_64 >> 0x1f) * -8) -
                              (uint)((local_64 >> 0x1f) << 2 < 0)) >> 3,
                         (int)((local_5c + (local_5c >> 0x1f) * -8) -
                              (uint)((local_5c >> 0x1f) << 2 < 0)) >> 3);
    if (pCVar11 != (CDemonCube *)0x0) {
      if ((pCVar11->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar11->voxel_buffer1->voxels[local_5c % 8][local_64 % 8] &
          g_UCHAR_ARRAY_0061ab68[local_68 % 8]) != 0)) {
        return 1;
      }
    }
    iVar13 = iVar13 + -1;
    if (iVar13 < 1) {
      return 0;
    }
    iVar12 = local_58 + (int)ROUND(dVar15);
    iVar1 = local_5c + (int)local_80;
    iVar10 = local_54 - local_70;
    if (local_60 < 0) {
      if (local_54 < 0) {
        local_68 = local_68 + (int)fStack_7c;
        local_60 = local_60 + (int)ROUND(dVar15);
        iVar1 = local_5c;
        iVar12 = local_58;
        iVar10 = local_54 + iStack_74;
      }
    }
    else if (-1 < local_58) {
      local_64 = local_64 + (int)fVar7;
      local_60 = local_60 - local_70;
      iVar1 = local_5c;
      iVar12 = local_58 - iStack_74;
      iVar10 = local_54;
    }
  } while( true );
}
