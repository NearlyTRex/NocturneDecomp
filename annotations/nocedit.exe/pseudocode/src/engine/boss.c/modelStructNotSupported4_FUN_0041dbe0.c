// Name: engine_boss.c_modelStructNotSupported4_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041dc1e] [03fc37bf, 03fc381f]]
// Convention: __stack_esi
// Signature: void __stack_esi engine_boss_c_modelStructNotSupported4_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *out_bounds)

#include "nocturne.h"

void __stack_esi engine_boss_c_modelStructNotSupported4_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *out_bounds)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 68;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  (out_bounds->min_scaled).x = local_3c;
  (out_bounds->min_scaled).y = iStack_38;
  (out_bounds->min_scaled).z = iStack_34;
  (out_bounds->max_scaled).x = iStack_30;
  (out_bounds->max_scaled).y = iStack_2c;
  (out_bounds->max_scaled).z = iStack_28;
  (out_bounds->center_scaled).x = iStack_24;
  (out_bounds->center_scaled).y = iStack_20;
  (out_bounds->center_scaled).z = iStack_1c;
  out_bounds->radius_scaled = iStack_18;
  (out_bounds->extent).x = iStack_14;
  (out_bounds->extent).y = iStack_10;
  (out_bounds->extent).z = iStack_c;
  return;
}
