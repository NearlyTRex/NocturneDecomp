// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0048c7e0
// Address: 0048c7e0
// Address Range: [[0048c7e0, 0048c7fc] [00608c88, 00608ca4]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0048c7e0(CDemonRenderer *this_ptr,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0048c7e0(CDemonRenderer *this_ptr,CVector3i *output)

{
  CVector3i CStack_14;
  
  engine_matrix_c_getCameraRotation_FUN_0050e2f0(&CStack_14);
  output->x = 0x48c7f0;
  output->y = CStack_14.x;
  output->z = CStack_14.y;
  return output;
}
