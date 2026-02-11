// Name: core_flame.cpp_CFlame_setup_FUN_004c9b90
// Address: 004c9b90
// Address Range: [[004c9b90, 004c9ba4]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_setup_FUN_004c9b90(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_setup_FUN_004c9b90(CFlame *this_ptr)

{
  uint uVar1;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  pSVar2 = &DAT_0067b1c0;
  do {
    texture = &DAT_0067b100 + iVar3 * 8;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
      texture = texture + 1;
    } while (texture != pSVar2);
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 8;
  } while (iVar3 < 5);
  uVar1 = rand();
  *(uint *)this_ptr->unk5 = uVar1 & 1;
  return;
}
