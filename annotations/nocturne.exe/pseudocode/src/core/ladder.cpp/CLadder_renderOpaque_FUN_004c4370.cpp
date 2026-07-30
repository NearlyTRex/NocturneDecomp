// Name: core_ladder.cpp_CLadder_renderOpaque_FUN_004c4370
// Address: 004c4370
// Address Range: [[004c4370, 004c43e9]]
// Convention: unknown
// Signature: int core_ladder_cpp_CLadder_renderOpaque_FUN_004c4370(CDemonActor *param_1)

#include "nocturne.h"

int core_ladder_cpp_CLadder_renderOpaque_FUN_004c4370(CDemonActor *param_1)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  CBoundingBox3D local_1c;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar2;
}
