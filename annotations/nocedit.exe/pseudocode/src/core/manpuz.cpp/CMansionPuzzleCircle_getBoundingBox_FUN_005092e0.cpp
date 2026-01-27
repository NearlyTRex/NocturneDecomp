// Name: core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_005092e0
// Address: 005092e0
// Address Range: [[005092e0, 0050931f]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_005092e0(CMansionPuzzleCircle * this_ptr, CBoundingBox3D * out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_getBoundingBox_FUN_005092e0
          (CMansionPuzzleCircle *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  
  fVar1 = *(float *)(this_ptr->unk3 + 0xec0);
  (out_box->min).y = 0.0;
  (out_box->min).x = -fVar1;
  (out_box->min).z = -*(float *)(this_ptr->unk3 + 0xec0);
  (out_box->max).x = *(float *)(this_ptr->unk3 + 0xec0);
  (out_box->max).y = *(float *)(this_ptr->unk3 + 0xec8);
  (out_box->max).z = *(float *)(this_ptr->unk3 + 0xec0);
  return out_box;
}
