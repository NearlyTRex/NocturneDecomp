// Name: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610
// Address: 00419610
// Address Range: [[00419610, 004196c6] [004196e0, 00419737]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart *this_ptr,int layer_flag)

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
       this_ptr_00 = g_CConsolePtr, iVar1 == 0)) {
      this_ptr->render_in_background = 1;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (this_ptr_00,"%s going into background\n",this_ptr);
    }
    if (this_ptr->render_in_background == 0) {
      return;
    }
  }
  if ((this_ptr->render_in_background != 1) || ((this_ptr->physics_box).is_valid == 0)) {
    this_ptr->render_in_background = 2;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    g_CDemonSetPtr->disable_directional_lighting = this_ptr->dont_use_normals;
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    if ((iVar1 != 0) &&
       ((this_ptr->transparent_geometry_flag == 0 ||
        (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
        iVar2 != 0)))) {
      core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00419340(this_ptr,-1);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    g_CDemonSetPtr->disable_directional_lighting = 0;
    this_ptr->is_visible = iVar1;
  }
  return;
}
