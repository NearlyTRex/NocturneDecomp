// Name: core_charactr.cpp_CCharacter_renderBurn_FUN_0042ad00
// Address: 0042ad00
// MANUAL RECONSTRUCTION
// Address Range: [[0042ad00, 0042af5a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_0042ad00(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_0042ad00(CCharacter *this_ptr)

{
  CSkeleton *pCVar6;
  CDeformableModel *pCVar7;
  int iVar8;
  int iVar1;
  uchar *puVar9;
  int iVar2;
  uchar *puVar12;
  uchar *puVar13;
  CDeformableModelInstance *this_ptr_00;
  float local_30;
  int local_1c;
  float *pfVar2;
  uchar *puVar1;
  float fVar4;
  int iVar3;
  float fVar5;
  
  if (this_ptr->fire_count == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&SMRGLTextureBasic_0066e784);
  this_ptr_00 = &this_ptr->model;
  if (this_ptr->is_fully_burned != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
              (this_ptr_00,-1,0xc9,0,1);
    return;
  }
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar3 = (this_ptr->model).cached_skinned_lod_index;
  for (iVar8 = 0; iVar8 < pCVar6->bone_count; iVar8++) {
    g_BoneBurnIntensity[iVar8] = 0.0f;
  }
  fVar5 = 3.0f;
  iVar1 = 0;
  if (0 < this_ptr->fire_count) {
    fVar4 = (float)65535;
    do {
      iVar2 = this_ptr->fires[iVar1].bone_index;
      g_BoneBurnIntensity[iVar2] =
           g_BoneBurnIntensity[iVar2] + (this_ptr->fires[iVar1].size * fVar4) / fVar5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->fire_count);
  }
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < pCVar6->bone_count; iVar1++) {
    if ((float)65535 <= g_BoneBurnIntensity[iVar1]) {
      iVar2 = iVar2 + 1;
    }
    if (pCVar7->farthest_child_bone[iVar1] == -1) {
      iVar2 = iVar2 + 1;
    }
  }
  if (iVar2 == pCVar6->bone_count) {
    this_ptr->burn_alpha = 1.0;
    this_ptr->is_fully_burned = 1;
  }
  local_1c = 0;
  for (iVar1 = 0; iVar1 < pCVar7->vertex_count[iVar3]; iVar1 = iVar1 + 1) {
    puVar13 = pCVar7->vertex_data_ptr[iVar3]->bone_indices + local_1c + -1;
    local_30 = 0.0;
    puVar9 = puVar13;
    puVar12 = puVar13;
    for (iVar2 = 0; iVar2 < (int)(uint)*puVar13; iVar2 = iVar2 + 1) {
      puVar1 = puVar12 + 1;
      pfVar2 = (float *)(puVar9 + 4);
      puVar9 = puVar9 + 4;
      puVar12 = puVar12 + 1;
      local_30 = (float)(int)ROUND(ROUND(*pfVar2 * g_BoneBurnIntensity[*puVar1])) + local_30;
    }
    if ((float)65535 < local_30) {
      local_30 = 65535.0;
    }
    local_1c = local_1c + 0x34;
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar1].a = (int)ROUND(ROUND(local_30));
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
            (&this_ptr->model,-1,0x163,0,1);
  return;
}
