// Name: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00446440
// Address: 00446440
// Address Range: [[00446440, 004464ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_00446440(int *param_1,int param_2)

#include "nocturne.h"

void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_00446440(int *param_1,int param_2)

{
  SMRGLHeaderPrimitive local_30 [4];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_2c = 3;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_18 = (uint)(*param_1 - param_2) / 0xc;
  local_14 = (uint)(param_1[1] - param_2) / 0xc;
  local_10 = (uint)(param_1[2] - param_2) / 0xc;
  core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005340b0(g_CDemonSetPtr,local_30,1);
  return;
}
