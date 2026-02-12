// Name: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740
// Address: 00419740
// Address Range: [[00419740, 00419804]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart *this_ptr)

{
  SBodyPartFire *pSVar1;
  int iVar2;
  
  if ((this_ptr->is_visible != 0) &&
     ((this_ptr->render_in_background < 2 || (this_ptr->fire_count != 0)))) {
    if (this_ptr->transparent_geometry_flag != 0) {
      g_CDemonSetPtr->unk_lighting_param2 = this_ptr->dont_use_normals;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                (g_CDemonRendererPtr2,this_ptr->render_alpha);
      core_bodypart_cpp_CBodyPart_FUN_00419340(this_ptr,0x2e7);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      g_CDemonSetPtr->unk_lighting_param2 = 0;
    }
    iVar2 = 0;
    if (0 < this_ptr->fire_count) {
      pSVar1 = this_ptr->fires;
      do {
        core_flame_cpp_CFlame_renderTransparent_FUN_004ca110(&pSVar1->flame);
        iVar2 = iVar2 + 1;
        pSVar1 = (SBodyPartFire *)(&pSVar1->flame + 1);
      } while (iVar2 < this_ptr->fire_count);
    }
    return 1;
  }
  return 0;
}
