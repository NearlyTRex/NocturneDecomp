// Name: FUN_00462420
// Address: 00462420
// Address Range: [[00462420, 004624c1]]
// Convention: unknown
// Signature: int FUN_00462420(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00462420(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01b4b848) {
    iVar2 = 0x1b4b84c;
    do {
      iVar1 = FUN_005a3260(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x398;
    } while (iVar3 < _DAT_01b4b848);
  }
  if (0xff < _DAT_01b4b848) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0x4cd;
    FUN_004e4330("Can't load %s because keyFrame model manager is full.  (Size is %d)",param_1,0x100);
  }
  iVar3 = _DAT_01b4b848 * 0x398 + 0x1b4b84c;
  _DAT_01b4b848 = _DAT_01b4b848 + 1;
  FUN_00460550(iVar3,param_1);
  FUN_00461860(iVar3);
  return iVar3;
}
