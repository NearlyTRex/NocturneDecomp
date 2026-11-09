// Name: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
// Address: 0046cc10
// Address Range: [[0046cc10, 0046cc38]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer *this_ptr,CVector3f *euler_angles)

{
  CMatrix3x3f local_28 [40];
  
  core_dirmat_cpp_FUN_0045b550(local_28,euler_angles);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(this_ptr,local_28);
  return;
}
