// Name: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190
// Address: 00484190
// Address Range: [[00484190, 0048419b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190(CDemonRenderer *this_ptr,int enabled)

{
  this_ptr->advanced_culling_enabled = enabled;
  return;
}
