// Name: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ff80
// Address: 0040ff80
// Address Range: [[0040ff80, 0040ffde]]
// Convention: unknown
// Signature: void core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ff80(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ff80(CDemonActor *param_1,int param_2)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (param_2 == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return;
}
