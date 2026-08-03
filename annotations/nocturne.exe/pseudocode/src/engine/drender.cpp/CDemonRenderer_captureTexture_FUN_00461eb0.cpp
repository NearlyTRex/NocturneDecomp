// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
// Address: 00461eb0
// Address Range: [[00461eb0, 00461f42]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(texture);
  if (this_ptr->texture_capture_enabled != 0) {
    _DAT_01b4d7b0 = _DAT_01b4d7b0 + 1;
    if (100 < _DAT_01b4d7b0) {
      g_CHAR_PTR_01cc4800 = "..\\engine\\drender.cpp";
      g_INT_01cc4804 = 0xafc;
      core_main_c_FUN_004c8440("CDR::texture - Too many captured textures");
    }
    iVar2 = _DAT_01b4d7b0 * 0x48;
    *(int *)(iVar2 + 0x1b796d8) = (texture->base).count;
    pcVar3 = texture->texture_name;
    pcVar4 = (char *)(iVar2 + 0x1b796dc);
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
