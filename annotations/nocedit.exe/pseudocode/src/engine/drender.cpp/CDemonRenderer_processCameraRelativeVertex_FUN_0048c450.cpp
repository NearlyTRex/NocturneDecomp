// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
// Address: 0048c450
// Address Range: [[0048c450, 0048c492]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer *this_ptr,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer *this_ptr,CVector3f *world_position)

{
  CQuaternion4f CStack_10;
  
  CStack_10.x = (float)(int)ROUND(ROUND((double)world_position->x * 256));
  CStack_10.y = (float)(int)ROUND(ROUND((double)world_position->y * 256));
  CStack_10.z = (float)(int)ROUND(ROUND(256 * (double)world_position->z));
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&CStack_10);
  return;
}
