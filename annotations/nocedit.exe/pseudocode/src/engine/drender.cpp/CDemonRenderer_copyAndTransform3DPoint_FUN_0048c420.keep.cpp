// Name: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
// Address: 0048c420
// MANUAL RECONSTRUCTION
// Address Range: [[0048c420, 0048c449]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420(CDemonRenderer *this_ptr,CVector3i *input_point)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420(CDemonRenderer *this_ptr,CVector3i *input_point)

{
  SMRGLPoint block;

  block.point = *input_point;
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&block);
  return;
}
