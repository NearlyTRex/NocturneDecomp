// Name: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004c3760
// Address: 004c3760
// Address Range: [[004c3760, 004c391b]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760(int param_1,int param_2)

#include "nocturne.h"

void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_30;
  
  iVar2 = *(int *)(param_2 + 0x18);
  piVar1 = (int *)(*(int *)(param_2 + 0x1c) * 0xc + param_1);
  iVar3 = *(int *)(param_2 + 0x20);
  fVar10 = (float)(piVar1[2] - *(int *)(param_1 + 8 + iVar2 * 0xc));
  fVar5 = (float)(*(int *)(param_1 + iVar3 * 0xc) - *piVar1);
  fVar9 = (float)(*piVar1 - *(int *)(param_1 + iVar2 * 0xc));
  fVar11 = (float)(*(int *)(param_1 + 4 + iVar3 * 0xc) - piVar1[1]);
  fVar7 = (float)(piVar1[1] - *(int *)(param_1 + 4 + iVar2 * 0xc));
  fVar6 = (float)(*(int *)(param_1 + 8 + iVar3 * 0xc) - piVar1[2]);
  fVar8 = fVar7 * fVar6 - fVar11 * fVar10;
  fVar6 = fVar5 * fVar10 - fVar9 * fVar6;
  fVar5 = fVar9 * fVar11 - fVar5 * fVar7;
  local_30 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar8 * fVar8);
  if (ABS(local_30) == 0.0) {
    local_30 = 65535.0;
  }
  local_30 = 1.0 / local_30;
  iVar4 = *(int *)(param_2 + 0x18);
  fVar9 = (float)65535;
  fVar7 = fVar8 * local_30 * fVar9;
  fVar6 = fVar6 * local_30 * fVar9;
  iVar2 = *(int *)(param_1 + 4 + iVar4 * 0xc);
  iVar3 = *(int *)(param_1 + iVar4 * 0xc);
  fVar9 = fVar5 * local_30 * fVar9;
  iVar4 = *(int *)(param_1 + 8 + iVar4 * 0xc);
  fVar12 = (float10)round((float10)fVar7);
  fVar13 = (float10)round((float10)fVar6);
  fVar14 = (float10)round((float10)fVar9);
  *(int *)(param_2 + 8) = (int)ROUND(fVar12);
  *(int *)(param_2 + 0xc) = (int)ROUND(fVar13);
  *(int *)(param_2 + 0x10) = (int)ROUND(fVar14);
  fVar12 = (float10)round
                              ((float10)iVar4 * (float10)fVar9 +
                               (float10)iVar3 * (float10)fVar7 + (float10)iVar2 * (float10)fVar6);
  *(int *)(param_2 + 0x14) = (int)ROUND(fVar12);
  return;
}
