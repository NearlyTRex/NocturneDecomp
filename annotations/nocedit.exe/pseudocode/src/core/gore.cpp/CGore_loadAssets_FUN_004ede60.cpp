// Name: core_gore.cpp_CGore_loadAssets_FUN_004ede60
// Address: 004ede60
// Address Range: [[004ede60, 004edf2a]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004ede60(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004ede60(CGore *this_ptr)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  pSVar1 = g_BloodSplatTextures;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_BloodParticleTexture);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,pSVar1);
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != g_BloodSplatTextures + 4);
  iVar3 = 0;
  pSVar1 = g_BloodSplatAnimTextures;
  do {
    pSVar1 = pSVar1 + 0x10;
    pSVar2 = g_BloodSplatAnimTextures + iVar3 * 0x10;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = g_BloodPoolAnimTextures;
  do {
    pSVar1 = pSVar1 + 0x1d;
    pSVar2 = g_BloodPoolAnimTextures + iVar3 * 0x1d;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FootstepTexture);
  return;
}
