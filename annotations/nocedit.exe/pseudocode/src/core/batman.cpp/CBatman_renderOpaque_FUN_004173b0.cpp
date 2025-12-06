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
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float fStack_20;
  ulonglong uVar3;
  float fVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
  }
  if (((this_ptr->mist_state != 2) &&
      (((iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
        iVar2 == 0 || (this_ptr->mist_state == 0)) && (iVar1 == 0)))) &&
     (*(int *)(this_ptr->base_enemy).base_character.field2_0x240c == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                            ((CDemonActor *)this_ptr,(CBoundingBox3D *)&fStack_20);
    fStack_20 = 6.010999e-39;
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
          fVar4 = (1.0 - this_ptr->vanish_timer) / DAT_0065a778;
        }
        else {
          fVar4 = ((float)0.5 - this_ptr->vanish_timer) / DAT_0065a778;
          if (fVar4 < 0.0) {
            fVar4 = 0.0;
          }
        }
        if (0.0 < fVar4) {
          fStack_20 = 6.011244e-39;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
                    (g_CDemonRendererPtr,unaff_ESI);
          engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
                    (g_CDemonRendererPtr,1);
          if ((double)CONCAT44 /* combine 2-byte values */(unaff_EBX,unaff_ESI) <= 0.5) {
            uVar3._0_4_ = 8.61799e-43;
            uVar3._4_4_ = 1.4013e-45;
          }
          else {
            uVar3._0_4_ = 1.04116e-42;
            uVar3._4_4_ = 1.4013e-45;
          }
          fStack_20 = 6.01135e-39;
          core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                    (&(this_ptr->base_enemy).base_character.model,-1,(uint)(float)uVar3,
                     (int)SUB84 /* extract 2-byte value */(uVar3,4),0);
          engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
        }
      }
      if ((DAT_02f43978 != 0) &&
         (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
         iVar2 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_0052e700
                  (&(this_ptr->base_enemy).base_character.model.motion_controller,
                   (CDemonActor *)this_ptr);
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->renderTargetPoints)
                  ((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
