// Name: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
// Address: 0048ce10
// Address Range: [[0048ce10, 0048ce1b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10 (CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
          (CDemonRenderer *this_ptr,int enabled)

{
  this_ptr->advanced_culling_enabled = enabled;
  return;
}
