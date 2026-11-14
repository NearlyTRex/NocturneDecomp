// Name: engine_mini3d.cpp_pushMatrixRelativeOffset_FUN_004f3270
// Address: 004f3270
// Address Range: [[004f3270, 004f3302]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004f3270(CVector3f *offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_004f3270(CVector3f *offset)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  _DAT_01d0991c = _DAT_01d0991c + 1;
  if (9 < _DAT_01d0991c) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x4d3;
    core_main_c_FUN_004e4500("Matrix unbalance");
  }
  iVar2 = _DAT_01d0991c * 0x3c;
  puVar4 = _DAT_01d09918;
  puVar5 = (uint *)(&DAT_01d09920 + iVar2);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  *(float *)(iVar2 + 0x1d09944) = (float)_DAT_01d09918[9] - offset->x;
  _DAT_01d0c398 = 1;
  *(float *)(iVar2 + 0x1d09948) = (float)_DAT_01d09918[10] - offset->y;
  pfVar1 = (float *)(_DAT_01d09918 + 0xb);
  _DAT_01d09918 = (uint *)(&DAT_01d09920 + iVar2);
  *(float *)(iVar2 + 0x1d0994c) = *pfVar1 - offset->z;
  return;
}
