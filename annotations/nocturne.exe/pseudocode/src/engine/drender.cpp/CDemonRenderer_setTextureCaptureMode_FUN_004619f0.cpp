// Name: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
// Address: 004619f0
// Address Range: [[004619f0, 00461a27]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer *this_ptr,int enable_advanced_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer *this_ptr,int enable_advanced_mode)

{
  if (this_ptr->face_count != 0) {
    this_ptr->texture_capture_enabled = 0;
    return;
  }
  _DAT_01b4d7b0 = 0xffffffff;
  _DAT_01b4d7ac = this_ptr->face_count;
  this_ptr->texture_capture_enabled = (enable_advanced_mode != 0) + 1;
  return;
}
