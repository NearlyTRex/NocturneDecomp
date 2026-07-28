// Name: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
// Address: 00460fb0
// Address Range: [[00460fb0, 00460ff0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer *this_ptr,int state_flag)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer *this_ptr,int state_flag)

{
  int culling_mode;
  
  if (state_flag == 0) {
    culling_mode = 0;
  }
  else if (this_ptr->advanced_culling_enabled == 0) {
    culling_mode = 1;
  }
  else {
    culling_mode = 2;
  }
  engine_prim_c_setCullingMode_FUN_004f9450(culling_mode);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
            (this_ptr,(uint)(state_flag == 0));
  return;
}
