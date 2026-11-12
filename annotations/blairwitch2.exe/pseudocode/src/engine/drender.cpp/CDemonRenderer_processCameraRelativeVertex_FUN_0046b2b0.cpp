// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
// Address: 0046b2b0
// Address Range: [[0046b2b0, 0046b2f2]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer *this_ptr,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer *this_ptr,CVector3f *world_position)

{
  SMRGLPoint *block;
  
  round();
  round();
  block = (SMRGLPoint *)round();
  engine_3d_c_processCameraRelativePoint_FUN_00403830(block);
  return;
}
