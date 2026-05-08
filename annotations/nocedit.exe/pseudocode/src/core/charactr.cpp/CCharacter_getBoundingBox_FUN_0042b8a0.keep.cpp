// Name: core_charactr.cpp_CCharacter_getBoundingBox_FUN_0042b8a0
// Address: 0042b8a0
// MANUAL RECONSTRUCTION
// Address Range: [[0042b8a0, 0042b8de]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0(CCharacter *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0(CCharacter *this_ptr,CBoundingBox3D *out_box)

{
  *out_box = this_ptr->cached_bounding_box;
  return out_box;
}
