// Name: core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80
// Address: 00426e80
// Address Range: [[00426e80, 004270da]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_00426e80(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_00426e80(CCharacter *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *pCVar4;
  CSkeleton *pCVar5;
  int iVar6;
  uchar *puVar7;
  int iVar8;
  CCharacter *pCVar9;
  uchar *puVar10;
  uchar *puVar11;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModel *pCVar12;
  double dVar13;
  float local_30;
  CDeformableModel *local_20;
  int local_1c;
  int local_18;
  
  if (this_ptr->fire_count == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005ad1fc);
  this_ptr_00 = &this_ptr->model;
  if (this_ptr->is_fully_burned != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
              (this_ptr_00,-1,0xc9,0,1);
    return;
  }
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr_00);
  iVar1 = (this_ptr->model).cached_skinned_lod_index;
  iVar6 = 0;
  if (0 < pCVar5->bone_count) {
    iVar8 = 0;
    do {
      *(uint *)((int)&DAT_00765aa0 + iVar8) = 0;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar6 < pCVar5->bone_count);
  }
  fVar3 = 3.0f;
  iVar6 = 0;
  if (0 < this_ptr->fire_count) {
    fVar2 = (float)65535;
    pCVar9 = this_ptr;
    do {
      iVar8 = pCVar9->fires[0].bone_index;
      (&DAT_00765aa0)[iVar8] =
           (float)(&DAT_00765aa0)[iVar8] + (pCVar9->fires[0].size * fVar2) / fVar3;
      iVar6 = iVar6 + 1;
      pCVar9 = (CCharacter *)((pCVar9->base).actor_name + 0x18);
    } while (iVar6 < this_ptr->fire_count);
  }
  iVar6 = 0;
  iVar8 = 0;
  pCVar12 = local_20;
  if (0 < pCVar5->bone_count) {
    do {
      if ((float)65535 <= (float)(&DAT_00765aa0)[iVar6]) {
        iVar8 = iVar8 + 1;
      }
      if (pCVar12->farthest_child_bone[0] == -1) {
        iVar8 = iVar8 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar12 = (CDeformableModel *)pCVar12->lod_info;
    } while (iVar6 < pCVar5->bone_count);
  }
  if (iVar8 == pCVar5->bone_count) {
    this_ptr->burn_alpha = 1.0;
    this_ptr->is_fully_burned = 1;
  }
  local_1c = 0;
  local_18 = 0;
  for (iVar6 = 0; iVar6 < local_20->vertex_count[iVar1]; iVar6 = iVar6 + 1) {
    puVar11 = local_20->vertex_data_ptr[iVar1]->bone_indices + local_1c + -1;
    local_30 = 0.0;
    puVar7 = puVar11;
    puVar10 = puVar11;
    for (iVar8 = 0; pCVar4 = DAT_005ae704, iVar8 < (int)(uint)*puVar11; iVar8 = iVar8 + 1) {
      dVar13 = round
                         ((double)(*(float *)(puVar7 + 4) * (float)(&DAT_00765aa0)[puVar10[1]]));
      local_18 = (int)ROUND(dVar13);
      puVar7 = puVar7 + 4;
      puVar10 = puVar10 + 1;
      local_30 = (float)local_18 + 6.101353e-39;
    }
    if ((float)65535 < local_30) {
      local_30 = 65535.0;
    }
    dVar13 = round((double)local_30);
    local_20 = (CDeformableModel *)(local_1c + 0x34);
    local_1c = local_18 + 0x30;
    *(int *)((int)&pCVar4->vertex_buffer_ptr->a + local_18) = (int)ROUND(dVar13);
    local_18 = (int)ROUND(dVar13);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
            (&this_ptr->model,-1,0x163,0,1);
  return;
}
