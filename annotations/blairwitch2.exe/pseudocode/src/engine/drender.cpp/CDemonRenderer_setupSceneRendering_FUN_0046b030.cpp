// Name: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
// Address: 0046b030
// Address Range: [[0046b030, 0046b058]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(CDemonRenderer *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(CDemonRenderer *this_ptr,CVector3f *euler_angles)

{
  CMatrix3x3f local_28;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_28,euler_angles);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(this_ptr,&local_28);
  return;
}
