// Name: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
// Address: 0048ca00
// Address Range: [[0048ca00, 0048ca40]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
          (CDemonRenderer *this_ptr,int state_flag)

{
  int in_stack_0000000c;
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
  engine_prim_c_setCullingMode_FUN_00551b90(culling_mode);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
            ((CDemonRenderer *)state_flag,(uint)(in_stack_0000000c == 0));
  return;
}
