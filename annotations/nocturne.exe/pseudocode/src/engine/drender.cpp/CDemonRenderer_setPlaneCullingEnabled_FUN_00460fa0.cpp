// Name: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
// Address: 00460fa0
// Address Range: [[00460fa0, 00460fab]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer *this_ptr,int enabled)

{
  this_ptr->plane_culling_enabled = enabled;
  return;
}
