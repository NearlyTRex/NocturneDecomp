// Name: core_platfrm.cpp_CPlatform_renderBackground_FUN_005191d0
// Address: 005191d0
// Address Range: [[005191d0, 005193a0]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_renderBackground_FUN_005191d0(CPlatform *this_ptr,int layer_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_renderBackground_FUN_005191d0(CPlatform *this_ptr,int layer_flag)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return;
  }
  if (layer_flag == 0) {
    return;
  }
  if (((int)this_ptr->one_shot < 2) && (this_ptr->render_in_background_when_not_moving_flag == 0)) {
    return;
  }
  if (this_ptr->render_in_background_when_not_moving_flag != 0) {
    if ((this_ptr->state == PLATFORM_STATE_TYPE_MOVING_TO_END) ||
       (this_ptr->state == PLATFORM_STATE_TYPE_MOVING_TO_START)) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->to_end_event);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->to_start_event);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    if (this_ptr->render_in_background_when_not_moving_flag == 0) {
      this_ptr->one_shot = ONE_SHOT_DONE_IN_BACKGROUND;
    }
    else {
      *(uint *)&this_ptr->field_0x880 = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_44;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_2c);
  if (iVar1 != 0) {
    if ((this_ptr->recompute_fog == 0) ||
       (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar1 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                (&this_ptr->model,0.0,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
      return;
    }
    g_CDemonSetPtr->per_pixel_lighting_enabled = 1;
    iStack_14 = (int)ROUND(*(float *)&(this_ptr->base).field_0x20 * _DAT_005fac30);
    iStack_10 = (int)ROUND(*(float *)&(this_ptr->base).field_0x24 * _DAT_005fac30);
    iStack_c = (int)ROUND(*(float *)&(this_ptr->base).field_0x28 * _DAT_005fac30);
    _DAT_0150f450 = (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 8))(DAT_007bda74,&iStack_14,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&this_ptr->model,0.0,-1);
    g_CDemonSetPtr->per_pixel_lighting_enabled = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return;
}
