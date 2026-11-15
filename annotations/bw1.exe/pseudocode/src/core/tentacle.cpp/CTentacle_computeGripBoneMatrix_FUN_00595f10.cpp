// Name: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00595f10
// Address: 00595f10
// Address Range: [[00595f10, 00595ffb]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00595f10(CTentacle *this_ptr,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00595f10(CTentacle *this_ptr,CMatrix3x4f *out_matrix)

{
  int iVar1;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  uint local_fc [12];
  uint local_cc [12];
  uint local_9c [12];
  uint local_6c [12];
  float local_3c [12];
  
  bVar6 = 0;
  core_xform_cpp_lerpMatrix3x4_FUN_005b72c0
            ((this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02c83880,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02c83884,
             0x3f000000);
  puVar2 = local_6c;
  puVar4 = local_cc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005b72c0
            ((this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02c83888,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_02c8388c,
             0x3f000000);
  puVar2 = local_fc;
  puVar4 = local_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(local_cc,local_9c,0x3f000000);
  pfVar3 = local_3c;
  pCVar5 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  return out_matrix;
}
