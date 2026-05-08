// Name: core_actor.cpp_CBoundingBox3D_copy_FUN_00410440
// Address: 00410440
// MANUAL RECONSTRUCTION
// Address Range: [[00410440, 00410485]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  *this_ptr = *other;
  return this_ptr;
}
