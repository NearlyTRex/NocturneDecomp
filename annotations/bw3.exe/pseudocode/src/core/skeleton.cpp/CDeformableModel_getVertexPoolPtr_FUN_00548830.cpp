// Name: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00548830
// Address: 00548830
// Address Range: [[00548830, 0054884f]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00548830(CDeformableModel *this_ptr,int index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00548830(CDeformableModel *this_ptr,int index)

{
  return this_ptr->bone_origins + index;
}
