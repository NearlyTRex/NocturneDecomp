// Name: core_gore.cpp_CGore_FUN_004ede60
// Address: 004ede60
// Address Range: [[004ede60, 004edf2a]]
// Convention: __cdecl
// Signature: void core_gore.cpp_CGore_FUN_004ede60(CGore * this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ede60(CGore *this_ptr)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  pSVar1 = &DAT_0067b9c8;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,&DAT_0067b9b0);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,pSVar1);
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != &DAT_0067ba28);
  iVar3 = 0;
  pSVar1 = &DAT_0067bba8;
  do {
    pSVar2 = &DAT_0067ba28 + iVar3 * 0x10;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x10;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = &DAT_0067c2e0;
  do {
    pSVar2 = &DAT_0067c028 + iVar3 * 0x1d;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x1d;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,&DAT_0067cb28);
  return;
}
