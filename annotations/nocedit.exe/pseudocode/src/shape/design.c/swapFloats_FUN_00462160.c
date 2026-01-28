// Name: shape_design.c_swapFloats_FUN_00462160
// Address: 00462160
// Address Range: [[00462160, 0046218c]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_swapFloats_FUN_00462160(float *value1_ptr,float *value2_ptr)

#include "nocturne.h"

void __cdecl shape_design_c_swapFloats_FUN_00462160(float *value1_ptr,float *value2_ptr)

{
  float fVar1;
  
  fVar1 = *value1_ptr;
  *value1_ptr = *value2_ptr;
  *value2_ptr = fVar1;
  return;
}
