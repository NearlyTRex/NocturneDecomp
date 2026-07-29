// Name: core_teleport.cpp_CTeleport_getBoundingBox_FUN_005439c0
// Address: 005439c0
// Address Range: [[005439c0, 00543a13]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_teleport_cpp_CTeleport_getBoundingBox_FUN_005439c0(CTeleport *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_teleport_cpp_CTeleport_getBoundingBox_FUN_005439c0(CTeleport *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->trigger_extents).x;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(this_ptr->trigger_extents).z * fVar2;
  (out_box->max).x = (this_ptr->trigger_extents).x * fVar2;
  (out_box->max).y = (this_ptr->trigger_extents).y + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * (this_ptr->trigger_extents).z;
  return out_box;
}
