// Name: core_door.cpp_CDoor_renderOpaque_FUN_00455d50
// Address: 00455d50
// Address Range: [[00455d50, 00455e03]]
// Convention: unknown
// Signature: int core_door_cpp_CDoor_renderOpaque_FUN_00455d50(CDemonActor *param_1)

#include "nocturne.h"

int core_door_cpp_CDoor_renderOpaque_FUN_00455d50(CDemonActor *param_1)

{
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  CBoundingBox3D CStack_34;
  CBoundingBox3D local_1c;
  
  if (2 < *(int *)(param_1[7].create_event + 0x18)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  pCVar1 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(pCVar1);
  if (iVar2 != 0) {
    if (*(int *)(param_1[7].create_event + 0x24) != 0) {
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar3 != 0) {
        pCVar1 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_34);
        core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(pCVar1);
        goto LAB_00455dcd;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iVar2;
  }
LAB_00455dcd:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar2;
}
