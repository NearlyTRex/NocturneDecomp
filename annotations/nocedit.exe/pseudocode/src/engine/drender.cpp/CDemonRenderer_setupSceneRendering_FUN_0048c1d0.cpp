// Name: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
// Address: 0048c1d0
// Address Range: [[0048c1d0, 0048c1f8]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer *this_ptr)

{
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_ffffffd8;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffd8,in_stack_00000008);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (this_ptr,(CMatrix3x3f *)&stack0xffffffd8,in_stack_ffffffd8);
  return;
}
