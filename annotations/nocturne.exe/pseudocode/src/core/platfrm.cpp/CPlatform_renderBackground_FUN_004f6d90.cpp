// Name: core_platfrm.cpp_CPlatform_renderBackground_FUN_004f6d90
// Address: 004f6d90
// Address Range: [[004f6d90, 004f6f4b]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_renderBackground_FUN_004f6d90(CPlatform *this_ptr,int layer_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_renderBackground_FUN_004f6d90(CPlatform *this_ptr,int layer_flag)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D local_2c;
  CVector3i CStack_14;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
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
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->to_end_event);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->to_start_event);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar1 == 0) {
    if (this_ptr->render_in_background_when_not_moving_flag == 0) {
      this_ptr->one_shot = 3;
    }
    else {
      this_ptr->rendered_in_background = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_2c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 != 0) {
    if ((this_ptr->recompute_fog == 0) ||
       (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                          (g_CDemonRenderer_PTR_005ae704), iVar1 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (&this_ptr->model,0.0,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
      return;
    }
    g_CDemonSet_PTR_005be368->per_pixel_lighting_enabled = 1;
    CStack_14.x = (int)ROUND((this_ptr->base).location.position.x * _DAT_005a1360);
    CStack_14.y = (int)ROUND((this_ptr->base).location.position.y * _DAT_005a1360);
    CStack_14.z = (int)ROUND((this_ptr->base).location.position.z * _DAT_005a1360);
    _DAT_014b7190 =
         core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
                   (_DAT_007f7370,&CStack_14,(SProjectedVertex *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,-1);
    g_CDemonSet_PTR_005be368->per_pixel_lighting_enabled = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return;
}
