// Name: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
// Address: 004613c0
// Address Range: [[004613c0, 004613cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0(CDemonRenderer *this_ptr,int enabled)

{
  this_ptr->advanced_culling_enabled = enabled;
  return;
}
