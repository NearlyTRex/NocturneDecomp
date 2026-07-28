// Name: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
// Address: 00461050
// Address Range: [[00461050, 00461060]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer *this_ptr,int enabled)

{
  DAT_005b7644 = enabled;
  this_ptr->face_capture_enabled = enabled;
  return;
}
