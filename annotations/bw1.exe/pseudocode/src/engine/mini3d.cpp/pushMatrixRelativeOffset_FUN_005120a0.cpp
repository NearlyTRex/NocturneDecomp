// Name: engine_mini3d.cpp_pushMatrixRelativeOffset_FUN_005120a0
// Address: 005120a0
// Address Range: [[005120a0, 00512132]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_005120a0(CVector3f *offset)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_005120a0(CVector3f *offset)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  
  bVar6 = 0;
  g_PTR_01d22580 = g_PTR_01d22580 + 1;
  if (9 < (int)g_PTR_01d22580) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 1251;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance");
  }
  iVar1 = (int)g_PTR_01d22580 * 0x3c;
  iVar2 = (int)g_PTR_01d22580 * 0xf;
  pfVar4 = (float *)g_PTR_01d2257c;
  pfVar5 = &g_FLOAT_01d22584 + iVar2;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  *(float *)(iVar1 + 0x1d225a8) = *(float *)(g_PTR_01d2257c + 0x24) - offset->x;
  g_INT_01d24ffc = 1;
  *(float *)(iVar1 + 0x1d225ac) = *(float *)(g_PTR_01d2257c + 0x28) - offset->y;
  pfVar4 = (float *)(g_PTR_01d2257c + 0x2c);
  g_PTR_01d2257c = (byte *)(&g_FLOAT_01d22584 + iVar2);
  *(float *)(iVar1 + 0x1d225b0) = *pfVar4 - offset->z;
  return;
}
