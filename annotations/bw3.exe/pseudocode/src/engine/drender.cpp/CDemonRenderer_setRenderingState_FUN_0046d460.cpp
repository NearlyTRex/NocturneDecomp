// Name: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
// Address: 0046d460
// Address Range: [[0046d460, 0046d4a0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer *this_ptr,int state_flag)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer *this_ptr,int state_flag)

{
  int culling_mode;
  
  if (state_flag == 0) {
    culling_mode = 0;
  }
  else if (*(int *)(this_ptr + 0x18) == 0) {
    culling_mode = 1;
  }
  else {
    culling_mode = 2;
  }
  engine_prim_c_FUN_00515500(culling_mode);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450
            (this_ptr,(uint)(state_flag == 0));
  return;
}
