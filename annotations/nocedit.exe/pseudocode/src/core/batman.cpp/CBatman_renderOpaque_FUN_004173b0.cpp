// Name: core_batman.cpp_CBatman_renderOpaque_FUN_004173b0
// Address: 004173b0
// Address Range: [[004173b0, 0041757e]]
// Convention: __cdecl
// Signature: int core_batman.cpp_CBatman_renderOpaque_FUN_004173b0(CBatman * this_ptr)

#include "nocturne.h"

int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_004173b0(CBatman *this_ptr)

{
  int iVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  uint render_flags;
  double dStack_30;
  CBoundingBox3D local_2c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
  }
  if (((this_ptr->mist_state != 2) &&
      (((iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
        iVar2 == 0 || (this_ptr->mist_state == 0)) && (iVar1 == 0)))) &&
     (*(int *)(this_ptr->base_enemy).base_character.field2_0x240c == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,
                             (CBoundingBox3D *)((int)register0x00000010 + -0x2c));
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      iVar2 = this_ptr->mist_state;
      (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\x01';
      (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
      (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
      (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
      if (iVar2 == 0) {
        core_charactr_cpp_CCharacter_FUN_00429aa0((CCharacter *)this_ptr);
      }
      else {
        if (iVar2 == 1) {
          local_2c.min.y = (1.0 - this_ptr->vanish_timer) / 1.0f;
        }
        else {
          local_2c.min.y = ((float)0.5 - this_ptr->vanish_timer) / 1.0f;
          if (local_2c.min.y < 0.0) {
            local_2c.min.y = 0.0;
          }
        }
        dStack_30 = (double)local_2c.min.y;
        if (0.0 < dStack_30) {
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
                    (g_CDemonRendererPtr2,local_2c.min.y);
          engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
                    (g_CDemonRendererPtr2,1);
          if (dStack_30 <= 0.5) {
            render_flags = 0x267;
          }
          else {
            render_flags = 0x2e7;
          }
          core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                    (&(this_ptr->base_enemy).base_character.model,-1,render_flags,1,0);
          engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
        }
      }
      if ((DAT_02f43978 != 0) &&
         (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
         iVar2 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_0052e700
                  (&(this_ptr->base_enemy).base_character.model.motion_controller,
                   (CDemonActor *)this_ptr);
        (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->renderTargetPoints)
                  ((CDemonActor *)this_ptr);
      }
    }
    dStack_30._0_4_ = this_ptr;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
