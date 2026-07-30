// Name: core_door.cpp_CDoor_renderBackground_FUN_00455e10
// Address: 00455e10
// Address Range: [[00455e10, 00455e81]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_renderBackground_FUN_00455e10(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_door_cpp_CDoor_renderBackground_FUN_00455e10(CDemonActor *param_1,int param_2)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if ((param_2 != 0) && (1 < *(int *)(param_1[7].create_event + 0x18))) {
    param_1[7].create_event[0x18] = '\x03';
    param_1[7].create_event[0x19] = '\0';
    param_1[7].create_event[0x1a] = '\0';
    param_1[7].create_event[0x1b] = '\0';
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
  return;
}
