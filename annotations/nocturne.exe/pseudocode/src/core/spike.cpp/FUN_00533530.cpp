// Name: core_spike.cpp_FUN_00533530
// Address: 00533530
// Address Range: [[00533530, 00533599]]
// Convention: unknown
// Signature: int core_spike_cpp_FUN_00533530(CDemonActor *param_1)

#include "nocturne.h"

int core_spike_cpp_FUN_00533530(CDemonActor *param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_20;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_20);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar1;
}
