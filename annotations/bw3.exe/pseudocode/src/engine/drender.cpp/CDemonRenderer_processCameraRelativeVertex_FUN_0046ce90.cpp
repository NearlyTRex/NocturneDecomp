// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
// Address: 0046ce90
// Address Range: [[0046ce90, 0046ced2]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer *this_ptr,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer *this_ptr,CVector3f *world_position)

{
  double dVar1;
  double dVar2;
  SMRGLPoint SStack_18;
  
  dVar2 = _DAT_005bc513;
  SStack_18.point.x = 0x46cea6;
  dVar1 = round((double)world_position->x * _DAT_005bc513);
  SStack_18.point.y = (int)ROUND(dVar1);
  SStack_18.type = 0x46ceb4;
  dVar1 = round((double)world_position->y * dVar2);
  SStack_18.point.y = (int)ROUND(dVar1);
  dVar2 = round(dVar2 * (double)world_position->z);
  SStack_18.point.y = (int)ROUND(dVar2);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&SStack_18);
  return;
}
