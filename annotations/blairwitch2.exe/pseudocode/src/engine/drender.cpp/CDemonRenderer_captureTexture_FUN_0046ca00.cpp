// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
// Address: 0046ca00
// Address Range: [[0046ca00, 0046ca92]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  SMRGLTextureBasic SVar1;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  SMRGLTextureBasic *pSVar4;
  
  engine_texture_cpp_FUN_00574e00(texture);
  if (this_ptr->texture_capture_enabled != 0) {
    _DAT_01ba5cc8 = _DAT_01ba5cc8 + 1;
    if (100 < _DAT_01ba5cc8) {
      _DAT_01d046a0 = "..\\engine\\drender.cpp";
      _DAT_01d046a4 = 0xbf3;
      core_main_c_FUN_004e4500("CDR::texture - Too many captured textures");
    }
    iVar2 = _DAT_01ba5cc8 * 0x48;
    *(uint *)(iVar2 + 0x1bd1bf0) = *(uint *)(texture + 4);
    pSVar3 = texture + 8;
    pSVar4 = (SMRGLTextureBasic *)(iVar2 + 0x1bd1bf4);
    do {
      SVar1 = *pSVar3;
      *pSVar4 = SVar1;
      if (SVar1 == (SMRGLTextureBasic)0x0) {
        return;
      }
      SVar1 = pSVar3[1];
      pSVar3 = pSVar3 + 2;
      pSVar4[1] = SVar1;
      pSVar4 = pSVar4 + 2;
    } while (SVar1 != (SMRGLTextureBasic)0x0);
  }
  return;
}
