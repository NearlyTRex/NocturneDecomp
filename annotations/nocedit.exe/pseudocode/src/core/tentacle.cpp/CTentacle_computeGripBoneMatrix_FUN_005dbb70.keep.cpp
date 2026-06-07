// Name: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70
// Address: 005dbb70
// MANUAL RECONSTRUCTION
// Address Range: [[005dbb70, 005dbc5b] [03fc3213, 03fc3340]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(CTentacle *this_ptr,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(CTentacle *this_ptr,CMatrix3x4f *out_matrix)

{
  CMatrix3x4f local_fc;
  CMatrix3x4f local_cc;
  CMatrix3x4f local_9c;
  CMatrix3x4f local_6c;
  CMatrix3x4f local_3c;
  
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[0],
             (this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[1],
             0.5,&local_6c);
  local_cc = local_6c;
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[2],
             (this_ptr->base).base.model.bone_transform.bone_world_matrices + g_TentacleIndices[3],
             0.5,&local_fc);
  local_9c = local_fc;
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_cc,&local_9c,0.5,&local_3c);
  *out_matrix = local_3c;
  return out_matrix;
}
