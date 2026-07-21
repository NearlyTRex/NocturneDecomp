// Name: core_ground.cpp_CGround_render_FUN_004b2110
// Address: 004b2110
// Address Range: [[004b2110, 004b21a1]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_render_FUN_004b2110(int param_1)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_render_FUN_004b2110(int param_1)

{
  byte local_18 [4];
  int iStack_14;
  
  engine_matrix_c_getCameraOrigin_FUN_004ce760(local_18);
  *(int *)(param_1 + 0x2c) = 0x4b2121 / (*(int *)(param_1 + 0x1c) << 8);
  *(int *)(param_1 + 0x30) = iStack_14 / (*(int *)(param_1 + 0x1c) << 8);
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004b1910(param_1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004b1ff0(param_1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  return;
}
