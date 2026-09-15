// Name: engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00461070
// Address: 00461070
// Address Range: [[00461070, 00461080]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00461070(CDemonRenderer *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00461070(CDemonRenderer *this_ptr,int value)

{
  g_TexturesDisabled = value;
  this_ptr->shadow_pass_active = value;
  return;
}
