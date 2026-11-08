// Name: FUN_00548e80
// Address: 00548e80
// Address Range: [[00548e80, 00548f74]]
// Convention: unknown
// Signature: int FUN_00548e80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00548e80(uint param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = &DAT_020cfa64;
  do {
    iVar4 = iVar2 * 0x2ac0 + 0x20ccff4;
    iVar1 = FUN_005b8130(puVar3,param_1);
    if (iVar1 == 0) {
      FUN_00541540(iVar4);
      *(uint *)(&DAT_02177ff4 + iVar2 * 4) = 1;
      return iVar4;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x2ac0;
  } while (iVar2 < 0x40);
  iVar4 = 0;
  iVar1 = 0;
  iVar2 = _DAT_02177ff4;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = iVar4 * 0x2ac0 + 0x20ccff4;
      FUN_005427c0(iVar2,param_1);
      FUN_00541540(iVar2);
      *(uint *)(&DAT_02177ff4 + iVar1) = 1;
      return iVar2;
    }
    iVar4 = iVar4 + 1;
    if (0xff < iVar1 + 4) break;
    iVar2 = *(int *)(iVar1 + 0x2177ff8);
    iVar1 = iVar1 + 4;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x1076;
  FUN_004e4500("Can't load %s because deformable model manager is full.  (Size is %d)",param_1,0x40);
  return 0;
}
