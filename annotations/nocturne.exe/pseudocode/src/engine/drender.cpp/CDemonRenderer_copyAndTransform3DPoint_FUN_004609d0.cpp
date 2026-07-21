// Name: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
// Address: 004609d0
// Address Range: [[004609d0, 004609f9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(uint param_1,uint *param_2)

{
  byte auStack_10 [4];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  engine_3d_c_processCameraRelativePoint_FUN_004044d0(auStack_10);
  return;
}
