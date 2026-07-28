// Name: core_platfrm.cpp_FUN_004f6c60
// Address: 004f6c60
// Address Range: [[004f6c60, 004f6d83]]
// Convention: unknown
// Signature: int core_platfrm_cpp_FUN_004f6c60(CDemonActor *param_1)

#include "nocturne.h"

int core_platfrm_cpp_FUN_004f6c60(CDemonActor *param_1)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CBoundingBox3D CStack_40;
  CBoundingBox3D local_28;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if ((iVar1 == 0) || (param_1[3].dead1 != 0)) {
    if ((2 < *(int *)(param_1[3].create_event + 0x50)) &&
       (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
       iVar1 == 0)) {
      return 0;
    }
    if ((((*(int *)(param_1[3].create_event + 0x58) != 0) &&
         (iVar1 = param_1[2].location.area_id, iVar1 != 3)) && (iVar1 != 4)) &&
       ((*(int *)(param_1[5].create_event + 0x14) != 0 &&
        (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
        iVar1 == 0)))) {
      return 0;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    pCVar2 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_28);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(pCVar2);
    if (iVar1 != 0) {
      if (param_1[3].blood_effect_timer == 0) {
LAB_004f6d5e:
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                  ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
        return iVar1;
      }
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar3 == 0) goto LAB_004f6d5e;
      pCVar2 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_40);
      core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(pCVar2);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
