// Name: core_wateract.cpp_CWaterActor_getBoundingBox_FUN_00551e40
// Address: 00551e40
// Address Range: [[00551e40, 00551e93]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_wateract_cpp_CWaterActor_getBoundingBox_FUN_00551e40(CWaterActor *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_wateract_cpp_CWaterActor_getBoundingBox_FUN_00551e40(CWaterActor *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->size).x;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(this_ptr->size).z * fVar2;
  (out_box->max).x = (this_ptr->size).x * fVar2;
  (out_box->max).y = (this_ptr->size).y + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * (this_ptr->size).z;
  return out_box;
}
