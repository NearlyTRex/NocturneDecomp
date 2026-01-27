// Name: core_charactr.cpp_CCharacter_getBoundingBox_FUN_0042b8a0
// Address: 0042b8a0
// Address Range: [[0042b8a0, 0042b8de]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_charactr.cpp_CCharacter_getBoundingBox_FUN_0042b8a0(CCharacter * this_ptr, CBoundingBox3D * out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0
          (CCharacter *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).x = *(float *)(this_ptr->unk2 + 0x58);
  (out_box->min).y = *(float *)(this_ptr->unk2 + 0x5c);
  (out_box->min).z = *(float *)(this_ptr->unk2 + 0x60);
  (out_box->max).x = *(float *)(this_ptr->unk2 + 100);
  (out_box->max).y = *(float *)(this_ptr->unk2 + 0x68);
  (out_box->max).z = *(float *)(this_ptr->unk2 + 0x6c);
  return out_box;
}
