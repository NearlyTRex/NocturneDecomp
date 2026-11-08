// Name: FUN_00548fc0
// Address: 00548fc0
// Address Range: [[00548fc0, 00549086]]
// Convention: unknown
// Signature: int FUN_00548fc0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00548fc0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x219529c;
  do {
    iVar1 = FUN_005b8130(iVar3,param_1);
    if (iVar1 == 0) {
      *(uint *)(&DAT_02628554 + iVar2 * 4) = 1;
      return iVar2 * 0x1e01c + 0x21780f4;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x1e01c;
  } while (iVar2 < 0x28);
  iVar1 = 0;
  iVar3 = 0;
  iVar2 = _DAT_02628554;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = iVar1 * 0x1e01c + 0x21780f4;
      FUN_00540a10(iVar2,param_1);
      *(uint *)(&DAT_02628554 + iVar3) = 1;
      return iVar2;
    }
    iVar1 = iVar1 + 1;
    if (0x9f < iVar3 + 4) break;
    iVar2 = *(int *)(iVar3 + 0x2628558);
    iVar3 = iVar3 + 4;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x10a5;
  FUN_004e4500("Can't load %s because skeleton manager is full.  (Size is %d)",param_1,0x28);
  return 0;
}
