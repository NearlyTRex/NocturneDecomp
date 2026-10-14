// Name: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
// Address: 004609d0
// Address Range: [[004609d0, 004609f9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(CDemonRenderer *this_ptr,CVector3i *input_point)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(CDemonRenderer *this_ptr,CVector3i *input_point)

{
  SMRGLPoint SStack_10;
  
  SStack_10.point.x = input_point->x;
  SStack_10.point.y = input_point->y;
  SStack_10.point.z = input_point->z;
  engine_3d_c_processCameraRelativePoint_FUN_004044d0(&SStack_10);
  return;
}
