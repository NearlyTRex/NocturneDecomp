// Name: core_gore.cpp_CGore_loadAssets_FUN_004cec70
// Address: 004cec70
// Address Range: [[004cec70, 004ced3a]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004cec70(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004cec70(CGore *this_ptr)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  pSVar1 = (SMRGLTextureBasic *)&DAT_005fed4c;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fed34);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,pSVar1);
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != (SMRGLTextureBasic *)&DAT_005fedac);
  iVar3 = 0;
  pSVar1 = (SMRGLTextureBasic *)&DAT_005fef2c;
  do {
    pSVar2 = (SMRGLTextureBasic *)(&DAT_005fedac + iVar3 * 0x180);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x10;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = (SMRGLTextureBasic *)&DAT_005ff664;
  do {
    pSVar2 = (SMRGLTextureBasic *)(&DAT_005ff3ac + iVar3 * 0x2b8);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x1d;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005ffeac);
  return;
}
