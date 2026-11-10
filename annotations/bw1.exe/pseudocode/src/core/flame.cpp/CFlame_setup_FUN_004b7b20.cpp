// Name: core_flame.cpp_CFlame_setup_FUN_004b7b20
// Address: 004b7b20
// Address Range: [[004b7b20, 004b7b85]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_setup_FUN_004b7b20(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_setup_FUN_004b7b20(CFlame *this_ptr)

{
  uint uVar1;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  pSVar2 = (SMRGLTextureBasic *)&DAT_0061ce80;
  do {
    texture = (SMRGLTextureBasic *)(&DAT_0061cdc0 + iVar3 * 0xc0);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
      texture = texture + 1;
    } while (texture != pSVar2);
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 8;
  } while (iVar3 < 5);
  uVar1 = rand();
  this_ptr->texture_flip = uVar1 & 1;
  return;
}
