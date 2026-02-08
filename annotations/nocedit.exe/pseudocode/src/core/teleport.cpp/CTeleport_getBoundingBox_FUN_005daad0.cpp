// Name: core_teleport.cpp_CTeleport_getBoundingBox_FUN_005daad0
// Address: 005daad0
// Address Range: [[005daad0, 005dab23]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_teleport_cpp_CTeleport_getBoundingBox_FUN_005daad0(CTeleport *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_teleport_cpp_CTeleport_getBoundingBox_FUN_005daad0(CTeleport *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)this_ptr->unk1;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(float)this_ptr->unk3 * fVar2;
  (out_box->max).x = (float)this_ptr->unk1 * fVar2;
  (out_box->max).y = (float)this_ptr->unk2 + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * (float)this_ptr->unk3;
  return out_box;
}
