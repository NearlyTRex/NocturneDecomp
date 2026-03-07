// Name: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70
// Address: 005dbb70
// Address Range: [[005dbb70, 005dbc5b]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(CTentacle *this_ptr,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(CTentacle *this_ptr,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_fc;
  CMatrix3x4f local_cc;
  CMatrix3x4f local_9c;
  CMatrix3x4f local_6c;
  CMatrix3x4f local_3c;
  
  bVar4 = 0;
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03f6cd08,
             (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03f6cd0c,0.5,
             &local_6c);
  pCVar2 = &local_6c;
  pCVar3 = &local_cc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03f6cd10,
             (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03f6cd14,0.5,
             &local_fc);
  pCVar2 = &local_fc;
  pCVar3 = &local_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *(float *)pCVar2;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_cc,&local_9c,0.5,&local_3c);
  pCVar2 = &local_3c;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
