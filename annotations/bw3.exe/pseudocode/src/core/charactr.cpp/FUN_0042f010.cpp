// Name: core_charactr.cpp_FUN_0042f010
// Address: 0042f010
// Address Range: [[0042f010, 0042f27a]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042f010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042f010(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CSkeleton *pCVar4;
  CDeformableModel *pCVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  uchar *puVar8;
  int extraout_ECX_00;
  int iVar9;
  int extraout_EDX;
  uchar *puVar10;
  uchar *puVar11;
  CDeformableModelInstance *this_ptr;
  CDeformableModel *pCVar12;
  float10 fVar13;
  float local_30;
  int local_1c;
  
  if (*(int *)(param_1 + 0x33a0) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005f0f5c);
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  if (*(int *)(param_1 + 0xbc68) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0(this_ptr,-1,0xc9,0,1);
    return;
  }
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar1 = *(int *)(param_1 + 0x2478);
  iVar6 = 0;
  if (0 < pCVar4->bone_count) {
    iVar9 = 0;
    do {
      *(uint *)((int)&DAT_007e2cf4 + iVar9) = 0;
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar6 < pCVar4->bone_count);
  }
  fVar3 = 0x40400000;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x33a0)) {
    fVar2 = (float)_DAT_005b836e;
    iVar9 = param_1;
    do {
      (&DAT_007e2cf4)[*(int *)(iVar9 + 0x33b0)] =
           (float)(&DAT_007e2cf4)[*(int *)(iVar9 + 0x33b0)] +
           (*(float *)(iVar9 + 0x33c0) * fVar2) / fVar3;
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 0x18;
    } while (iVar6 < *(int *)(param_1 + 0x33a0));
  }
  iVar6 = 0;
  iVar9 = 0;
  pCVar12 = pCVar5;
  if (0 < pCVar4->bone_count) {
    do {
      if ((float)_DAT_005b836e <= (float)(&DAT_007e2cf4)[iVar6]) {
        iVar9 = iVar9 + 1;
      }
      if (pCVar12->farthest_child_bone[0] == -1) {
        iVar9 = iVar9 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar12 = (CDeformableModel *)pCVar12->lod_info;
    } while (iVar6 < pCVar4->bone_count);
  }
  if ((iVar9 == pCVar4->bone_count) && (*(int *)(param_1 + 0x2538) < 0x40a00000)) {
    *(uint *)(param_1 + 0xbc6c) = 0x3f800000;
    *(uint *)(param_1 + 0xbc68) = 1;
  }
  local_1c = 0;
  for (iVar6 = 0; iVar6 < pCVar5->vertex_count[iVar1]; iVar6 = iVar6 + 1) {
    puVar11 = pCVar5->vertex_data_ptr[iVar1]->bone_indices + local_1c + -1;
    local_30 = 0.0;
    iVar9 = 0;
    puVar8 = puVar11;
    puVar10 = puVar11;
    while (iVar9 < (int)(uint)*puVar11) {
      fVar13 = (float10)*(float *)(puVar8 + 4) * (float10)(float)(&DAT_007e2cf4)[puVar10[1]];
      round();
      puVar8 = (uchar *)(extraout_ECX + 4);
      puVar10 = puVar10 + 1;
      local_30 = (float)(int)ROUND(fVar13) + local_30;
      iVar9 = extraout_EDX + 1;
    }
    if ((float)_DAT_005b836e < local_30) {
      local_30 = 65535.0;
    }
    fVar13 = (float10)local_30;
    piVar7 = (int *)round();
    local_1c = local_1c + 0x34;
    *(int *)(*piVar7 + extraout_ECX_00 + 0x2c) = (int)ROUND(fVar13);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
            ((CDeformableModelInstance *)(param_1 + 0x158),-1,0x163,0,1);
  return;
}
