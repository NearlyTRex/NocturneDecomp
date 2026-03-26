// Name: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70
// Address: 005dbb70
// Address Range: [[005dbb70, 005dbc5b] [03fc3213, 03fc3340]]
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
  
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[0],
             (this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[1],
             0.5,&local_6c);
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[2],
             (this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[3],
             0.5,&local_fc);
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_cc,&local_9c,0.5,&local_3c);
  out_matrix->m[0].w = local_3c.m[0].w;
  out_matrix->m[0].x = local_3c.m[0].x;
  out_matrix->m[0].y = local_3c.m[0].y;
  out_matrix->m[0].z = local_3c.m[0].z;
  out_matrix->m[1].w = local_3c.m[1].w;
  out_matrix->m[1].x = local_3c.m[1].x;
  out_matrix->m[1].y = local_3c.m[1].y;
  out_matrix->m[1].z = local_3c.m[1].z;
  out_matrix->m[2].w = local_3c.m[2].w;
  out_matrix->m[2].x = local_3c.m[2].x;
  out_matrix->m[2].y = local_3c.m[2].y;
  out_matrix->m[2].z = local_3c.m[2].z;
  return out_matrix;
}
