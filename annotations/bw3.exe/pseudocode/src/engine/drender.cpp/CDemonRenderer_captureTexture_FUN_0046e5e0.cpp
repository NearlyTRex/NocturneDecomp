// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
// Address: 0046e5e0
// Address Range: [[0046e5e0, 0046e672]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  SMRGLTextureBasic SVar1;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  SMRGLTextureBasic *pSVar4;
  
  engine_texture_cpp_FUN_0056aa10(texture);
  if (*(int *)(this_ptr + 0x1c) != 0) {
    _DAT_01bdd85c = _DAT_01bdd85c + 1;
    if (100 < _DAT_01bdd85c) {
      _DAT_01d71de0 = "..\\engine\\drender.cpp";
      _DAT_01d71de4 = 0xbf3;
      core_main_c_FUN_004e4330("CDR::texture - Too many captured textures");
    }
    iVar2 = _DAT_01bdd85c * 0x48;
    *(uint *)(iVar2 + 0x1c09784) = *(uint *)(texture + 4);
    pSVar3 = texture + 8;
    pSVar4 = (SMRGLTextureBasic *)(iVar2 + 0x1c09788);
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
