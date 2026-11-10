// Name: core_charactr.cpp_CCharacter_renderBurn_FUN_0042fe00
// Address: 0042fe00
// Address Range: [[0042fe00, 0043005a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_0042fe00(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_0042fe00(CCharacter *this_ptr)

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
  CDeformableModelInstance *this_ptr_00;
  CDeformableModel *pCVar13;
  float10 fVar14;
  float local_30;
  int local_1c;
  
  if (this_ptr->fire_count == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_00610cdc);
  this_ptr_00 = &this_ptr->model;
  if (this_ptr->is_fully_burned != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
              (this_ptr_00,-1,0xc9,0,1);
    return;
  }
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  iVar1 = (this_ptr->model).cached_skinned_lod_index;
  iVar6 = 0;
  if (0 < pCVar4->bone_count) {
    iVar9 = 0;
    do {
      *(uint *)((int)&DAT_007c6384 + iVar9) = 0;
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar6 < pCVar4->bone_count);
  }
  fVar3 = 0x40400000;
  iVar6 = 0;
  if (0 < this_ptr->fire_count) {
    fVar2 = (float)_DAT_005d5a27;
    pCVar10 = this_ptr;
    do {
      iVar9 = *(int *)&pCVar10->fires[0].field_0x4;
      (&DAT_007c6384)[iVar9] =
           (float)(&DAT_007c6384)[iVar9] + (*(float *)&pCVar10->fires[0].field_0x14 * fVar2) / fVar3
      ;
      iVar6 = iVar6 + 1;
      pCVar10 = (CCharacter *)((pCVar10->base).actor_name + 0x18);
    } while (iVar6 < this_ptr->fire_count);
  }
  iVar6 = 0;
  iVar9 = 0;
  pCVar13 = pCVar5;
  if (0 < pCVar4->bone_count) {
    do {
      if ((float)_DAT_005d5a27 <= (float)(&DAT_007c6384)[iVar6]) {
        iVar9 = iVar9 + 1;
      }
      if (pCVar13->farthest_child_bone[0] == -1) {
        iVar9 = iVar9 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar13 = (CDeformableModel *)pCVar13->lod_info;
    } while (iVar6 < pCVar4->bone_count);
  }
  if (iVar9 == pCVar4->bone_count) {
    this_ptr->burn_alpha = 1.0;
    this_ptr->is_fully_burned = 1;
  }
  local_1c = 0;
  for (iVar6 = 0; iVar6 < pCVar5->vertex_count[iVar1]; iVar6 = iVar6 + 1) {
    pbVar12 = &pCVar5->vertex_data_ptr[iVar1]->field_0x0 + local_1c;
    local_30 = 0.0;
    iVar9 = 0;
    pbVar8 = pbVar12;
    pbVar11 = pbVar12;
    while (iVar9 < (int)(uint)*pbVar12) {
      fVar14 = (float10)*(float *)(pbVar8 + 4) * (float10)(float)(&DAT_007c6384)[pbVar11[1]];
      round();
      pbVar8 = (byte *)(extraout_ECX + 4);
      pbVar11 = pbVar11 + 1;
      local_30 = (float)(int)ROUND(fVar14) + local_30;
      iVar9 = extraout_EDX + 1;
    }
    if ((float)_DAT_005d5a27 < local_30) {
      local_30 = 65535.0;
    }
    fVar14 = (float10)local_30;
    piVar7 = (int *)round();
    local_1c = local_1c + 0x34;
    *(int *)(*piVar7 + extraout_ECX_00 + 0x2c) = (int)ROUND(fVar14);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
            (&this_ptr->model,-1,0x163,0,1);
  return;
}
