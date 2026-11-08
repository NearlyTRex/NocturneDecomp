// Name: FUN_00449ef0
// Address: 00449ef0
// Address Range: [[00449ef0, 00449f57]]
// Convention: unknown
// Signature: uint FUN_00449ef0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00449ef0(int param_1)

{
  int iVar1;
  
  if (0x300060U - param_1 < _DAT_01b11db0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0xa4;
    FUN_004e4500("getRestoreMemory - Need more static memory");
  }
  iVar1 = _DAT_01b11db0 * 2;
  _DAT_01b11db0 = _DAT_01b11db0 + param_1 + 8;
  return iVar1 + 0x1511cf8U & 0xfffffff0;
}
