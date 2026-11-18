// Name: engine_mini3d.cpp_matrixPush_FUN_00511fc0
// Address: 00511fc0
// Address Range: [[00511fc0, 00512025]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPush_FUN_00511fc0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPush_FUN_00511fc0(void)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_PTR_01d22580 = g_PTR_01d22580 + 1;
  if (9 < (int)g_PTR_01d22580) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\mini3d.cpp";
    g_INT_01d1d404 = 0x4b7;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance");
  }
  pfVar2 = (float *)g_PTR_01d2257c;
  pfVar3 = &g_FLOAT_01d22584 + (int)g_PTR_01d22580 * 0xf;
  g_PTR_01d2257c = (byte *)(&g_FLOAT_01d22584 + (int)g_PTR_01d22580 * 0xf);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
