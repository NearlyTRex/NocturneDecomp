// Name: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
// Address: 00484a40
// Address Range: [[00484a40, 00484a77]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer *this_ptr,int enable_advanced_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer *this_ptr,int enable_advanced_mode)

{
  if (this_ptr->shadow_pass_active != 0) {
    this_ptr->texture_capture_enabled = 0;
    return;
  }
  _DAT_01bc1284 = 0xffffffff;
  _DAT_01bc1280 = this_ptr->shadow_pass_active;
  this_ptr->texture_capture_enabled = (enable_advanced_mode != 0) + 1;
  return;
}
