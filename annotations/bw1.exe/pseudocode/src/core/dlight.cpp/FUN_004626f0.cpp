// Name: FUN_004626f0
// Address: 004626f0
// Address Range: [[004626f0, 00462757]]
// Convention: unknown
// Signature: uint FUN_004626f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004626f0(int param_1)

{
  int iVar1;
  
  if (0x300060U - param_1 < _DAT_01b2d370) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0xa3;
    FUN_005030e0("getRestoreMemory - Need more static memory");
  }
  iVar1 = _DAT_01b2d370 * 2;
  _DAT_01b2d370 = _DAT_01b2d370 + param_1 + 8;
  return iVar1 + 0x152d2b8U & 0xfffffff0;
}
