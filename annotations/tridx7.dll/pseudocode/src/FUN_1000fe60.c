// Name: FUN_1000fe60
// Address: 1000fe60
// Address Range: [[1000fe60, 1000ff03]]
// Convention: unknown
// Signature: int FUN_1000fe60(byte *param_1)

#include "nocturne.h"

int FUN_1000fe60(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint _C;
  int iVar3;
  byte *pbVar4;
  
  while( true ) {
    if (DAT_10017690 < 2) {
      uVar1 = *(ushort *)(PTR_DAT_10017480 + (uint)*param_1 * 2) & 8;
    }
    else {
      uVar1 = __isctype((uint)*param_1,8);
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar4 = param_1 + 1;
  if ((uVar1 == 0x2d) || (_C = uVar1, uVar1 == 0x2b)) {
    _C = (uint)*pbVar4;
    pbVar4 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_10017690 < 2) {
      uVar2 = *(ushort *)(PTR_DAT_10017480 + _C * 2) & 4;
    }
    else {
      uVar2 = __isctype(_C,4);
    }
    if (uVar2 == 0) break;
    iVar3 = (_C - 0x30) + iVar3 * 10;
    _C = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  if (uVar1 == 0x2d) {
    return -iVar3;
  }
  return iVar3;
}
