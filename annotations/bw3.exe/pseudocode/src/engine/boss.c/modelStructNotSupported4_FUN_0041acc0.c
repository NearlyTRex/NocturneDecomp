// Name: engine_boss.c_modelStructNotSupported4_FUN_0041acc0
// Address: 0041acc0
// Address Range: [[0041acc0, 0041ad0f]]
// Convention: __stack_esi
// Signature: void __stack_esi engine_boss_c_modelStructNotSupported4_FUN_0041acc0(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *out_bounds)

#include "nocturne.h"

void __stack_esi engine_boss_c_modelStructNotSupported4_FUN_0041acc0(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *out_bounds)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int aiStack_3c [13];
  
  bVar3 = 0;
  g_CHAR_PTR_01d71de0 = "..\\engine\\boss.c";
  g_INT_01d71de4 = 0x44;
  core_main_c_displayErrorAndQuit_FUN_004e4330("modelStruct not supported");
  memset(aiStack_3c,0,0x34);
  piVar2 = aiStack_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    (out_bounds->min_scaled).x = *piVar2;
    piVar2 = piVar2 + (uint)bVar3 * -2 + 1;
    out_bounds = (SMRGLModelBounds *)((int)out_bounds + (uint)bVar3 * -8 + 4);
  }
  return;
}
