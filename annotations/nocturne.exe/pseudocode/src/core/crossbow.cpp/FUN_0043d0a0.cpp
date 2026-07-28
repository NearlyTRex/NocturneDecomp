// Name: core_crossbow.cpp_FUN_0043d0a0
// Address: 0043d0a0
// Address Range: [[0043d0a0, 0043d11e]]
// Convention: unknown
// Signature: int core_crossbow_cpp_FUN_0043d0a0(CDemonActor *param_1)

#include "nocturne.h"

int core_crossbow_cpp_FUN_0043d0a0(CDemonActor *param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int render_flags;
  CBoundingBox3D local_24;
  float fStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_24);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return 0;
  }
  render_flags = -1;
  fStack_c = (float)core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0043d810(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)(param_1 + 1),fStack_c,render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar1;
}
