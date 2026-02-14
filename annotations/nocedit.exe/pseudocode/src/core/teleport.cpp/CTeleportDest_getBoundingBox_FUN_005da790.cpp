// Name: core_teleport.cpp_CTeleportDest_getBoundingBox_FUN_005da790
// Address: 005da790
// Address Range: [[005da790, 005da7bd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_teleport_cpp_CTeleportDest_getBoundingBox_FUN_005da790(CTeleportDest *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_teleport_cpp_CTeleportDest_getBoundingBox_FUN_005da790(CTeleportDest *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).y = -1.0;
  (out_box->min).z = -7.0;
  (out_box->max).x = 7.0;
  (out_box->max).y = 8.0;
  (out_box->max).z = 7.0;
  (out_box->min).x = -7.0;
  return out_box;
}
