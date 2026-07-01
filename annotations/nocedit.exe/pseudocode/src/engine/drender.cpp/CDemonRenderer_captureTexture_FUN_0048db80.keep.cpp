// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
// Address: 0048db80
// MANUAL RECONSTRUCTION
// Address Range: [[0048db80, 0048dc12]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
  if (this_ptr->texture_capture_enabled != 0) {
    g_CaptureTextureCount = g_CaptureTextureCount + 1;
    if (100 < g_CaptureTextureCount) {
      g_CurrentFilename = "..\\engine\\drender.cpp";
      g_CurrentLineNumber = 3059;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDR::texture - Too many captured textures");
    }
    g_CapturedTextureArray[g_CaptureTextureCount * 3].base.count = (texture->base).count;
    strcpy(g_CapturedTextureArray[g_CaptureTextureCount * 3].texture_name, texture->texture_name);
  }
  return;
}
