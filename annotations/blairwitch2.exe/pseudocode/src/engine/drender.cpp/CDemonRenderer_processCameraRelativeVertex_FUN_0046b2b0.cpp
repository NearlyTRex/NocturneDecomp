// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
// Address: 0046b2b0
// Address Range: [[0046b2b0, 0046b2f2]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer *this_ptr,CVector3f *world_position)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer *this_ptr,CVector3f *world_position)

{
  double dVar1;
  double dVar2;
  SMRGLPoint SStack_18;
  
  dVar2 = 256;
  SStack_18.point.x = 0x46b2c6;
  dVar1 = round((double)world_position->x * 256);
  SStack_18.point.y = (int)ROUND(dVar1);
  SStack_18.type = 0x46b2d4;
  dVar1 = round((double)world_position->y * dVar2);
  SStack_18.point.y = (int)ROUND(dVar1);
  dVar2 = round(dVar2 * (double)world_position->z);
  SStack_18.point.y = (int)ROUND(dVar2);
  engine_3d_c_processCameraRelativePoint_FUN_00403830(&SStack_18);
  return;
}
