// Name: core_trigger.cpp_CTrigger_getBoundingBox_FUN_00548110
// Address: 00548110
// Address Range: [[00548110, 00548163]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_trigger_cpp_CTrigger_getBoundingBox_FUN_00548110(CTrigger *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_trigger_cpp_CTrigger_getBoundingBox_FUN_00548110(CTrigger *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->trigger_size).x;
  fVar2 = (float)0.5;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(this_ptr->trigger_size).z * fVar2;
  (out_box->max).x = (this_ptr->trigger_size).x * fVar2;
  (out_box->max).y = (this_ptr->trigger_size).y + (float)0.10000000000000001;
  (out_box->max).z = fVar2 * (this_ptr->trigger_size).z;
  return out_box;
}
