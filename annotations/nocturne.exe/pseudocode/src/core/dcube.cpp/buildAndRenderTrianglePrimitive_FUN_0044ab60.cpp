// Name: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60
// Address: 0044ab60
// Address Range: [[0044ab60, 0044abce]]
// Convention: unknown
// Signature: void core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60(int *param_1,int param_2)

#include "nocturne.h"

void core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60(int *param_1,int param_2)

{
  byte local_30 [4];
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
  core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0050df40(0x01E57284,local_30,1);
  return;
}
