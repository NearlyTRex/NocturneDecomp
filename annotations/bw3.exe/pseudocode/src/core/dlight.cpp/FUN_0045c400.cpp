// Name: FUN_0045c400
// Address: 0045c400
// Address Range: [[0045c400, 0045c467]]
// Convention: unknown
// Signature: uint FUN_0045c400(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0045c400(int param_1)

{
  int iVar1;
  
  if (0x300060U - param_1 < _DAT_01b49bdc) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0xa3;
    FUN_004e4330("getRestoreMemory - Need more static memory");
  }
  iVar1 = _DAT_01b49bdc * 2;
  _DAT_01b49bdc = _DAT_01b49bdc + param_1 + 8;
  return iVar1 + 0x1549b24U & 0xfffffff0;
}
