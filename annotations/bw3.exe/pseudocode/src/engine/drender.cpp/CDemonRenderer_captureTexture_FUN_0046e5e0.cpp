// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
// Address: 0046e5e0
// Address Range: [[0046e5e0, 0046e672]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(texture);
  if (this_ptr->texture_capture_enabled != 0) {
    g_CaptureTextureCount = g_CaptureTextureCount + 1;
    if (100 < g_CaptureTextureCount) {
      g_CurrentFilename = "..\\engine\\drender.cpp";
      g_CurrentLineNumber = 3059;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CDR::texture - Too many captured textures");
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
