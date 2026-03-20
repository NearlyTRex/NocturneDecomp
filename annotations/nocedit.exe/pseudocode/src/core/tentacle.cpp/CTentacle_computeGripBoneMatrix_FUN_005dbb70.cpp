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
  int iVar2;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_fc;
  CMatrix3x4f local_cc;
  CMatrix3x4f local_9c;
  CMatrix3x4f local_6c;
  CMatrix3x4f local_3c;
  
  bVar4 = 0;
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[0],
             (this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[1],
             0.5,&local_6c);
  pCVar4 = &local_6c;
  pCVar5 = &local_cc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[2],
             (this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[3],
             0.5,&local_fc);
  pCVar4 = &local_fc;
  pCVar5 = &local_9c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = *(float *)pCVar4;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_cc,&local_9c,0.5,&local_3c);
  pCVar2 = &local_3c;
  pCVar3 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + (uint)bVar4 * -8 + 4);
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = pCVar2;
    pCVar3 = pCVar3;
  }
  return out_matrix;
}
