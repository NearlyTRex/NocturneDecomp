// Name: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
// Address: 0059a860
// Address Range: [[0059a860, 0059a87f]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860(CDeformableModel *this_ptr,int index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860(CDeformableModel *this_ptr,int index)

{
  return this_ptr->vertex_pool + index;
}
