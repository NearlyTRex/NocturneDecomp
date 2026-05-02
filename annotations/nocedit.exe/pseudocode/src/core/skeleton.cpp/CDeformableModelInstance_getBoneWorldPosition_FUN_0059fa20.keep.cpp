// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
// Address: 0059fa20
// MANUAL RECONSTRUCTION
// Address Range: [[0059fa20, 0059faf3] [03fc3d5a, 03fc3dbb]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)

{
  int bone_index_00;
  CSkeleton *pCVar1;
  CMatrix3x4f local_40;
  CVector3f *input_vector;

  if (bone_index < 0) {
    out_position->x = (this_ptr->bone_transform).pose_data.root_position.x;
    out_position->y = (this_ptr->bone_transform).pose_data.root_position.y;
    out_position->z = (this_ptr->bone_transform).pose_data.root_position.z;
    return out_position;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  bone_index_00 = pCVar1->bone_list[bone_index].parent_index;
  input_vector = this_ptr->transformed_vertices + bone_index;
  if (bone_index_00 < 0) {
    out_position->x = input_vector->x + (this_ptr->bone_transform).pose_data.root_position.x;
    out_position->y = input_vector->y + (this_ptr->bone_transform).pose_data.root_position.y;
    out_position->z = input_vector->z + (this_ptr->bone_transform).pose_data.root_position.z;
    return out_position;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
            (this_ptr,bone_index_00,&local_40);
  core_xform_cpp_transformVector3x4_FUN_005f4dc0(out_position,input_vector,&local_40);
  return out_position;
}
