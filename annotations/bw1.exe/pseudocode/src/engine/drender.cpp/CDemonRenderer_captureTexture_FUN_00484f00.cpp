// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
// Address: 00484f00
// Address Range: [[00484f00, 00484f92]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  SMRGLTextureBasic SVar1;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  SMRGLTextureBasic *pSVar4;
  
  engine_texture_cpp_FUN_00597a20(texture);
  if (*(int *)(this_ptr + 0x1c) != 0) {
    _DAT_01bc1284 = _DAT_01bc1284 + 1;
    if (100 < _DAT_01bc1284) {
      _DAT_01d1d400 = "..\\engine\\drender.cpp";
      _DAT_01d1d404 = 0xbf3;
      core_main_c_FUN_005030e0("CDR::texture - Too many captured textures");
    }
    iVar2 = _DAT_01bc1284 * 0x48;
    *(uint *)(iVar2 + 0x1bed1ac) = *(uint *)(texture + 4);
    pSVar3 = texture + 8;
    pSVar4 = (SMRGLTextureBasic *)(iVar2 + 0x1bed1b0);
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
