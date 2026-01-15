// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
// Address: 0048db80
// Address Range: [[0048db80, 0048dc12]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
          (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
  if (this_ptr->texture_capture_enabled != 0) {
    g_CaptureTextureCount = g_CaptureTextureCount + 1;
    if (100 < g_CaptureTextureCount) {
      g_CurrentFilename = "..\\engine\\drender.cpp";
      g_CurrentLineNumber = 0xbf3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDR::texture - Too many captured textures");
    }
    iVar2 = g_CaptureTextureCount;
    g_CapturedTextureArray[g_CaptureTextureCount * 3].base.count = (texture->base).count;
    pcVar3 = texture->texture_name;
    pcVar4 = g_CapturedTextureArray[iVar2 * 3].texture_name;
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
