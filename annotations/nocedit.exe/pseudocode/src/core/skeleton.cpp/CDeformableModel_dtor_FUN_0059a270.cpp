// Name: core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
// Address: 0059a270
// Address Range: [[0059a270, 0059a2a5]]
// Convention: __cdecl
// Signature: CDeformableModel * core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel * this_ptr)

#include "nocturne.h"

CDeformableModel * __cdecl
core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
  core_skeleton_cpp_freeBoundingBoxes_FUN_005a2030((CBoundingBox3D **)&this_ptr->bbox_pool[0].max);
  core_curtain_cpp_freeVectors_FUN_0044baf0((CVector3f **)(extraout_EAX + -0x4bc));
  return (CDeformableModel *)(extraout_EAX_00 + -0x7c90);
}
