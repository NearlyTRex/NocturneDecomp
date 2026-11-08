// Name: FUN_0052d360
// Address: 0052d360
// Address Range: [[0052d360, 0052d402]]
// Convention: unknown
// Signature: void FUN_0052d360(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d360(int param_1)

{
  int iVar1;
  byte local_10 [8];
  
  iVar1 = FUN_005b2420();
  _DAT_01d51d9c = iVar1 / 0x12 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d51d9c = iVar1 / 0x12;
  while( true ) {
    iVar1 = FUN_0059c970(param_1 + 0x178);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0059cb20(param_1 + 0x178,&DAT_01d7edb4,0x404,local_10);
    if (iVar1 < 1) break;
    _DAT_01d7edb0 = iVar1 + 1;
    FUN_0052d450(param_1,local_10,&DAT_01d7edb0);
  }
  FUN_0052ed80(param_1);
  return;
}
