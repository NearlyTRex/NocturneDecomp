// Name: core_actor.cpp_CBoundingBox3D_copy_FUN_00410440
// Address: 00410440
// Address Range: [[00410440, 00410485]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  (this_ptr->min).x = (other->min).x;
  (this_ptr->min).y = (other->min).y;
  (this_ptr->min).z = (other->min).z;
  (this_ptr->max).x = (other->max).x;
  (this_ptr->max).y = (other->max).y;
  (this_ptr->max).z = (other->max).z;
  return this_ptr;
}
