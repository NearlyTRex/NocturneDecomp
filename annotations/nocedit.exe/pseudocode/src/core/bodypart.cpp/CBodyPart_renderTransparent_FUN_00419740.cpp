// Name: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740
// Address: 00419740
// Address Range: [[00419740, 00419804]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart *this_ptr)

{
  int iVar1;
  
  if ((*(int *)(this_ptr->unk + 0xdd4) != 0) &&
     ((*(int *)this_ptr->unk < 2 || (*(int *)(this_ptr->unk + 0x5f4) != 0)))) {
    if (*(int *)(this_ptr->unk + 0xb5c) != 0) {
      g_CDemonSetPtr->unk_lighting_param2 = *(int *)(this_ptr->unk + 0xb58);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                (g_CDemonRendererPtr2,*(int *)(this_ptr->unk + 0xb68));
      core_bodypart_cpp_CBodyPart_FUN_00419340(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      g_CDemonSetPtr->unk_lighting_param2 = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)(this_ptr->unk + 0x5f4)) {
      do {
        core_flame_cpp_FUN_004ca110();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this_ptr->unk + 0x5f4));
    }
    return 1;
  }
  return 0;
}
