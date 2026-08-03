// Name: core_bodypart.cpp_CBodyPart_setup_FUN_00416500
// Address: 00416500
// Address Range: [[00416500, 00416565]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00416500(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00416500(CBodyPart *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = this_ptr->textures;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
      texture = texture + 1;
    } while (iVar1 < this_ptr->texture_count);
  }
  if ((this_ptr->transparent_geometry_flag == 0) && (this_ptr->fire_count == 0)) {
    return;
  }
  (this_ptr->base).is_transparent = 1;
  return;
}
