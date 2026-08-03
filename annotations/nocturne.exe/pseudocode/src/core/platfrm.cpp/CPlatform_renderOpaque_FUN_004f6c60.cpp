// Name: core_platfrm.cpp_CPlatform_renderOpaque_FUN_004f6c60
// Address: 004f6c60
// Address Range: [[004f6c60, 004f6d83]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_004f6c60(CPlatform *this_ptr)

#include "nocturne.h"

int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_004f6c60(CPlatform *this_ptr)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CBoundingBox3D CStack_40;
  CBoundingBox3D local_28;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if ((iVar1 == 0) || (this_ptr->plot_in_shadow_flag != 0)) {
    if ((2 < this_ptr->one_shot) &&
       (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
       iVar1 == 0)) {
      return 0;
    }
    if ((((this_ptr->render_in_background_when_not_moving_flag != 0) &&
         (this_ptr->state != (PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END))) &&
        (this_ptr->state != 4)) &&
       ((this_ptr->rendered_in_background != 0 &&
        (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
        iVar1 == 0)))) {
      return 0;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_28);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(pCVar2);
    if (iVar1 != 0) {
      if (this_ptr->plot_as_box_in_shadow == 0) {
LAB_004f6d5e:
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                  (&this_ptr->model,0.0,-1);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
        return iVar1;
      }
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar3 == 0) goto LAB_004f6d5e;
      pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_40);
      core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(pCVar2);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
