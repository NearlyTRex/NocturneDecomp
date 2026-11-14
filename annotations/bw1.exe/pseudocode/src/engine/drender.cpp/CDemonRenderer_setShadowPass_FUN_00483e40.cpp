// Name: engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
// Address: 00483e40
// Address Range: [[00483e40, 00483e50]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer *this_ptr,int value)

{
  DAT_00713a74 = value;
  this_ptr->shadow_pass_active = value;
  return;
}
