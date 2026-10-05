// Name: core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890
// Address: 0042b890
// Address Range: [[0042b890, 0042b8e8]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(CChain *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(CChain *this_ptr,CVector3f *out_point)

{
  CVector3f *input_local_point;
  CVector3f local_14;
  
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_0055a8b0
                 (&local_14,(CVector3f *)&DAT_02dd1184,
                  (this_ptr->target->model).bone_transform.bone_model_matrices +
                  this_ptr->target_bone);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&this_ptr->target->base,out_point,input_local_point);
  return out_point;
}
