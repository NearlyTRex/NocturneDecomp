// Name: core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750
// Address: 00529750
// Address Range: [[00529750, 00529873]]
// Convention: __cdecl
// Signature: int core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750(CMoloch * this_ptr)

#include "nocturne.h"

int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_00529750(CMoloch *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    (this_ptr->base_hero).base_character.field13_0x2620[0] = '\0';
    (this_ptr->base_hero).base_character.field13_0x2620[1] = '\0';
    (this_ptr->base_hero).base_character.field13_0x2620[2] = '\0';
    (this_ptr->base_hero).base_character.field13_0x2620[3] = '\0';
  }
  if (*(int *)(this_ptr->base_hero).base_character.field2_0x240c == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base_hero).base_character.base_actor.vtable)->getBoundingBox)
                            ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffe4);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      iVar2 = this_ptr->morphing;
      (this_ptr->base_hero).base_character.field13_0x2620[0] = '\x01';
      (this_ptr->base_hero).base_character.field13_0x2620[1] = '\0';
      (this_ptr->base_hero).base_character.field13_0x2620[2] = '\0';
      (this_ptr->base_hero).base_character.field13_0x2620[3] = '\0';
      if (iVar2 == 0) {
        core_charactr_cpp_CCharacter_FUN_00429aa0((CCharacter *)this_ptr);
      }
      else {
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_CMorphModel_FUN_0052bae0((CMorphModel *)(this_ptr->field5_0x21e94 + 200));
      }
      if (DAT_02f43978 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_render_FUN_0052e700
                    (&(this_ptr->base_hero).base_character.model.motion_controller,
                     (CDemonActor *)this_ptr);
          (*((this_ptr->base_hero).base_character.base_actor.vtable)->renderTargetPoints)
                    ((CDemonActor *)this_ptr);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
