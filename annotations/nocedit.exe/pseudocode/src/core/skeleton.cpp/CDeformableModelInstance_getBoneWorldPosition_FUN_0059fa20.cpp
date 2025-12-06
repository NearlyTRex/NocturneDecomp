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
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  int in_stack_00000010;
  CMatrix3x4f *in_stack_ffffff94;
  CMatrix3x4f CStack_68;
  float afStack_38 [10];
  
  bVar5 = 0;
  if (bone_index < 0) {
    out_position->x = (this_ptr->bone_transform).root_position.x;
    out_position->y = (this_ptr->bone_transform).root_position.y;
    out_position->z = (this_ptr->bone_transform).root_position.z;
    return out_position;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar2 = pCVar1->bone_list[in_stack_00000010].parent_index;
  input_vector = this_ptr->transformed_vertices + in_stack_00000010;
  if (iVar2 < 0) {
    out_position->x = input_vector->x + (this_ptr->bone_transform).root_position.x;
    out_position->y = input_vector->y + (this_ptr->bone_transform).root_position.y;
    out_position->z = input_vector->z + (this_ptr->bone_transform).root_position.z;
    return out_position;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
            (this_ptr,iVar2,in_stack_ffffff94);
  pfVar3 = afStack_38;
  pCVar4 = &CStack_68;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4_FUN_005f4dc0(out_position,input_vector,&CStack_68);
  return out_position;
}
