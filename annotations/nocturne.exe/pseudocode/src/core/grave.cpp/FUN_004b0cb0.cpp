// Name: core_grave.cpp_FUN_004b0cb0
// Address: 004b0cb0
// Address Range: [[004b0cb0, 004b0d3d]]
// Convention: unknown
// Signature: int core_grave_cpp_FUN_004b0cb0(CDemonActor *param_1)

#include "nocturne.h"

int core_grave_cpp_FUN_004b0cb0(CDemonActor *param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if ((param_1[2].orient.vec.y == 0.0) &&
     (((*(int *)(0x01CC9450 + 4) != 0 || (param_1[2].orient_matrix.m[0].x == 0.0)) ||
      (param_1[2].orient.vec.z != 0.0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                ((CKeyFramedModelInstance *)(param_1 + 1),(float)param_1[2].location.area_id,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iVar1;
  }
  return 0;
}
