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
  CDeformableModel *pCVar5;
  int iVar6;
  int *extraout_EAX;
  int extraout_ECX;
  uchar *puVar7;
  int extraout_ECX_00;
  int iVar8;
  CCharacter *pCVar9;
  int iVar10;
  int extraout_EDX;
  uchar *puVar11;
  uchar *puVar12;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModel *pCVar13;
  double dVar14;
  float local_24;
  
  if (*(int *)(this_ptr->cloth_data + 0x478) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0066e784);
  this_ptr_00 = &this_ptr->model;
  if (*(int *)(this_ptr->cloth_data + 0x8d40) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
              (this_ptr_00,-1,0xc9,0,1);
    return;
  }
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = (this_ptr->model).cached_skinned_lod_index;
  iVar6 = 0;
  if (0 < pCVar4->bone_count) {
    iVar8 = 0;
    do {
      *(uint *)((int)&DAT_00823c54 + iVar8) = 0;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar6 < pCVar4->bone_count);
  }
  fVar3 = DAT_0065b830;
  iVar6 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
    fVar2 = (float)65535;
    pCVar9 = this_ptr;
    do {
      (&DAT_00823c54)[*(int *)(pCVar9->cloth_data + 0x488)] =
           (float)(&DAT_00823c54)[*(int *)(pCVar9->cloth_data + 0x488)] +
           (*(float *)(pCVar9->cloth_data + 0x498) * fVar2) / fVar3;
      iVar6 = iVar6 + 1;
      pCVar9 = (CCharacter *)((pCVar9->base_actor).actor_name + 0x18);
    } while (iVar6 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  iVar6 = 0;
  iVar8 = 0;
  pCVar13 = pCVar5;
  if (0 < pCVar4->bone_count) {
    do {
      if ((float)65535 <= (float)(&DAT_00823c54)[iVar6]) {
        iVar8 = iVar8 + 1;
      }
      if (pCVar13->farthest_child_bone[0] == -1) {
        iVar8 = iVar8 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar13 = (CDeformableModel *)pCVar13->lod_info;
    } while (iVar6 < pCVar4->bone_count);
  }
  if (iVar8 == pCVar4->bone_count) {
    this_ptr->cloth_data[0x8d44] = '\0';
    this_ptr->cloth_data[0x8d45] = '\0';
    this_ptr->cloth_data[0x8d46] = -0x80;
    this_ptr->cloth_data[0x8d47] = '?';
    this_ptr->cloth_data[0x8d40] = '\x01';
    this_ptr->cloth_data[0x8d41] = '\0';
    this_ptr->cloth_data[0x8d42] = '\0';
    this_ptr->cloth_data[0x8d43] = '\0';
  }
  iVar6 = 0;
  for (iVar8 = 0; iVar8 < pCVar5->vertex_count[iVar1]; iVar8 = iVar8 + 1) {
    puVar12 = pCVar5->vertex_data_ptr[iVar1]->bone_indices + iVar6 + -1;
    local_24 = 0.0;
    iVar10 = 0;
    puVar7 = puVar12;
    puVar11 = puVar12;
    while (iVar10 < (int)(uint)*puVar12) {
      dVar14 = crt_math_c_round_FUN_005fe6b0
                         ((double)(*(float *)(puVar7 + 4) * (float)(&DAT_00823c54)[puVar11[1]]));
      puVar7 = (uchar *)(extraout_ECX + 4);
      puVar11 = puVar11 + 1;
      local_24 = (float)(int)ROUND(dVar14) + local_24;
      iVar10 = extraout_EDX + 1;
    }
    if ((float)65535 < local_24) {
      local_24 = 65535.0;
    }
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)local_24);
    iVar6 = iVar6 + 0x34;
    *(int *)(*extraout_EAX + extraout_ECX_00 + 0x2c) = (int)ROUND(dVar14);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
            (&this_ptr->model,-1,0x163,0,1);
  return;
}
