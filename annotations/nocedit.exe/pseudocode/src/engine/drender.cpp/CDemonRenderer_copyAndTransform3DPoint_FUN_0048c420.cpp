// Name: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
// Address: 0048c420
// Address Range: [[0048c420, 0048c449]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420 (CDemonRenderer *this_ptr,CVector3f *input_point)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
          (CDemonRenderer *this_ptr,CVector3f *input_point)

{
  CQuaternion4f CStack_10;
  
  CStack_10.x = input_point->x;
  CStack_10.y = input_point->y;
  CStack_10.z = input_point->z;
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&CStack_10);
  return;
}
