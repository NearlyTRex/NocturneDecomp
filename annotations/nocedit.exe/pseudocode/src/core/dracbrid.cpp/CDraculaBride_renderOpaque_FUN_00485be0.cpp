// Name: core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0
// Address: 00485be0
// Address Range: [[00485be0, 00485dc0]]
// Convention: __cdecl
// Signature: int core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0(CDraculaBride * this_ptr)

#include "nocturne.h"

int __cdecl core_dracbrid_cpp_CDraculaBride_renderOpaque_FUN_00485be0(CDraculaBride *this_ptr)

{
  int iVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  BADSPACEBASE *in_ESP;
  uint render_flags;
  float fVar3;
  float render_alpha;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
  }
  if (this_ptr->mistState != 2) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((((iVar2 == 0) || (this_ptr->mistState == 0)) && (iVar1 == 0)) &&
       (*(int *)(this_ptr->base_enemy).base_character.field2_0x240c == 0)) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
      this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                              ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffe0);
      render_alpha = 6.645305e-39;
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
      if (iVar1 != 0) {
        iVar2 = this_ptr->mistState;
        (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\x01';
        (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
        (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
        (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
        if (iVar2 == 0) {
          if (this_ptr->exploded == 0) {
            core_charactr_cpp_CCharacter_FUN_00429aa0((CCharacter *)this_ptr);
          }
        }
        else {
          if (iVar2 == 1) {
            fVar3 = (1.0 - this_ptr->vanishTimer) / DAT_0065cd88;
          }
          else {
            fVar3 = ((float)0.5 - this_ptr->vanishTimer) / DAT_0065cd88;
            if (fVar3 < 0.0) {
              fVar3 = 0.0;
            }
          }
          if (0.0 < fVar3) {
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
                      (g_CDemonRendererPtr,render_alpha);
            engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
                      (g_CDemonRendererPtr,1);
            if ((double)CONCAT44 /* combine 2-byte values */(this_ptr_00,render_alpha) <= 0.5) {
              render_flags = 0x267;
            }
            else {
              render_flags = 0x2e7;
            }
            core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                      (&(this_ptr->base_enemy).base_character.model,-1,render_flags,1,0);
            engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr)
            ;
          }
        }
        if (DAT_02f43978 != 0) {
          iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_render_FUN_0052e700
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,
                       (CDemonActor *)this_ptr);
            (*((this_ptr->base_enemy).base_character.base_actor.vtable)->renderTargetPoints)
                      ((CDemonActor *)this_ptr);
          }
        }
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      return iVar1;
    }
  }
  return 0;
}
