// Name: engine_mini3d.cpp_pushMatrixRelativeOffset_FUN_004ed870
// Address: 004ed870
// Address Range: [[004ed870, 004ed902]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004ed870(CVector3f *offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004ed870(CVector3f *offset)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  _DAT_01d76d00 = _DAT_01d76d00 + 1;
  if (9 < _DAT_01d76d00) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x4e3;
    core_main_c_FUN_004e4330("Matrix unbalance");
  }
  iVar2 = _DAT_01d76d00 * 0x3c;
  puVar4 = _DAT_01d76cfc;
  puVar5 = (uint *)(&DAT_01d76d04 + iVar2);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  *(float *)(iVar2 + 0x1d76d28) = (float)_DAT_01d76cfc[9] - offset->x;
  _DAT_01d7977c = 1;
  *(float *)(iVar2 + 0x1d76d2c) = (float)_DAT_01d76cfc[10] - offset->y;
  pfVar1 = (float *)(_DAT_01d76cfc + 0xb);
  _DAT_01d76cfc = (uint *)(&DAT_01d76d04 + iVar2);
  *(float *)(iVar2 + 0x1d76d30) = *pfVar1 - offset->z;
  return;
}
