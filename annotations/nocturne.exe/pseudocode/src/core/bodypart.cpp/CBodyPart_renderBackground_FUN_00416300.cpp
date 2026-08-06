// Name: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00416300
// Address: 00416300
// Address Range: [[00416300, 00416429]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00416300(CBodyPart *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00416300(CBodyPart *this_ptr,int layer_flag)

{
  CConsole *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  int iVar2;
  CBoundingBox3D local_20;
  
  if (this_ptr->render_in_background == 0) {
    if ((((layer_flag != 0) && (this_ptr->carried_by_actor == (CDemonActor *)0x0)) &&
        ((this_ptr->physics_box).is_valid == 0)) &&
       (iVar1 = (*((this_ptr->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr->base),
       this_ptr_00 = g_CConsole_PTR_005ad350, iVar1 == 0)) {
      this_ptr->render_in_background = 1;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (this_ptr_00,"%s going into background\n");
    }
    if (this_ptr->render_in_background == 0) {
      return;
    }
  }
  if ((this_ptr->render_in_background != 1) || ((this_ptr->physics_box).is_valid == 0)) {
    this_ptr->render_in_background = 2;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    g_CDemonSet_PTR_005be368->disable_directional_lighting = this_ptr->dont_use_normals;
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
    if ((iVar1 != 0) &&
       ((this_ptr->transparent_geometry_flag == 0 ||
        (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                           (g_CDemonRenderer_PTR_005ae704), iVar2 != 0)))) {
      core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(this_ptr,-1);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    g_CDemonSet_PTR_005be368->disable_directional_lighting = 0;
    this_ptr->is_visible = iVar1;
  }
  return;
}
