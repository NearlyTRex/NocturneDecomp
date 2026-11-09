// Name: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
// Address: 00483d80
// Address Range: [[00483d80, 00483dc0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer *this_ptr,int state_flag)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer *this_ptr,int state_flag)

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
  engine_prim_c_FUN_0053d7a0(culling_mode);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
            (this_ptr,(uint)(state_flag == 0));
  return;
}
