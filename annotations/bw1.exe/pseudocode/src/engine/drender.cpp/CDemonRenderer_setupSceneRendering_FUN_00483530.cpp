// Name: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
// Address: 00483530
// Address Range: [[00483530, 00483558]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer *this_ptr,CVector3f *euler_angles)

{
  CMatrix3x3f local_28;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&local_28,euler_angles);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(this_ptr,&local_28);
  return;
}
