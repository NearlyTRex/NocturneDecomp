// Name: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0
// Address: 004606e0
// Address Range: [[004606e0, 004606f9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0(uint param_1,uint *param_2)

{
  engine_matrix_c_setCameraOrigin_FUN_004ce710(*param_2,param_2[1],param_2[2]);
  return;
}
