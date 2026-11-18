// Name: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
// Address: 004619f0
// Address Range: [[004619f0, 00461a27]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer *this_ptr,int enable_advanced_mode)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer *this_ptr,int enable_advanced_mode)

{
  if (this_ptr->shadow_pass_active != 0) {
    this_ptr->texture_capture_enabled = 0;
    return;
  }
  g_CaptureTextureCount = -1;
  g_CaptureFaceCount = this_ptr->shadow_pass_active;
  this_ptr->texture_capture_enabled = (enable_advanced_mode != 0) + 1;
  return;
}
