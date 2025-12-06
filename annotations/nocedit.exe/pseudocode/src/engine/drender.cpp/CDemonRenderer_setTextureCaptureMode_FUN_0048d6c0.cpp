// Name: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
// Address: 0048d6c0
// Address Range: [[0048d6c0, 0048d6f7]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
          (CDemonRenderer *this_ptr,int enable_advanced_mode)

{
  if (this_ptr->face_count != 0) {
    this_ptr->texture_capture_enabled = 0;
    return;
  }
  g_CaptureTextureCount = -1;
  g_CaptureFaceCount = this_ptr->face_count;
  this_ptr->texture_capture_enabled = (enable_advanced_mode != 0) + 1;
  return;
}
