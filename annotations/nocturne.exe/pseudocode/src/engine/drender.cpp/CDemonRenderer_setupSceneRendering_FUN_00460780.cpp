// Name: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
// Address: 00460780
// Address Range: [[00460780, 004607a8]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(CDemonRenderer *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(CDemonRenderer *this_ptr,CVector3f *euler_angles)

{
  CMatrix3x3f local_28;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_28,euler_angles);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(this_ptr,&local_28);
  return;
}
