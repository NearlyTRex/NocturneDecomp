// Name: engine_mini3d.cpp_FUN_004f311e
// Address: 004f311e
// Address Range: [[004f311e, 004f318e]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f311e(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f311e(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d0991c = _DAT_01d0991c + 1;
  if (9 < _DAT_01d0991c) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x488;
    core_main_c_FUN_004e4500("Matrix unbalance");
  }
  iVar1 = _DAT_01d0991c * 0x3c;
  puVar3 = (uint *)(&DAT_01d09920 + iVar1);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  _DAT_01d09918 = (uint *)(&DAT_01d09920 + iVar1);
  _DAT_01d0c398 = 1;
  return;
}
