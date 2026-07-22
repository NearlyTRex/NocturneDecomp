// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0
// Address: 0046b1b0
// Address Range: [[0046b1b0, 0046b649]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0046b5a9) */
/* WARNING: Removing unreachable block (ram,0x0046b2ed) */
/* WARNING: Removing unreachable block (ram,0x0046b581) */
/* WARNING: Removing unreachable block (ram,0x0046b348) */
/* WARNING: Removing unreachable block (ram,0x0046b36c) */
/* WARNING: Removing unreachable block (ram,0x0046b381) */
/* WARNING: Removing unreachable block (ram,0x0046b3a5) */
/* WARNING: Removing unreachable block (ram,0x0046b3ba) */
/* WARNING: Removing unreachable block (ram,0x0046b5d1) */
/* WARNING: Removing unreachable block (ram,0x0046b3de) */

uint __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0(int param_1,float *param_2,float *param_3)

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
  int *piVar11;
  float fVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  int iStack_74;
  float local_6c;
  int local_68;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
  
  fVar1 = param_2[1];
  fVar12 = *(float *)(param_1 + 0x14);
  fVar8 = *(float *)(param_1 + 0x2c) * 0.125f;
  fVar2 = param_2[2];
  fVar3 = *(float *)(param_1 + 0x18);
  local_60 = (*param_2 - *(float *)(param_1 + 0x10)) *
             (1.0 / (*(float *)(param_1 + 0x28) * 0.125f));
  fVar9 = *(float *)(param_1 + 0x30) * 0.125f;
  fVar4 = *param_3;
  fVar5 = *param_2;
  fVar6 = param_3[2];
  fVar7 = param_2[2];
  iVar13 = 1;
  fVar14 = (float10)round();
  fVar15 = (float10)round();
  fVar16 = (float10)round();
  fVar17 = (float10)round((float10)local_6c);
  fVar18 = (float10)round((float10)local_5c);
  fVar19 = (float10)round((float10)local_58);
  if ((((float)(int)ROUND(fVar17) == fVar6 - fVar7) && ((float)(int)ROUND(fVar18) == fVar4 - fVar5))
     && (iVar10 = local_54, fVar1 = (fVar1 - fVar12) * (1.0 / fVar8),
        fVar12 = (fVar2 - fVar3) * (1.0 / fVar9), (int)ROUND(fVar19) == (int)ROUND(fVar14))) {
    while( true ) {
      local_4c = fVar12;
      local_50 = fVar1;
      local_54 = iVar10;
      piVar11 = (int *)core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                                 (param_1,(int)(((int)local_60 + ((int)local_60 >> 0x1f) * -8) -
                                               (uint)(((int)local_60 >> 0x1f) << 2 < 0)) >> 3,
                                  (int)(((int)local_5c + ((int)local_5c >> 0x1f) * -8) -
                                       (uint)(((int)local_5c >> 0x1f) << 2 < 0)) >> 3,
                                  (int)((local_54 + (local_54 >> 0x1f) * -8) -
                                       (uint)((local_54 >> 0x1f) << 2 < 0)) >> 3);
      if (piVar11 != (int *)0x0) {
        if ((*piVar11 != 0) &&
           ((*(byte *)((local_54 % 8) * 8 + (int)local_5c % 8 + *piVar11) &
            (&DAT_005b6d08)[(int)local_60 % 8]) != 0)) {
          return 1;
        }
      }
      iVar13 = iVar13 + -1;
      if (iVar13 < 1) break;
      fVar12 = (float)((int)local_4c - (int)ROUND(fVar16));
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
        local_5c = (float)((int)local_5c + (int)ROUND(fVar15));
        local_58 = (float)((int)local_58 - (int)ROUND(fVar16));
        iVar10 = local_54;
        fVar1 = (float)((int)local_50 - (int)local_6c);
        fVar12 = local_4c;
      }
    }
  }
  return 0;
}
