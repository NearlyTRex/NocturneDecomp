// Name: core_charactr.cpp_CCharacter_FUN_0042ad00
// Address: 0042ad00
// Address Range: [[0042ad00, 0042af5a]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ad00(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ad00(CCharacter *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CSkeleton *pCVar4;
  int iVar5;
  int *extraout_EAX;
  int extraout_ECX;
  uchar *puVar6;
  int extraout_ECX_00;
  int iVar7;
  CCharacter *pCVar8;
  int extraout_EDX;
  uchar *puVar9;
  uchar *puVar10;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModel *pCVar11;
  double dVar12;
  float local_30;
  CDeformableModel *local_20;
  int local_1c;
  
  if (*(int *)(this_ptr->cloth_data + 0x478) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,&DAT_0066e784);
  this_ptr_00 = &this_ptr->model;
  if (*(int *)(this_ptr->cloth_data + 0x8d40) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
              (this_ptr_00,-1,0xc9,0,1);
    return;
  }
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = (this_ptr->model).cached_skinned_lod_index;
  iVar5 = 0;
  if (0 < pCVar4->bone_count) {
    iVar7 = 0;
    do {
      *(uint *)((int)&DAT_00823c54 + iVar7) = 0;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < pCVar4->bone_count);
  }
  fVar3 = 0x40400000;
  iVar5 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
    fVar2 = (float)65535;
    pCVar8 = this_ptr;
    do {
      (&DAT_00823c54)[*(int *)(pCVar8->cloth_data + 0x488)] =
           (float)(&DAT_00823c54)[*(int *)(pCVar8->cloth_data + 0x488)] +
           (*(float *)(pCVar8->cloth_data + 0x498) * fVar2) / fVar3;
      iVar5 = iVar5 + 1;
      pCVar8 = (CCharacter *)((pCVar8->base_actor).actor_name + 0x18);
    } while (iVar5 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  iVar5 = 0;
  iVar7 = 0;
  pCVar11 = local_20;
  if (0 < pCVar4->bone_count) {
    do {
      if ((float)65535 <= (float)(&DAT_00823c54)[iVar5]) {
        iVar7 = iVar7 + 1;
      }
      if (pCVar11->farthest_child_bone[0] == -1) {
        iVar7 = iVar7 + 1;
      }
      iVar5 = iVar5 + 1;
      pCVar11 = (CDeformableModel *)pCVar11->lod_info;
    } while (iVar5 < pCVar4->bone_count);
  }
  if (iVar7 == pCVar4->bone_count) {
    this_ptr->cloth_data[0x8d44] = '\0';
    this_ptr->cloth_data[0x8d45] = '\0';
    this_ptr->cloth_data[0x8d46] = -0x80;
    this_ptr->cloth_data[0x8d47] = '?';
    this_ptr->cloth_data[0x8d40] = '\x01';
    this_ptr->cloth_data[0x8d41] = '\0';
    this_ptr->cloth_data[0x8d42] = '\0';
    this_ptr->cloth_data[0x8d43] = '\0';
  }
  local_1c = 0;
  for (iVar5 = 0; iVar5 < local_20->vertex_count[iVar1]; iVar5 = iVar5 + 1) {
    puVar10 = local_20->vertex_data_ptr[iVar1]->bone_indices + local_1c + -1;
    local_30 = 0.0;
    iVar7 = 0;
    puVar6 = puVar10;
    puVar9 = puVar10;
    while (iVar7 < (int)(uint)*puVar10) {
      dVar12 = crt_math_c_round_FUN_005fe6b0
                         ((double)(*(float *)(puVar6 + 4) * (float)(&DAT_00823c54)[puVar9[1]]));
      puVar6 = (uchar *)(extraout_ECX + 4);
      puVar9 = puVar9 + 1;
      local_30 = (float)(int)ROUND(dVar12) + 6.123774e-39;
      iVar7 = extraout_EDX + 1;
    }
    if ((float)65535 < local_30) {
      local_30 = 65535.0;
    }
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)local_30);
    local_20 = (CDeformableModel *)(local_1c + 0x34);
    local_1c = extraout_ECX_00 + 0x30;
    *(int *)(*extraout_EAX + extraout_ECX_00 + 0x2c) = (int)ROUND(dVar12);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
            (&this_ptr->model,-1,0x163,0,1);
  return;
}
