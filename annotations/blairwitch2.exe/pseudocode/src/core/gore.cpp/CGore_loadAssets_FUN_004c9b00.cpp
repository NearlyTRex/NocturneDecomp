// Name: core_gore.cpp_CGore_loadAssets_FUN_004c9b00
// Address: 004c9b00
// Address Range: [[004c9b00, 004c9bca]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004c9b00(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004c9b00(CGore *this_ptr)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  pSVar1 = g_SMRGLTextureBasic_ARRAY_00616808;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (g_CDemonRenderer_PTR_0060b280,&g_SMRGLTextureBasic_006167f0);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (g_CDemonRenderer_PTR_0060b280,pSVar1);
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != g_SMRGLTextureBasic_ARRAY_00616808 + sizeof(g_SMRGLTextureBasic_ARRAY_00616808) / sizeof(g_SMRGLTextureBasic_ARRAY_00616808[0]));
  iVar3 = 0;
  pSVar1 = g_SMRGLTextureBasic_ARRAY_00616868;
  do {
    pSVar1 = pSVar1 + 0x10;
    pSVar2 = g_SMRGLTextureBasic_ARRAY_00616868 + iVar3 * 0x10;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (g_CDemonRenderer_PTR_0060b280,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = g_SMRGLTextureBasic_ARRAY_00616e68;
  do {
    pSVar1 = pSVar1 + 0x1d;
    pSVar2 = g_SMRGLTextureBasic_ARRAY_00616e68 + iVar3 * 0x1d;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (g_CDemonRenderer_PTR_0060b280,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (g_CDemonRenderer_PTR_0060b280,&g_SMRGLTextureBasic_00617968);
  return;
}
