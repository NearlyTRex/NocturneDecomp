// Name: core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
// Address: 00511990
// Address Range: [[00511990, 005119a8]]
// Convention: __cdecl
// Signature: SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo *this_ptr)

#include "nocturne.h"

SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo *this_ptr)

{
  this_ptr->deformable_model = (CDeformableModelInstance *)0x0;
  this_ptr->keyframed_model = (CKeyFramedModelInstance *)0x0;
  (this_ptr->ray_query).ray_type = 0;
  return this_ptr;
}
