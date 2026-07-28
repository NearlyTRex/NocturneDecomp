// Name: core_tvbat.cpp_FUN_0054bfd0
// Address: 0054bfd0
// Address Range: [[0054bfd0, 0054c03c]]
// Convention: unknown
// Signature: int core_tvbat_cpp_FUN_0054bfd0(CDemonActor *param_1)

#include "nocturne.h"

int core_tvbat_cpp_FUN_0054bfd0(CDemonActor *param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (*(int *)(param_1[0x91].create_event + 0x18) == 3) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)&param_1[0x90].location.position.z,
               param_1[0x90].location.position.y,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar1;
}
