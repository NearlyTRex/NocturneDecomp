// Name: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419130
// Address: 00419130
// Address Range: [[00419130, 00419279]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419130(CBodyPart *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419130(CBodyPart *this_ptr,int layer_flag)

{
  CConsole *pCVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar6 = 0;
  if (*(int *)&this_ptr->field_0xcc8 == 0) {
    if (this_ptr->render_in_background == 0) {
      if ((((layer_flag != 0) && (this_ptr->carried_by_actor == (CDemonActor *)0x0)) &&
          ((this_ptr->physics_box).is_valid == 0)) &&
         (iVar3 = (*((this_ptr->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr->base),
         pCVar1 = g_CConsolePtr, iVar3 == 0)) {
        this_ptr->render_in_background = 1;
        engine_console_cpp_FUN_00445430(pCVar1,"%s going into background\n",this_ptr);
      }
      if (this_ptr->render_in_background == 0) {
        return;
      }
    }
    if ((this_ptr->render_in_background != 1) || ((this_ptr->physics_box).is_valid == 0)) {
      this_ptr->render_in_background = 2;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
      g_CDemonSetPtr->disable_directional_lighting = this_ptr->dont_use_normals;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
      puVar4 = auStack_20;
      puVar5 = auStack_38;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = core_box_cpp_FUN_004207b0(auStack_38);
      if ((iVar3 != 0) &&
         ((this_ptr->transparent_geometry_flag == 0 ||
          (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
          iVar2 != 0)))) {
        core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00418e50(this_ptr,-1);
      }
      engine_matrix_c_pop_FUN_004839a0();
      g_CDemonSetPtr->disable_directional_lighting = 0;
      this_ptr->is_visible = iVar3;
    }
  }
  return;
}
