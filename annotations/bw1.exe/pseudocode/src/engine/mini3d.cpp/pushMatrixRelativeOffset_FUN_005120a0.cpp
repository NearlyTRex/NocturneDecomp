// Name: engine_mini3d.cpp_pushMatrixRelativeOffset_FUN_005120a0
// Address: 005120a0
// Address Range: [[005120a0, 00512132]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_005120a0(CVector3f *offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_005120a0(CVector3f *offset)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  _DAT_01d22580 = _DAT_01d22580 + 1;
  if (9 < _DAT_01d22580) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x4e3;
    core_main_c_FUN_005030e0("Matrix unbalance");
  }
  iVar2 = _DAT_01d22580 * 0x3c;
  puVar4 = _DAT_01d2257c;
  puVar5 = (uint *)(&DAT_01d22584 + iVar2);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  *(float *)(iVar2 + 0x1d225a8) = (float)_DAT_01d2257c[9] - offset->x;
  _DAT_01d24ffc = 1;
  *(float *)(iVar2 + 0x1d225ac) = (float)_DAT_01d2257c[10] - offset->y;
  pfVar1 = (float *)(_DAT_01d2257c + 0xb);
  _DAT_01d2257c = (uint *)(&DAT_01d22584 + iVar2);
  *(float *)(iVar2 + 0x1d225b0) = *pfVar1 - offset->z;
  return;
}
