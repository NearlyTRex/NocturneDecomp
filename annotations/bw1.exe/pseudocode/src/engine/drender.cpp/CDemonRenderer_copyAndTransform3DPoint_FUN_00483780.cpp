// Name: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
// Address: 00483780
// Address Range: [[00483780, 004837a9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780(CDemonRenderer *this_ptr,CVector3i *input_point)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780(CDemonRenderer *this_ptr,CVector3i *input_point)

{
  byte auStack_10 [4];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_c = *(uint *)input_point;
  local_8 = *(uint *)(input_point + 4);
  local_4 = *(uint *)(input_point + 8);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(auStack_10);
  return;
}
