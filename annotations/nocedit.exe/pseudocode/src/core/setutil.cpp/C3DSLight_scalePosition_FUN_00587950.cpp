// Name: core_setutil.cpp_C3DSLight_scalePosition_FUN_00587950
// Address: 00587950
// Address Range: [[00587950, 005879a2]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_scalePosition_FUN_00587950(C3DSLight *this_ptr,float scale)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_scalePosition_FUN_00587950(C3DSLight *this_ptr,float scale)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this_ptr->pos).x;
  fVar2 = this_ptr->atten_start;
  fVar3 = this_ptr->atten_end;
  (this_ptr->pos).y = (this_ptr->pos).y * scale;
  (this_ptr->pos).z = (this_ptr->pos).z * scale;
  this_ptr->atten_start = fVar2 * scale;
  this_ptr->atten_end = fVar3 * scale;
  (this_ptr->pos).x = fVar1 * scale;
  return;
}
