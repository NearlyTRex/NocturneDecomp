// Name: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
// Address: 0046b920
// Address Range: [[0046b920, 0046b930]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer *this_ptr,int enabled)

{
  DAT_006141e0 = enabled;
  this_ptr->face_capture_enabled = enabled;
  return;
}
