// Name: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
// Address: 00460fb0
// Address Range: [[00460fb0, 00460ff0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  engine_prim_c_setCullingMode_FUN_004f9450(uVar1);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(param_1,param_2 == 0);
  return;
}
