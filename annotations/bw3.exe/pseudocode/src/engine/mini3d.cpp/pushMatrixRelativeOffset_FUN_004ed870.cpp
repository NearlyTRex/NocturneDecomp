// Name: engine_mini3d.cpp_pushMatrixRelativeOffset_FUN_004ed870
// Address: 004ed870
// Address Range: [[004ed870, 004ed902]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004ed870(CVector3f *offset)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004ed870(CVector3f *offset)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  
  bVar6 = 0;
  g_PTR_01d76d00 = g_PTR_01d76d00 + 1;
  if (9 < (int)g_PTR_01d76d00) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 1251;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance");
  }
  iVar1 = (int)g_PTR_01d76d00 * 0x3c;
  iVar2 = (int)g_PTR_01d76d00 * 0xf;
  pfVar4 = (float *)g_PTR_01d76cfc;
  pfVar5 = &g_FLOAT_01d76d04 + iVar2;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  *(float *)(iVar1 + 0x1d76d28) = *(float *)(g_PTR_01d76cfc + 0x24) - offset->x;
  g_INT_01d7977c = 1;
  *(float *)(iVar1 + 0x1d76d2c) = *(float *)(g_PTR_01d76cfc + 0x28) - offset->y;
  pfVar4 = (float *)(g_PTR_01d76cfc + 0x2c);
  g_PTR_01d76cfc = (byte *)(&g_FLOAT_01d76d04 + iVar2);
  *(float *)(iVar1 + 0x1d76d30) = *pfVar4 - offset->z;
  return;
}
