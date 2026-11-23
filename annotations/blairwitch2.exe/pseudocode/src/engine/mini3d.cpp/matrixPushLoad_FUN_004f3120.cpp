// Name: engine_mini3d.cpp_matrixPushLoad_FUN_004f3120
// Address: 004f3120
// Address Range: [[004f3120, 004f318e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_004f3120(float *frame)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_004f3120(float *frame)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_PTR_01d0991c = g_PTR_01d0991c + 1;
  if (9 < (int)g_PTR_01d0991c) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 1160;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance");
  }
  iVar1 = (int)g_PTR_01d0991c * 0xf;
  pfVar3 = &g_FLOAT_01d09920 + iVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *frame;
    frame = frame + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  g_PTR_01d09918 = (byte *)(&g_FLOAT_01d09920 + iVar1);
  g_INT_01d0c398 = 1;
  return;
}
