// Name: engine_mini3d.cpp_matrixPushLoad_FUN_004ed720
// Address: 004ed720
// Address Range: [[004ed720, 004ed78e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_004ed720(float *frame)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_004ed720(float *frame)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_PTR_01d76d00 = g_PTR_01d76d00 + 1;
  if (9 < (int)g_PTR_01d76d00) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\mini3d.cpp";
    g_INT_01d71de4 = 0x498;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance");
  }
  iVar1 = (int)g_PTR_01d76d00 * 0xf;
  pfVar3 = &g_FLOAT_01d76d04 + iVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *frame;
    frame = frame + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  g_PTR_01d76cfc = (byte *)(&g_FLOAT_01d76d04 + iVar1);
  g_INT_01d7977c = 1;
  return;
}
