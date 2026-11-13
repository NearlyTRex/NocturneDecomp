// Name: engine_mini3d.cpp_matrixPushLoad_FUN_004f3120
// Address: 004f3120
// Address Range: [[004f3120, 004f318e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_004f3120(float *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_004f3120(float *frame)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d0991c = _DAT_01d0991c + 1;
  if (9 < _DAT_01d0991c) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x488;
    core_main_c_FUN_004e4500("Matrix unbalance");
  }
  iVar1 = _DAT_01d0991c * 0x3c;
  pfVar3 = (float *)(&DAT_01d09920 + iVar1);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *frame;
    frame = frame + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  _DAT_01d09918 = (float *)(&DAT_01d09920 + iVar1);
  _DAT_01d0c398 = 1;
  return;
}
