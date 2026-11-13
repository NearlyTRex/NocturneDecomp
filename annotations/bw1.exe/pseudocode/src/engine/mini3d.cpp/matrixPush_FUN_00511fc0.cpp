// Name: engine_mini3d.cpp_matrixPush_FUN_00511fc0
// Address: 00511fc0
// Address Range: [[00511fc0, 00512025]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPush_FUN_00511fc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_matrixPush_FUN_00511fc0(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d22580 = _DAT_01d22580 + 1;
  if (9 < _DAT_01d22580) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x4b7;
    core_main_c_FUN_005030e0("Matrix unbalance");
  }
  puVar2 = _DAT_01d2257c;
  puVar3 = (uint *)(&DAT_01d22584 + _DAT_01d22580 * 0x3c);
  _DAT_01d2257c = (uint *)(&DAT_01d22584 + _DAT_01d22580 * 0x3c);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
