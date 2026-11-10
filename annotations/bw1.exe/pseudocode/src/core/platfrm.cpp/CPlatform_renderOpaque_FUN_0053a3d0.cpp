// Name: core_platfrm.cpp_CPlatform_renderOpaque_FUN_0053a3d0
// Address: 0053a3d0
// Address Range: [[0053a3d0, 0053a51c]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_0053a3d0(CPlatform *this_ptr)

#include "nocturne.h"

int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_0053a3d0(CPlatform *this_ptr)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  CBoundingBox3D *in_stack_ffffff98;
  uint auStack_58 [2];
  byte auStack_50 [32];
  uint auStack_30 [4];
  uint auStack_20 [4];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar1 == 0) || (this_ptr->plot_in_shadow_flag != 0)) {
    if ((2 < (int)this_ptr->one_shot) &&
       (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
       iVar1 == 0)) {
      return 0;
    }
    if ((((this_ptr->render_in_background_when_not_moving_flag != 0) &&
         (this_ptr->state != PLATFORM_STATE_TYPE_MOVING_TO_END)) &&
        (this_ptr->state != PLATFORM_STATE_TYPE_MOVING_TO_START)) &&
       ((*(int *)&this_ptr->field_0x724 != 0 &&
        (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
        iVar1 == 0)))) {
      return 0;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar3 = (uint *)&stack0xffffff98;
    puVar4 = auStack_58;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_50);
    if (iVar1 != 0) {
      if ((this_ptr->plot_as_box_in_shadow == 0) ||
         (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
         iVar2 == 0)) {
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                  (&this_ptr->model,0.0,-1);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
        return iVar1;
      }
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff98);
      puVar3 = auStack_30;
      puVar4 = auStack_20;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_box_cpp_FUN_00421670((CBoundingBox3D *)(auStack_20 + 2));
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
