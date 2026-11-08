// Name: FUN_0044fba0
// Address: 0044fba0
// Address Range: [[0044fba0, 0044fc41]]
// Convention: unknown
// Signature: int FUN_0044fba0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044fba0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01b13a1c) {
    iVar2 = 0x1b13a20;
    do {
      iVar1 = FUN_005b8130(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x398;
    } while (iVar3 < _DAT_01b13a1c);
  }
  if (0xff < _DAT_01b13a1c) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x4cd;
    FUN_004e4500("Can't load %s because keyFrame model manager is full.  (Size is %d)",param_1,0x100);
  }
  iVar3 = _DAT_01b13a1c * 0x398 + 0x1b13a20;
  _DAT_01b13a1c = _DAT_01b13a1c + 1;
  FUN_0044dcd0(iVar3,param_1);
  FUN_0044efe0(iVar3);
  return iVar3;
}
