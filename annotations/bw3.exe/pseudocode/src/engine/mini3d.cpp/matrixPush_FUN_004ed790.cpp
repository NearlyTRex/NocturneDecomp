// Name: engine_mini3d.cpp_matrixPush_FUN_004ed790
// Address: 004ed790
// Address Range: [[004ed790, 004ed7f5]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPush_FUN_004ed790(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPush_FUN_004ed790(void)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_PTR_01d76d00 = g_PTR_01d76d00 + 1;
  if (9 < (int)g_PTR_01d76d00) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\mini3d.cpp";
    g_INT_01d71de4 = 0x4b7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance");
  }
  pfVar2 = (float *)g_PTR_01d76cfc;
  pfVar3 = &g_FLOAT_01d76d04 + (int)g_PTR_01d76d00 * 0xf;
  g_PTR_01d76cfc = (byte *)(&g_FLOAT_01d76d04 + (int)g_PTR_01d76d00 * 0xf);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
