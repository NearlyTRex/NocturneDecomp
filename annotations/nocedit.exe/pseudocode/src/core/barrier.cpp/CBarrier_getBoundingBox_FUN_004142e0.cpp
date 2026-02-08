// Name: core_barrier.cpp_CBarrier_getBoundingBox_FUN_004142e0
// Address: 004142e0
// Address Range: [[004142e0, 00414333]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_barrier_cpp_CBarrier_getBoundingBox_FUN_004142e0(CBarrier *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_barrier_cpp_CBarrier_getBoundingBox_FUN_004142e0(CBarrier *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)this_ptr->unk;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -*(float *)(this_ptr->unk + 8) * fVar2;
  (out_box->max).x = *(float *)this_ptr->unk * fVar2;
  (out_box->max).y = *(float *)(this_ptr->unk + 4) + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * *(float *)(this_ptr->unk + 8);
  return out_box;
}
