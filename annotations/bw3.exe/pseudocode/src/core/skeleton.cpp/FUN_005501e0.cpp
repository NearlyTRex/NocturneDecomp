// Name: FUN_005501e0
// Address: 005501e0
// Address Range: [[005501e0, 005502c1]]
// Convention: unknown
// Signature: int FUN_005501e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005501e0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x2820e84;
  do {
    iVar1 = FUN_005a3260(iVar3,param_1);
    if (iVar1 == 0) {
      *(uint *)(&DAT_02cd28bc + iVar2 * 4) = 1;
      return iVar2 * 0x1ec9c + 0x280305c;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x1ec9c;
  } while (iVar2 < 0x28);
  iVar1 = 0;
  iVar3 = 0;
  iVar2 = _DAT_02cd28bc;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = iVar1 * 0x1ec9c + 0x280305c;
      FUN_00547c20(iVar2,param_1);
      *(uint *)(&DAT_02cd28bc + iVar3) = 1;
      return iVar2;
    }
    iVar1 = iVar1 + 1;
    if (0x9f < iVar3 + 4) break;
    iVar2 = *(int *)(iVar3 + 0x2cd28c0);
    iVar3 = iVar3 + 4;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x10ac;
  FUN_004e4330("Can't load %s because skeleton manager is full.  (Size is %d)",param_1,0x28);
  return 0;
}
