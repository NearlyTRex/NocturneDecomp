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
  
  pSVar1 = (SMRGLTextureBasic *)&DAT_00616808;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_006167f0);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,pSVar1);
    pSVar1 = pSVar1 + 0x18;
  } while (pSVar1 != (SMRGLTextureBasic *)&DAT_00616868);
  iVar3 = 0;
  pSVar1 = (SMRGLTextureBasic *)&DAT_006169e8;
  do {
    pSVar2 = (SMRGLTextureBasic *)(&DAT_00616868 + iVar3 * 0x180);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,pSVar2);
      pSVar2 = pSVar2 + 0x18;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x180;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = (SMRGLTextureBasic *)&DAT_00617120;
  do {
    pSVar2 = (SMRGLTextureBasic *)(&DAT_00616e68 + iVar3 * 0x2b8);
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,pSVar2);
      pSVar2 = pSVar2 + 0x18;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x2b8;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00617968);
  return;
}
