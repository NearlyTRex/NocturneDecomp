// Name: core_charactr.cpp_FUN_004264d0
// Address: 004264d0
// Address Range: [[004264d0, 0042672a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_004264d0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_004264d0(CCharacter *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CSkeleton *pCVar4;
  CDeformableModel *pCVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  byte *pbVar8;
  int extraout_ECX_00;
  int iVar9;
  CCharacter *pCVar10;
  int extraout_EDX;
  byte *pbVar11;
  byte *pbVar12;
  byte *this_ptr_00;
  CDeformableModel *pCVar13;
  float10 fVar14;
  float local_30;
  int local_1c;
  
  if (*(int *)&this_ptr->field_0x3564 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00609acc);
  this_ptr_00 = &this_ptr->field_0x2b4;
  if (*(int *)&this_ptr->field_0x10224 != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
              ((CDeformableModelInstance *)this_ptr_00,-1,0xc9,0,1);
    return;
  }
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     ((CDeformableModelInstance *)this_ptr_00);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                     ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = *(int *)&this_ptr->field_0x24e4;
  iVar6 = 0;
  if (0 < *(int *)&pCVar4->field_0x1d1f8) {
    iVar9 = 0;
    do {
      *(uint *)((int)&DAT_007bdc9c + iVar9) = 0;
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar6 < *(int *)&pCVar4->field_0x1d1f8);
  }
  fVar3 = 0x40400000;
  iVar6 = 0;
  if (0 < *(int *)&this_ptr->field_0x3564) {
    fVar2 = (float)_DAT_005ccd9e;
    pCVar10 = this_ptr;
    do {
      (&DAT_007bdc9c)[*(int *)&pCVar10->field_0x3574] =
           (float)(&DAT_007bdc9c)[*(int *)&pCVar10->field_0x3574] +
           (*(float *)&pCVar10->field_0x3584 * fVar2) / fVar3;
      iVar6 = iVar6 + 1;
      pCVar10 = (CCharacter *)&pCVar10->field_0x18;
    } while (iVar6 < *(int *)&this_ptr->field_0x3564);
  }
  iVar6 = 0;
  iVar9 = 0;
  pCVar13 = pCVar5;
  if (0 < *(int *)&pCVar4->field_0x1d1f8) {
    do {
      if ((float)_DAT_005ccd9e <= (float)(&DAT_007bdc9c)[iVar6]) {
        iVar9 = iVar9 + 1;
      }
      if (*(int *)&pCVar13->field_0x288c == -1) {
        iVar9 = iVar9 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar13 = (CDeformableModel *)&pCVar13->field_0x4;
    } while (iVar6 < *(int *)&pCVar4->field_0x1d1f8);
  }
  if (iVar9 == *(int *)&pCVar4->field_0x1d1f8) {
    *(uint *)&this_ptr->field_0x10228 = 0x3f800000;
    *(uint *)&this_ptr->field_0x10224 = 1;
  }
  local_1c = 0;
  for (iVar6 = 0; iVar6 < *(int *)(&pCVar5->field_0x2c + iVar1 * 4); iVar6 = iVar6 + 1) {
    pbVar12 = (byte *)(*(int *)(&pCVar5->field_0x40 + iVar1 * 4) + local_1c);
    local_30 = 0.0;
    iVar9 = 0;
    pbVar8 = pbVar12;
    pbVar11 = pbVar12;
    while (iVar9 < (int)(uint)*pbVar12) {
      fVar14 = (float10)*(float *)(pbVar8 + 4) * (float10)(float)(&DAT_007bdc9c)[pbVar11[1]];
      round();
      pbVar8 = (byte *)(extraout_ECX + 4);
      pbVar11 = pbVar11 + 1;
      local_30 = (float)(int)ROUND(fVar14) + local_30;
      iVar9 = extraout_EDX + 1;
    }
    if ((float)_DAT_005ccd9e < local_30) {
      local_30 = 65535.0;
    }
    fVar14 = (float10)local_30;
    piVar7 = (int *)round();
    local_1c = local_1c + 0x34;
    *(int *)(*piVar7 + extraout_ECX_00 + 0x2c) = (int)ROUND(fVar14);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4,-1,0x163,0,1);
  return;
}
