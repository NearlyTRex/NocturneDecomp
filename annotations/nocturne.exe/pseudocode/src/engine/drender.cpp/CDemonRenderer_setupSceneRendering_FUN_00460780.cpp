// Name: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
// Address: 00460780
// Address Range: [[00460780, 004607a8]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(uint param_1,uint param_2)

{
  byte local_28 [40];
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_28,param_2);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(param_1,local_28);
  return;
}
