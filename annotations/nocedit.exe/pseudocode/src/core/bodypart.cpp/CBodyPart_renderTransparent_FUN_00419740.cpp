// Name: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740
// Address: 00419740
// Address Range: [[00419740, 00419804]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart *this_ptr)

{
  int iVar1;
  CFlame *this_ptr_00;
  
  if ((this_ptr->unk9 != 0) &&
     ((this_ptr->render_in_background < 2 || (*(int *)(this_ptr->unk5 + 0x5bc) != 0)))) {
    if (this_ptr->transparent_geometry_flag != 0) {
      g_CDemonSetPtr->unk_lighting_param2 = this_ptr->dont_use_normals;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                (g_CDemonRendererPtr2,*(int *)(this_ptr->unk6 + 4));
      core_bodypart_cpp_CBodyPart_FUN_00419340(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      g_CDemonSetPtr->unk_lighting_param2 = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x5bc)) {
      this_ptr_00 = (CFlame *)(this_ptr->unk5 + 0x5cc);
      do {
        core_flame_cpp_CFlame_FUN_004ca110(this_ptr_00);
        iVar1 = iVar1 + 1;
        this_ptr_00 = (CFlame *)(this_ptr_00[1].base.actor_name + 0xc);
      } while (iVar1 < *(int *)(this_ptr->unk5 + 0x5bc));
    }
    return 1;
  }
  return 0;
}
