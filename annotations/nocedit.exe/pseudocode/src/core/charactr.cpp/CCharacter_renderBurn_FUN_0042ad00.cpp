// Name: core_charactr.cpp_CCharacter_renderBurn_FUN_0042ad00
// Address: 0042ad00
// Address Range: [[0042ad00, 0042af5a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_0042ad00(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_0042ad00(CCharacter *this_ptr)

{
  uchar *puVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  CSkeleton *pCVar6;
  CDeformableModel *pCVar7;
  int iVar8;
  uchar *puVar9;
  int iVar10;
  CCharacter *pCVar11;
  uchar *puVar12;
  uchar *puVar13;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModel *pCVar14;
  float local_30;
  int local_1c;
  int local_18;
  
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
  iVar8 = 0;
  if (0 < pCVar6->bone_count) {
    iVar10 = 0;
    do {
      *(uint *)((int)&DAT_00823c54 + iVar10) = 0;
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar8 < pCVar6->bone_count);
  }
  fVar5 = 3.0f;
  iVar8 = 0;
  if (0 < this_ptr->fire_count) {
    fVar4 = (float)65535;
    pCVar11 = this_ptr;
    do {
      iVar10 = pCVar11->fire_effects[0].bone_index;
      (&DAT_00823c54)[iVar10] =
           (float)(&DAT_00823c54)[iVar10] + (pCVar11->fire_effects[0].size * fVar4) / fVar5;
      iVar8 = iVar8 + 1;
      pCVar11 = (CCharacter *)((pCVar11->base).actor_name + 0x18);
    } while (iVar8 < this_ptr->fire_count);
  }
  iVar8 = 0;
  iVar10 = 0;
  pCVar14 = pCVar7;
  if (0 < pCVar6->bone_count) {
    do {
      if ((float)65535 <= (float)(&DAT_00823c54)[iVar8]) {
        iVar10 = iVar10 + 1;
      }
      if (pCVar14->farthest_child_bone[0] == -1) {
        iVar10 = iVar10 + 1;
      }
      iVar8 = iVar8 + 1;
      pCVar14 = (CDeformableModel *)pCVar14->lod_info;
    } while (iVar8 < pCVar6->bone_count);
  }
  if (iVar10 == pCVar6->bone_count) {
    this_ptr->burn_alpha = 1.0;
    this_ptr->is_fully_burned = 1;
  }
  local_1c = 0;
  local_18 = 0;
  for (iVar8 = 0; iVar8 < pCVar7->vertex_count[iVar3]; iVar8 = iVar8 + 1) {
    puVar13 = pCVar7->vertex_data_ptr[iVar3]->bone_indices + local_1c + -1;
    local_30 = 0.0;
    puVar9 = puVar13;
    puVar12 = puVar13;
    for (iVar10 = 0; iVar10 < (int)(uint)*puVar13; iVar10 = iVar10 + 1) {
      puVar1 = puVar12 + 1;
      pfVar2 = (float *)(puVar9 + 4);
      puVar9 = puVar9 + 4;
      puVar12 = puVar12 + 1;
      local_30 = (float)(int)ROUND(ROUND(*pfVar2 * (float)(&DAT_00823c54)[*puVar1])) + local_30;
    }
    if ((float)65535 < local_30) {
      local_30 = 65535.0;
    }
    local_1c = local_1c + 0x34;
    *(int *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->fog + local_18) =
         (int)ROUND(ROUND(local_30));
    local_18 = local_18 + 0x30;
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
            (&this_ptr->model,-1,0x163,0,1);
  return;
}
