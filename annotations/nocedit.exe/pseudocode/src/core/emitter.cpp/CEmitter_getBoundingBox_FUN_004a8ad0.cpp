// Name: core_emitter.cpp_CEmitter_getBoundingBox_FUN_004a8ad0
// Address: 004a8ad0
// Address Range: [[004a8ad0, 004a8b23]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_emitter_cpp_CEmitter_getBoundingBox_FUN_004a8ad0(CEmitter *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_emitter_cpp_CEmitter_getBoundingBox_FUN_004a8ad0(CEmitter *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->emitter_size).x;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(this_ptr->emitter_size).z * fVar2;
  (out_box->max).x = (this_ptr->emitter_size).x * fVar2;
  (out_box->max).y = (this_ptr->emitter_size).y + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * (this_ptr->emitter_size).z;
  return out_box;
}
