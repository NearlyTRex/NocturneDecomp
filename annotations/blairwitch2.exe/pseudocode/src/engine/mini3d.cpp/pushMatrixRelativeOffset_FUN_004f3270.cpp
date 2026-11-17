// Name: engine_mini3d.cpp_pushMatrixRelativeOffset_FUN_004f3270
// Address: 004f3270
// Address Range: [[004f3270, 004f3302]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004f3270(CVector3f *offset)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004f3270(CVector3f *offset)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  
  bVar6 = 0;
  g_PTR_01d0991c = g_PTR_01d0991c + 1;
  if (9 < (int)g_PTR_01d0991c) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\mini3d.cpp";
    g_INT_01d046a4 = 0x4d3;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance");
  }
  iVar1 = (int)g_PTR_01d0991c * 0x3c;
  iVar2 = (int)g_PTR_01d0991c * 0xf;
  pfVar4 = (float *)g_PTR_01d09918;
  pfVar5 = &g_FLOAT_01d09920 + iVar2;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  *(float *)(iVar1 + 0x1d09944) = *(float *)(g_PTR_01d09918 + 0x24) - offset->x;
  g_INT_01d0c398 = 1;
  *(float *)(iVar1 + 0x1d09948) = *(float *)(g_PTR_01d09918 + 0x28) - offset->y;
  pfVar4 = (float *)(g_PTR_01d09918 + 0x2c);
  g_PTR_01d09918 = (byte *)(&g_FLOAT_01d09920 + iVar2);
  *(float *)(iVar1 + 0x1d0994c) = *pfVar4 - offset->z;
  return;
}
