// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// Address: 00499330
// Address Range: [[00499330, 004997c9]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00499729) */

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
  int iVar7;
  int iVar8;
  int iVar9;
  CDemonCube *pCVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  int local_88;
  float fStack_74;
  float local_6c;
  float local_5c;
  float local_58;
  int local_54;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  fVar13 = (float10)0.125f;
  fVar16 = ((float10)1 / ((float10)(this_ptr->cell_size).y * fVar13)) *
           ((float10)end_position->y - (float10)(this_ptr->bbox_min).y);
  fVar4 = end_position->x - start_position->x;
  fVar17 = ((float10)end_position->z - (float10)(this_ptr->bbox_min).z) *
           ((float10)1 / ((float10)(this_ptr->cell_size).z * fVar13));
  fVar5 = end_position->z - start_position->z;
  iVar12 = 1;
  dVar19 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)end_position->x - (float10)(this_ptr->bbox_min).x) *
                              ((float10)1 / ((float10)(this_ptr->cell_size).x * fVar13))));
  fVar13 = (float10)dVar19;
  iVar23 = 0x4993e3;
  crt_math_c_round_FUN_005fe6b0((double)fVar16);
  fVar22 = 6.757053e-39;
  crt_math_c_round_FUN_005fe6b0((double)fVar17);
  fVar17 = (float10)local_5c;
  fVar16 = (float10)local_58;
  fVar1 = (float)(int)ROUND(fVar13);
  fVar21 = 6.757102e-39;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)local_6c);
  fVar13 = (float10)dVar19;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar17);
  fVar17 = (float10)dVar19;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar16);
  fVar2 = (float)(int)ROUND(fVar13);
  fVar3 = (float)(int)ROUND(dVar19);
  iVar11 = local_24;
  iVar7 = local_20;
  iVar8 = local_1c;
  if (((fVar2 != fVar5) || ((float)(int)ROUND(fVar17) != fVar4)) || (fVar3 != fVar1)) {
    fVar6 = SQRT(fVar22 * fVar22 + fVar21 * fVar21 + 0.0);
    if (fVar6 <= 0.0) {
      return 0;
    }
    fVar16 = (float10)6.757112e-39;
    fVar13 = (float10)2.684355e+08f / (float10)fVar6;
    fVar14 = ABS((float10)fVar21) * fVar13;
    fVar15 = ABS((float10)fVar22) * fVar13;
    dVar19 = crt_math_c_round_FUN_005fe6b0((double)(ABS(fVar16) * fVar13));
    fVar13 = (float10)0;
    dVar20 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
    fVar14 = (float10)dVar20;
    dVar20 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
    local_38 = (int)ROUND(dVar20);
    if (fVar16 < fVar13) {
      iVar9 = local_54 - local_88;
      fVar4 = fVar4 - (float)local_54;
    }
    else {
      iVar9 = local_88 - local_54;
      fVar4 = (float)(local_54 + 1) - fVar4;
    }
    fVar21 = (float)((int)ROUND(dVar19) + 1) - fStack_74;
    if (fVar6 < 0.0) {
      iVar12 = (int)fVar2 - (int)fVar5;
      fVar1 = fVar1 - (float)(int)fVar2;
    }
    else {
      iVar12 = (int)fVar5 - (int)fVar2;
      fVar1 = (float)((int)fVar2 + 1) - fVar1;
    }
    iVar12 = iVar9 + 1 + (iVar23 - (int)ROUND(dVar19)) + iVar12;
    fVar13 = (float10)(int)ROUND(fVar14) * (float10)fVar1;
    fVar16 = (float10)local_38 * (float10)fVar4;
    fVar15 = (float10)local_38 * (float10)fVar21;
    fVar18 = (float10)(int)local_58 * (float10)fVar1;
    crt_math_c_round_FUN_005fe6b0
              ((double)((float10)(int)ROUND(fVar14) * (float10)fVar4 -
                       (float10)(int)local_58 * (float10)fVar21));
    crt_math_c_round_FUN_005fe6b0((double)(fVar13 - fVar15));
    crt_math_c_round_FUN_005fe6b0((double)(fVar16 - fVar18));
  }
  do {
    local_1c = iVar8;
    local_20 = iVar7;
    local_24 = iVar11;
    pCVar10 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                        (this_ptr,(int)((local_30 + (local_30 >> 0x1f) * -8) -
                                       (uint)((local_30 >> 0x1f) << 2 < 0)) >> 3,
                         (int)((local_2c + (local_2c >> 0x1f) * -8) -
                              (uint)((local_2c >> 0x1f) << 2 < 0)) >> 3,
                         (int)((local_24 + (local_24 >> 0x1f) * -8) -
                              (uint)((local_24 >> 0x1f) << 2 < 0)) >> 3);
    if (pCVar10 != (CDemonCube *)0x0) {
      if ((pCVar10->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar10->voxel_buffer1->voxels[local_24 % 8][local_2c % 8] &
          g_VoxelYBitMasks[local_30 % 8]) != 0)) {
        return 1;
      }
    }
    iVar12 = iVar12 + -1;
    if (iVar12 < 1) {
      return 0;
    }
    iVar11 = local_24 + (int)ROUND(fVar17);
    iVar7 = local_20 + local_38;
    iVar8 = local_1c - local_34;
    if (local_28 < 0) {
      if (local_1c < 0) {
        local_30 = local_30 + local_40;
        local_28 = local_28 + local_38;
        iVar11 = local_24;
        iVar7 = local_20;
        iVar8 = local_1c + (int)fVar3;
      }
    }
    else if (-1 < local_20) {
      local_2c = local_2c + (int)fVar2;
      local_28 = local_28 - local_34;
      iVar11 = local_24;
      iVar7 = local_20 - (int)fVar3;
      iVar8 = local_1c;
    }
  } while( true );
}
