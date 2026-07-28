// Name: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180
// Address: 00518180
// Address Range: [[00518180, 0051819f]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180(CDeformableModel *this_ptr,int index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180(CDeformableModel *this_ptr,int index)

{
  return (CVector3f *)
         (this_ptr->texture_sets[1].textures[0].textures[0].texture_name + index * 0xc + 8);
}
