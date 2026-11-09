// Name: engine_mini3d.cpp_FUN_004ed71e
// Address: 004ed71e
// Address Range: [[004ed71e, 004ed78e]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ed71e(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ed71e(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d76d00 = _DAT_01d76d00 + 1;
  if (9 < _DAT_01d76d00) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x498;
    core_main_c_FUN_004e4330("Matrix unbalance");
  }
  iVar1 = _DAT_01d76d00 * 0x3c;
  puVar3 = (uint *)(&DAT_01d76d04 + iVar1);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  _DAT_01d76cfc = (uint *)(&DAT_01d76d04 + iVar1);
  _DAT_01d7977c = 1;
  return;
}
