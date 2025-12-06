// Name: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
// Address: 0048c9f0
// Address Range: [[0048c9f0, 0048c9fb]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
          (CDemonRenderer *this_ptr,int enabled)

{
  this_ptr->plane_culling_enabled = enabled;
  return;
}
