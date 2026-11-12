// Name: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280
// Address: 0046b280
// Address Range: [[0046b280, 0046b2a9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280(CDemonRenderer *this_ptr,CVector3i *input_point)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280(CDemonRenderer *this_ptr,CVector3i *input_point)

{
  SMRGLPoint SStack_10;
  
  SStack_10.point.x = input_point->x;
  SStack_10.point.y = input_point->y;
  SStack_10.point.z = input_point->z;
  engine_3d_c_processCameraRelativePoint_FUN_00403830(&SStack_10);
  return;
}
