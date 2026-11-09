// Name: engine_mini3d.cpp_FUN_004f3190
// Address: 004f3190
// Address Range: [[004f3190, 004f31f5]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f3190(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f3190(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d0991c = _DAT_01d0991c + 1;
  if (9 < _DAT_01d0991c) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x4a7;
    core_main_c_FUN_004e4500("Matrix unbalance");
  }
  puVar2 = _DAT_01d09918;
  puVar3 = (uint *)(&DAT_01d09920 + _DAT_01d0991c * 0x3c);
  _DAT_01d09918 = (uint *)(&DAT_01d09920 + _DAT_01d0991c * 0x3c);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
