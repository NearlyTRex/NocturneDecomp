// Name: core_lever.cpp_FUN_004c6560
// Address: 004c6560
// Address Range: [[004c6560, 004c65ed]]
// Convention: unknown
// Signature: int core_lever_cpp_FUN_004c6560(CDemonActor *param_1)

#include "nocturne.h"

int core_lever_cpp_FUN_004c6560(CDemonActor *param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CKeyFramedModel *pCVar2;
  int render_flags;
  CBoundingBox3D local_2c;
  int local_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_2c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return 0;
  }
  render_flags = -1;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  local_14 = pCVar2->frame_count + -1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)(param_1 + 1),(float)local_14 * param_1[2].orient.vec.y,
             render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar1;
}
