// Name: core_flame.cpp_CFlame_setup_FUN_0048d050
// Address: 0048d050
// Address Range: [[0048d050, 0048d0b5]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_setup_FUN_0048d050(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_setup_FUN_0048d050(CFlame *this_ptr)

{
  uint uVar1;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  pSVar2 = (SMRGLTextureBasic *)&DAT_005b8ec0;
  do {
    texture = (SMRGLTextureBasic *)(&DAT_005b8e00 + iVar3 * 0xc0);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
      texture = texture + 1;
    } while (texture != pSVar2);
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 8;
  } while (iVar3 < 5);
  uVar1 = rand();
  this_ptr->texture_flip = uVar1 & 1;
  return;
}
