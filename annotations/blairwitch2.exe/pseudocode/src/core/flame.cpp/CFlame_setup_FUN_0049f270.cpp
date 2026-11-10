// Name: core_flame.cpp_CFlame_setup_FUN_0049f270
// Address: 0049f270
// Address Range: [[0049f270, 0049f2d5]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_setup_FUN_0049f270(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_setup_FUN_0049f270(CFlame *this_ptr)

{
  uint uVar1;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  pSVar2 = (SMRGLTextureBasic *)&DAT_00615bc0;
  do {
    texture = (SMRGLTextureBasic *)(&DAT_00615b00 + iVar3 * 0xc0);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
      texture = texture + 0x18;
    } while (texture != pSVar2);
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 0xc0;
  } while (iVar3 < 5);
  uVar1 = rand();
  this_ptr->texture_flip = uVar1 & 1;
  return;
}
