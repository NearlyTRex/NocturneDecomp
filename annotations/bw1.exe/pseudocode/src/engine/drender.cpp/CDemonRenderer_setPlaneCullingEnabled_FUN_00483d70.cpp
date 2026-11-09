// Name: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
// Address: 00483d70
// Address Range: [[00483d70, 00483d7b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer *this_ptr,int enabled)

{
  *(int *)(this_ptr + 0xc) = enabled;
  return;
}
