// Name: engine_mini3d.cpp_FUN_004ed790
// Address: 004ed790
// Address Range: [[004ed790, 004ed7f5]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ed790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ed790(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d76d00 = _DAT_01d76d00 + 1;
  if (9 < _DAT_01d76d00) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x4b7;
    core_main_c_FUN_004e4330("Matrix unbalance");
  }
  puVar2 = _DAT_01d76cfc;
  puVar3 = (uint *)(&DAT_01d76d04 + _DAT_01d76d00 * 0x3c);
  _DAT_01d76cfc = (uint *)(&DAT_01d76d04 + _DAT_01d76d00 * 0x3c);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
