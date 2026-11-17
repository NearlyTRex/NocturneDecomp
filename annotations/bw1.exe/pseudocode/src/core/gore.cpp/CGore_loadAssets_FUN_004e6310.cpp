// Name: core_gore.cpp_CGore_loadAssets_FUN_004e6310
// Address: 004e6310
// Address Range: [[004e6310, 004e63da]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004e6310(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004e6310(CGore *this_ptr)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  pSVar1 = g_SMRGLTextureBasic_ARRAY_0061dccc;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (g_CDemonRenderer_PTR_00612560,&g_SMRGLTextureBasic_0061dcb4);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,pSVar1);
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != g_SMRGLTextureBasic_ARRAY_0061dccc + sizeof(g_SMRGLTextureBasic_ARRAY_0061dccc) / sizeof(g_SMRGLTextureBasic_ARRAY_0061dccc[0]));
  iVar3 = 0;
  pSVar1 = g_SMRGLTextureBasic_ARRAY_0061dd2c;
  do {
    pSVar1 = pSVar1 + 0x10;
    pSVar2 = g_SMRGLTextureBasic_ARRAY_0061dd2c + iVar3 * 0x10;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (g_CDemonRenderer_PTR_00612560,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = g_SMRGLTextureBasic_ARRAY_0061e32c;
  do {
    pSVar1 = pSVar1 + 0x1d;
    pSVar2 = g_SMRGLTextureBasic_ARRAY_0061e32c + iVar3 * 0x1d;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (g_CDemonRenderer_PTR_00612560,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (g_CDemonRenderer_PTR_00612560,&g_SMRGLTextureBasic_0061ee2c);
  return;
}
