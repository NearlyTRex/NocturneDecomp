// Name: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
// Address: 0046d500
// Address Range: [[0046d500, 0046d510]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer *this_ptr,int enabled)

{
  DAT_005fba40 = enabled;
  *(int *)(this_ptr + 0x10) = enabled;
  return;
}
