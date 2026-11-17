// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
// Address: 00484f00
// Address Range: [[00484f00, 00484f92]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  engine_texture_cpp_ensureTextureLoaded_FUN_00597a20(texture);
  if (this_ptr->texture_capture_enabled != 0) {
    g_INT_01bc1284 = g_INT_01bc1284 + 1;
    if (100 < g_INT_01bc1284) {
      g_CHAR_PTR_01d1d400 = "..\\engine\\drender.cpp";
      g_INT_01d1d404 = 0xbf3;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CDR::texture - Too many captured textures");
    }
    iVar2 = g_INT_01bc1284;
    g_SMRGLTextureBasic_ARRAY_01bed1a8[g_INT_01bc1284 * 3].base.count = (texture->base).count;
    pcVar3 = texture->texture_name;
    pcVar4 = g_SMRGLTextureBasic_ARRAY_01bed1a8[iVar2 * 3].texture_name;
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
