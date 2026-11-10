// Name: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
// Address: 0046ce60
// Address Range: [[0046ce60, 0046ce89]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60(CDemonRenderer *this_ptr,CVector3i *input_point)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60(CDemonRenderer *this_ptr,CVector3i *input_point)

{
  byte auStack_10 [4];
  int local_c;
  int local_8;
  int local_4;
  
  local_c = input_point->x;
  local_8 = input_point->y;
  local_4 = input_point->z;
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(auStack_10);
  return;
}
