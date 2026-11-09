// Name: engine_mini3d.cpp_FUN_00511f4e
// Address: 00511f4e
// Address Range: [[00511f4e, 00511fbe]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00511f4e(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00511f4e(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d22580 = _DAT_01d22580 + 1;
  if (9 < _DAT_01d22580) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x498;
    core_main_c_FUN_005030e0("Matrix unbalance");
  }
  iVar1 = _DAT_01d22580 * 0x3c;
  puVar3 = (uint *)(&DAT_01d22584 + iVar1);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  _DAT_01d2257c = (uint *)(&DAT_01d22584 + iVar1);
  _DAT_01d24ffc = 1;
  return;
}
