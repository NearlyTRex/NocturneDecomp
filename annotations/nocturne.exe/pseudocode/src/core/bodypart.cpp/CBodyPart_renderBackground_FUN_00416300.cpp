// Name: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00416300
// Address: 00416300
// Address Range: [[00416300, 00416429]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_renderBackground_FUN_00416300(CBodyPart *param_1,int param_2)

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_renderBackground_FUN_00416300(CBodyPart *param_1,int param_2)

{
  byte *puVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  int iVar3;
  CBoundingBox3D local_20;
  
  if (param_1->render_in_background == 0) {
    if ((((param_2 != 0) && (param_1->carried_by_actor == (CDemonActor *)0x0)) &&
        ((param_1->physics_box).is_valid == 0)) &&
       (iVar2 = (*((param_1->base).vtable._ub)->getAllowedMeleeAttackTypes)(&param_1->base),
       puVar1 = PTR_DAT_005ad350, iVar2 == 0)) {
      param_1->render_in_background = 1;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (puVar1,"%s going into background\n",param_1);
    }
    if (param_1->render_in_background == 0) {
      return;
    }
  }
  if ((param_1->render_in_background != 1) || ((param_1->physics_box).is_valid == 0)) {
    param_1->render_in_background = 2;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    *(int *)(0x01E57284 + 0x15a8a0) = param_1->dont_use_normals;
    this_ptr = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_20);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
    if ((iVar2 != 0) &&
       ((param_1->transparent_geometry_flag == 0 ||
        (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
        iVar3 != 0)))) {
      core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(param_1,-1);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    *(uint *)(0x01E57284 + 0x15a8a0) = 0;
    param_1->is_visible = iVar2;
  }
  return;
}
