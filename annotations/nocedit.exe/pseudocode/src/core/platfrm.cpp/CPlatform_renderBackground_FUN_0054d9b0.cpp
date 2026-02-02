// Name: core_platfrm.cpp_CPlatform_renderBackground_FUN_0054d9b0
// Address: 0054d9b0
// Address Range: [[0054d9b0, 0054db69]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_renderBackground_FUN_0054d9b0(CPlatform *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl
core_platfrm_cpp_CPlatform_renderBackground_FUN_0054d9b0(CPlatform *this_ptr,int layer_flag)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 != 0) {
    return;
  }
  if (layer_flag == 0) {
    return;
  }
  if ((this_ptr->one_shot < 2) && (this_ptr->render_in_background_when_not_moving_flag == 0)) {
    return;
  }
  if (this_ptr->render_in_background_when_not_moving_flag != 0) {
    if ((this_ptr->state == (PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END)) ||
       (this_ptr->state == 4)) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->to_end_event);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->to_start_event);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    if (this_ptr->render_in_background_when_not_moving_flag == 0) {
      this_ptr->one_shot = 3;
    }
    else {
      this_ptr->unk3 = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffd4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    if ((this_ptr->recompute_fog == 0) ||
       (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
       iVar1 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->model,0.0,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      return;
    }
    g_CDemonSetPtr->per_pixel_lighting_enabled = 1;
    g_FlatShadingLightLevel = (*((g_CurrentSceneCamera->base).vtable)->calculatePerspective)();
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
    g_CDemonSetPtr->per_pixel_lighting_enabled = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return;
}
