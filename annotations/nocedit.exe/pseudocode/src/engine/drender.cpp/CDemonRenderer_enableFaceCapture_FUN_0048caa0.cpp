// Name: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
// Address: 0048caa0
// Address Range: [[0048caa0, 0048cab0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 (CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
          (CDemonRenderer *this_ptr,int enabled)

{
  g_VertexProcessingEnabled = enabled;
  this_ptr->face_capture_enabled = enabled;
  return;
}
