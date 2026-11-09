// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_004764c0
// Address: 004764c0
// Address Range: [[004764c0, 0047699e]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_004764c0(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_004764c0(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  CDemonCube *pCVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  int local_54;
  int local_50;
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  fVar16 = (float10)_DAT_005d1d27;
  fVar19 = (float10)1 / ((float10)*(float *)&this_ptr->field_0x28 * fVar16);
  fVar20 = (float10)1 / ((float10)*(float *)&this_ptr->field_0x2c * fVar16);
  fVar2 = (float)(((float10)*(float *)start_position - (float10)*(float *)&this_ptr->field_0x10) *
                 fVar19);
  fVar21 = (float10)1 / ((float10)*(float *)&this_ptr->field_0x30 * fVar16);
  fVar19 = ((float10)*(float *)end_position - (float10)*(float *)&this_ptr->field_0x10) * fVar19;
  fVar3 = (float)(((float10)*(float *)&start_position->field_0x4 -
                  (float10)*(float *)&this_ptr->field_0x14) * fVar20);
  fVar20 = ((float10)*(float *)&end_position->field_0x4 - (float10)*(float *)&this_ptr->field_0x14)
           * fVar20;
  fVar16 = ((float10)*(float *)&end_position->field_0x8 - (float10)*(float *)&this_ptr->field_0x18)
           * fVar21;
  iVar15 = 1;
  fVar5 = *(float *)end_position - *(float *)start_position;
  fVar6 = *(float *)&end_position->field_0x4 - *(float *)&start_position->field_0x4;
  fVar7 = *(float *)&end_position->field_0x8 - *(float *)&start_position->field_0x8;
  fVar4 = (float)(((float10)*(float *)&start_position->field_0x8 -
                  (float10)*(float *)&this_ptr->field_0x18) * fVar21);
  round();
  round();
  round();
  fVar21 = (float10)fVar2;
  fVar17 = (float10)fVar3;
  fVar18 = (float10)fVar4;
  iVar11 = (int)ROUND(fVar19);
  iVar12 = (int)ROUND(fVar20);
  iVar13 = (int)ROUND(fVar16);
  round();
  round();
  round();
  local_38 = (int)ROUND(fVar21);
  local_34 = (int)ROUND(fVar17);
  iVar1 = (int)ROUND(fVar18);
  if (((local_38 != iVar11) || (local_34 != iVar12)) ||
     (iVar9 = local_28, iVar10 = local_24, iVar1 != iVar13)) {
    fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    if (fVar8 <= 0.0) {
      return 0;
    }
    fVar19 = (float10)fVar5;
    fVar21 = (float10)_DAT_005d1d2b / (float10)fVar8;
    fVar16 = ABS(fVar19) * fVar21;
    fVar20 = ABS((float10)fVar6) * fVar21;
    fVar21 = ABS((float10)fVar7) * fVar21;
    round();
    local_40 = (int)ROUND(fVar16);
    fVar16 = (float10)0;
    round();
    round();
    local_3c = (int)ROUND(fVar20);
    local_44 = (int)ROUND(fVar21);
    if (fVar19 < fVar16) {
      iVar11 = local_38 - iVar11;
      fVar2 = fVar2 - (float)local_38;
      local_4c = -1;
    }
    else {
      iVar11 = iVar11 - local_38;
      fVar2 = (float)(local_38 + 1) - fVar2;
      local_4c = 1;
    }
    if (fVar6 < 0.0) {
      iVar12 = local_34 - iVar12;
      fVar3 = fVar3 - (float)local_34;
      local_54 = -1;
    }
    else {
      iVar12 = iVar12 - local_34;
      fVar3 = (float)(local_34 + 1) - fVar3;
      local_54 = 1;
    }
    if (fVar7 < 0.0) {
      iVar13 = iVar1 - iVar13;
      fVar4 = fVar4 - (float)iVar1;
      local_50 = -1;
    }
    else {
      iVar13 = iVar13 - iVar1;
      fVar4 = (float)(iVar1 + 1) - fVar4;
      local_50 = 1;
    }
    iVar15 = iVar11 + 1 + iVar12 + iVar13;
    fVar20 = (float10)local_3c * (float10)fVar4;
    fVar21 = (float10)local_44 * (float10)fVar2;
    fVar16 = (float10)local_44 * (float10)fVar3;
    fVar19 = (float10)local_3c * (float10)fVar2 - (float10)local_40 * (float10)fVar3;
    fVar17 = (float10)local_40 * (float10)fVar4;
    round();
    fVar20 = fVar20 - fVar16;
    local_30 = (int)ROUND(fVar19);
    round();
    fVar21 = fVar21 - fVar17;
    round();
    iVar9 = (int)ROUND(fVar20);
    iVar10 = (int)ROUND(fVar21);
  }
  do {
    local_24 = iVar10;
    local_28 = iVar9;
    local_2c = iVar1;
    pCVar14 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                        (this_ptr,(int)((local_38 + (local_38 >> 0x1f) * -8) -
                                       (uint)((local_38 >> 0x1f) << 2 < 0)) >> 3,
                         (int)((local_34 + (local_34 >> 0x1f) * -8) -
                              (uint)((local_34 >> 0x1f) << 2 < 0)) >> 3,
                         (int)((local_2c + (local_2c >> 0x1f) * -8) -
                              (uint)((local_2c >> 0x1f) << 2 < 0)) >> 3);
    if (pCVar14 != (CDemonCube *)0x0) {
      if ((*(int *)pCVar14 != 0) &&
         ((*(byte *)(*(int *)pCVar14 + (local_2c % 8) * 8 + local_34 % 8) &
          (&DAT_00613888)[local_38 % 8]) != 0)) {
        return 1;
      }
    }
    iVar15 = iVar15 + -1;
    if (iVar15 < 1) {
      return 0;
    }
    iVar1 = local_2c + local_50;
    iVar9 = local_28 + local_3c;
    iVar10 = local_24 - local_40;
    if (local_30 < 0) {
      if (local_24 < 0) {
        local_38 = local_38 + local_4c;
        local_30 = local_30 + local_3c;
        iVar1 = local_2c;
        iVar9 = local_28;
        iVar10 = local_24 + local_44;
      }
    }
    else if (-1 < local_28) {
      local_34 = local_34 + local_54;
      local_30 = local_30 - local_40;
      iVar1 = local_2c;
      iVar9 = local_28 - local_44;
      iVar10 = local_24;
    }
  } while( true );
}
