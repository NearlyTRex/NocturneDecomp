// Name: engine_mini3d.cpp_matrixPushLoad_FUN_00511f50
// Address: 00511f50
// Address Range: [[00511f50, 00511fbe]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_00511f50(float *frame)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_00511f50(float *frame)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_PTR_01d22580 = g_PTR_01d22580 + 1;
  if (9 < (int)g_PTR_01d22580) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 1176;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance");
  }
  iVar1 = (int)g_PTR_01d22580 * 0xf;
  pfVar3 = &g_FLOAT_01d22584 + iVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *frame;
    frame = frame + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  g_PTR_01d2257c = (byte *)(&g_FLOAT_01d22584 + iVar1);
  g_INT_01d24ffc = 1;
  return;
}
