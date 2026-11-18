// Name: engine_mini3d.cpp_matrixPush_FUN_004f3190
// Address: 004f3190
// Address Range: [[004f3190, 004f31f5]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPush_FUN_004f3190(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPush_FUN_004f3190(void)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_PTR_01d0991c = g_PTR_01d0991c + 1;
  if (9 < (int)g_PTR_01d0991c) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\mini3d.cpp";
    g_INT_01d046a4 = 0x4a7;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance");
  }
  pfVar2 = (float *)g_PTR_01d09918;
  pfVar3 = &g_FLOAT_01d09920 + (int)g_PTR_01d0991c * 0xf;
  g_PTR_01d09918 = (byte *)(&g_FLOAT_01d09920 + (int)g_PTR_01d0991c * 0xf);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
