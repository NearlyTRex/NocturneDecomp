// Name: core_charactr.cpp_CCharacter_FUN_0042ad00
// Address: 0042ad00
// Address Range: [[0042ad00, 0042af5a]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ad00(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ad00(CCharacter *this_ptr)

{
  int iVar1;
  SVert *pSVar2;
  float fVar3;
  float fVar4;
  CSkeleton *pCVar5;
  CDeformableModel *pCVar6;
  int iVar7;
  int extraout_ECX;
  SVert *pSVar8;
  int extraout_ECX_00;
  int iVar9;
  CCharacter *pCVar10;
  SVert *pSVar11;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModel *pCVar12;
  float10 fVar13;
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
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = (this_ptr->model).cached_skinned_lod_index;
  iVar7 = 0;
  if (0 < pCVar5->bone_count) {
    iVar9 = 0;
    do {
      *(uint *)((int)&DAT_00823c54 + iVar9) = 0;
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 < pCVar5->bone_count);
  }
  fVar4 = DAT_0065b830;
  iVar7 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
    fVar3 = (float)65535;
    pCVar10 = this_ptr;
    do {
      (&DAT_00823c54)[*(int *)(pCVar10->cloth_data + 0x488)] =
           (float)(&DAT_00823c54)[*(int *)(pCVar10->cloth_data + 0x488)] +
           (*(float *)(pCVar10->cloth_data + 0x498) * fVar3) / fVar4;
      iVar7 = iVar7 + 1;
      pCVar10 = (CCharacter *)((pCVar10->base_actor).actor_name + 0x18);
    } while (iVar7 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  iVar7 = 0;
  iVar9 = 0;
  pCVar12 = pCVar6;
  if (0 < pCVar5->bone_count) {
    do {
      if ((float)65535 <= (float)(&DAT_00823c54)[iVar7]) {
        iVar9 = iVar9 + 1;
      }
      if (pCVar12->farthest_child_bone[0] == -1) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar12 = (CDeformableModel *)pCVar12->lod_info;
    } while (iVar7 < pCVar5->bone_count);
  }
  if (iVar9 == pCVar5->bone_count) {
    this_ptr->cloth_data[0x8d44] = '\0';
    this_ptr->cloth_data[0x8d45] = '\0';
    this_ptr->cloth_data[0x8d46] = -0x80;
    this_ptr->cloth_data[0x8d47] = '?';
    this_ptr->cloth_data[0x8d40] = '\x01';
    this_ptr->cloth_data[0x8d41] = '\0';
    this_ptr->cloth_data[0x8d42] = '\0';
    this_ptr->cloth_data[0x8d43] = '\0';
  }
  for (iVar7 = 0; iVar7 < pCVar6->vertex_count[iVar1]; iVar7 = iVar7 + 1) {
    pSVar2 = pCVar6->vertex_data_ptr[iVar1];
    local_24 = 0.0;
    iVar9 = 0;
    pSVar8 = pSVar2;
    pSVar11 = pSVar2;
    while (iVar9 < (int)(uint)pSVar2->num_bone_influences) {
      fVar13 = (float10)pSVar8->bone_weights[0] *
               (float10)(float)(&DAT_00823c54)[pSVar11->bone_indices[0]];
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar9,(uint)pSVar11->bone_indices[0]))
      ;
      pSVar8 = (SVert *)(extraout_ECX + 4);
      pSVar11 = (SVert *)pSVar11->bone_indices;
      local_24 = (float)(int)ROUND(fVar13) + local_24;
      iVar9 = (int)((ulonglong)dVar14 >> 0x20) + 1;
    }
    if ((float)65535 < local_24) {
      local_24 = 65535.0;
    }
    fVar13 = (float10)local_24;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar9,g_CDemonRendererPtr));
    *(int *)(*SUB84 /* extract 2-byte value */(dVar14,0) + extraout_ECX_00 + 0x2c) = (int)ROUND(fVar13);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
            (&this_ptr->model,-1,0x163,0,1);
  return;
}
