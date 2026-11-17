// Name: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
// Address: 00484a40
// Address Range: [[00484a40, 00484a77]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer *this_ptr,int enable_advanced_mode)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer *this_ptr,int enable_advanced_mode)

{
  if (this_ptr->shadow_pass_active != 0) {
    this_ptr->texture_capture_enabled = 0;
    return;
  }
  g_INT_01bc1284 = -1;
  g_INT_01bc1280 = this_ptr->shadow_pass_active;
  this_ptr->texture_capture_enabled = (enable_advanced_mode != 0) + 1;
  return;
}
