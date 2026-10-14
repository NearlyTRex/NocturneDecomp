// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
// Address: 00460a00
// Address Range: [[00460a00, 00460a42]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer *this_ptr,CVector3f *world_position)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer *this_ptr,CVector3f *world_position)

{
  double dVar1;
  double dVar2;
  SMRGLPoint SStack_18;
  
  dVar2 = 256;
  SStack_18.point.x = 0x460a16;
  dVar1 = round((double)world_position->x * 256);
  SStack_18.point.y = (int)ROUND(dVar1);
  SStack_18.type = 0x460a24;
  dVar1 = round((double)world_position->y * dVar2);
  SStack_18.point.y = (int)ROUND(dVar1);
  dVar2 = round(dVar2 * (double)world_position->z);
  SStack_18.point.y = (int)ROUND(dVar2);
  engine_3d_c_processCameraRelativePoint_FUN_004044d0(&SStack_18);
  return;
}
