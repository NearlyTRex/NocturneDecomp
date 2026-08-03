// Name: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180
// Address: 00518180
// Address Range: [[00518180, 0051819f]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180(CDeformableModel *this_ptr,int index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180(CDeformableModel *this_ptr,int index)

{
  return this_ptr->vertex_pool + index;
}
