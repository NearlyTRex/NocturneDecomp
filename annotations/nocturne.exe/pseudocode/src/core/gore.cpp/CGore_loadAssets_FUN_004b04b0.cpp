// Name: core_gore.cpp_CGore_loadAssets_FUN_004b04b0
// Address: 004b04b0
// Address Range: [[004b04b0, 004b057a]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004b04b0(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004b04b0(CGore *this_ptr)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  pSVar1 = (SMRGLTextureBasic *)&DAT_005b96ec;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005b96d4);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,pSVar1);
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != (SMRGLTextureBasic *)&DAT_005b974c);
  iVar3 = 0;
  pSVar1 = (SMRGLTextureBasic *)&DAT_005b98cc;
  do {
    pSVar2 = (SMRGLTextureBasic *)(&DAT_005b974c + iVar3 * 0x180);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (g_CDemonRenderer_PTR_005ae704,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x10;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = (SMRGLTextureBasic *)&DAT_005ba004;
  do {
    pSVar2 = (SMRGLTextureBasic *)(&DAT_005b9d4c + iVar3 * 0x2b8);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (g_CDemonRenderer_PTR_005ae704,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x1d;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005ba84c);
  return;
}
