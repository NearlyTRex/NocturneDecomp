// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
// Address: 004837b0
// Address Range: [[004837b0, 004837f2]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer *this_ptr,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer *this_ptr,CVector3f *world_position)

{
  SMRGLPoint *block;
  
  round();
  round();
  block = (SMRGLPoint *)round();
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(block);
  return;
}
