// Name: FUN_00468780
// Address: 00468780
// Address Range: [[00468780, 00468821]]
// Convention: unknown
// Signature: int FUN_00468780(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00468780(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01b2efdc) {
    iVar2 = 0x1b2efe0;
    do {
      iVar1 = FUN_005c04e0(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x398;
    } while (iVar3 < _DAT_01b2efdc);
  }
  if (0xff < _DAT_01b2efdc) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0x4cd;
    FUN_005030e0("Can't load %s because keyFrame model manager is full.  (Size is %d)",param_1,0x100);
  }
  iVar3 = _DAT_01b2efdc * 0x398 + 0x1b2efe0;
  _DAT_01b2efdc = _DAT_01b2efdc + 1;
  FUN_004668a0(iVar3,param_1);
  FUN_00467bc0(iVar3);
  return iVar3;
}
