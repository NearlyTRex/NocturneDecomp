// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
// Address: 0059fa20
// Address Range: [[0059fa20, 0059faf3]]
// Convention: __cdecl
// Signature: CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)

#include "nocturne.h"

CVector3f * __cdecl
core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
          (CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)

{
  CVector3f *input_vector;
  CSkeleton *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  CMatrix3x4f *in_stack_ffffff90;
  uint local_40 [12];
  
  bVar5 = 0;
  if (bone_index < 0) {
    out_position->x = (this_ptr->bone_transform).root_position.x;
    out_position->y = (this_ptr->bone_transform).root_position.y;
    out_position->z = (this_ptr->bone_transform).root_position.z;
    return out_position;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar2 = pCVar1->bone_list[bone_index].parent_index;
  input_vector = this_ptr->transformed_vertices + bone_index;
  if (iVar2 < 0) {
    out_position->x = input_vector->x + (this_ptr->bone_transform).root_position.x;
    out_position->y = input_vector->y + (this_ptr->bone_transform).root_position.y;
    out_position->z = input_vector->z + (this_ptr->bone_transform).root_position.z;
    return out_position;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
            (this_ptr,iVar2,in_stack_ffffff90);
  puVar3 = local_40;
  puVar4 = (uint *)&stack0xffffff90;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_transformVector3x4_FUN_005f4dc0
            (out_position,input_vector,(CMatrix3x4f *)&stack0xffffff90);
  return out_position;
}
