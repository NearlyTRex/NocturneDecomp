// Name: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
// Address: 00483e20
// Address Range: [[00483e20, 00483e30]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer *this_ptr,int enabled)

{
  DAT_0061b4c0 = enabled;
  *(int *)(this_ptr + 0x10) = enabled;
  return;
}
