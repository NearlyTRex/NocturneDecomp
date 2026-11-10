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
  
  pSVar1 = (SMRGLTextureBasic *)&DAT_0061dccc;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061dcb4);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,pSVar1);
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != (SMRGLTextureBasic *)&DAT_0061dd2c);
  iVar3 = 0;
  pSVar1 = (SMRGLTextureBasic *)&DAT_0061deac;
  do {
    pSVar2 = (SMRGLTextureBasic *)(&DAT_0061dd2c + iVar3 * 0x180);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x10;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = (SMRGLTextureBasic *)&DAT_0061e5e4;
  do {
    pSVar2 = (SMRGLTextureBasic *)(&DAT_0061e32c + iVar3 * 0x2b8);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x1d;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061ee2c);
  return;
}
