// Name: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00563c90
// Address: 00563c90
// Address Range: [[00563c90, 00563caf]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00563c90(CDeformableModel *this_ptr,int index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00563c90(CDeformableModel *this_ptr,int index)

{
  return this_ptr->bone_origins + index;
}
