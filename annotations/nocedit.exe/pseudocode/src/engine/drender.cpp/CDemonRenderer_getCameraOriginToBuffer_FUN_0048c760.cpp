// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
// Address: 0048c760
// Address Range: [[0048c760, 0048c77c] [00608ca5, 00608cc1]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer *this_ptr,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer *this_ptr,CVector3i *output)

{
  CVector3i CStack_14;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
  output->x = 0x48c770;
  output->y = CStack_14.x;
  output->z = CStack_14.y;
  return output;
}
