// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
// Address: 0048c450
// Address Range: [[0048c450, 0048c492]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
          (CDemonRenderer *this_ptr,CVector3f *world_position)

{
  BADSPACEBASE *in_ESP;
  double dVar1;
  double dVar2;
  CQuaternion4f CStack_18;
  
  dVar2 = 256;
  CStack_18.x = 6.68261e-39;
  dVar1 = crt_math_c_round_FUN_005fe6b0((double)world_position->x * 256);
  CStack_18.y = (float)(int)ROUND(dVar1);
  CStack_18.w = 6.68263e-39;
  dVar1 = crt_math_c_round_FUN_005fe6b0((double)world_position->y * dVar2);
  CStack_18.y = (float)(int)ROUND(dVar1);
  dVar2 = crt_math_c_round_FUN_005fe6b0(dVar2 * (double)world_position->z);
  CStack_18.y = (float)(int)ROUND(dVar2);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&CStack_18);
  return;
}
