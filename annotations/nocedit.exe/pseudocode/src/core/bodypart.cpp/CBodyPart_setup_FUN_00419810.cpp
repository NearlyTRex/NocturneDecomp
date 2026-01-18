// Name: core_bodypart.cpp_CBodyPart_setup_FUN_00419810
// Address: 00419810
// Address Range: [[00419810, 0041981c]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_setup_FUN_00419810(CBodyPart * this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00419810(CBodyPart *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  iVar1 = 0;
  if (0 < *(int *)(this_ptr->field1_0x158 + 0x34)) {
    texture = (SMRGLTextureBasic *)(this_ptr->field1_0x158 + 0x38);
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
      texture = texture + 1;
    } while (iVar1 < *(int *)(this_ptr->field1_0x158 + 0x34));
  }
  if ((*(int *)(this_ptr->field1_0x158 + 0xb5c) == 0) &&
     (*(int *)(this_ptr->field1_0x158 + 0x5f4) == 0)) {
    return;
  }
  (this_ptr->base_actor).is_transparent = 1;
  return;
}
