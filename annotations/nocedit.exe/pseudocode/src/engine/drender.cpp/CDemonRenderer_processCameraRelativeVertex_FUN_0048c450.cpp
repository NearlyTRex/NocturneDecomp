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
  int extraout_EAX;
  int extraout_EAX_00;
  CQuaternion4f *input_point;
  float10 fVar1;
  
  fVar1 = (float10)256;
  crt_math_c_round_FUN_005fe6b0((double)((float10)world_position->x * fVar1));
  crt_math_c_round_FUN_005fe6b0((double)((float10)*(float *)(extraout_EAX + 4) * fVar1));
  crt_math_c_round_FUN_005fe6b0((double)(fVar1 * (float10)*(float *)(extraout_EAX_00 + 8)));
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(input_point);
  return;
}
