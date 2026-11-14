// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
// Address: 0046e5e0
// Address Range: [[0046e5e0, 0046e672]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  engine_texture_cpp_FUN_0056aa10(texture);
  if (this_ptr->texture_capture_enabled != 0) {
    _DAT_01bdd85c = _DAT_01bdd85c + 1;
    if (100 < _DAT_01bdd85c) {
      _DAT_01d71de0 = "..\\engine\\drender.cpp";
      _DAT_01d71de4 = 0xbf3;
      core_main_c_FUN_004e4330("CDR::texture - Too many captured textures");
    }
    iVar2 = _DAT_01bdd85c * 0x48;
    *(int *)(iVar2 + 0x1c09784) = (texture->base).count;
    pcVar3 = texture->texture_name;
    pcVar4 = (char *)(iVar2 + 0x1c09788);
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  return;
}
