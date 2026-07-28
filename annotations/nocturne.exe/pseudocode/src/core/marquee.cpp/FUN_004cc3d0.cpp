// Name: core_marquee.cpp_FUN_004cc3d0
// Address: 004cc3d0
// Address Range: [[004cc3d0, 004cc437]]
// Convention: unknown
// Signature: float core_marquee_cpp_FUN_004cc3d0(CDemonActor *param_1)

#include "nocturne.h"

float core_marquee_cpp_FUN_004cc3d0(CDemonActor *param_1)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  float fVar2;
  CBoundingBox3D local_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 != 0) {
    return 0.0;
  }
  param_1[1].orient_matrix.m[0].z = 0.0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
  fVar2 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  param_1[1].orient_matrix.m[0].z = fVar2;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return param_1[1].orient_matrix.m[0].z;
}
