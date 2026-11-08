// Name: FUN_005500b0
// Address: 005500b0
// Address Range: [[005500b0, 0055019f]]
// Convention: unknown
// Signature: int FUN_005500b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005500b0(uint param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = &DAT_0272e50c;
  do {
    iVar4 = iVar2 * 0x3600 + 0x272af5c;
    iVar1 = FUN_005a3260(puVar3,param_1);
    if (iVar1 == 0) {
      FUN_00548750(iVar4);
      *(uint *)(&DAT_02802f5c + iVar2 * 4) = 1;
      return iVar4;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x3600;
  } while (iVar2 < 0x40);
  iVar4 = 0;
  iVar1 = 0;
  iVar2 = _DAT_02802f5c;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = iVar4 * 0x3600 + 0x272af5c;
      FUN_005499d0(iVar2,param_1);
      FUN_00548750(iVar2);
      *(uint *)(&DAT_02802f5c + iVar1) = 1;
      return iVar2;
    }
    iVar4 = iVar4 + 1;
    if (0xff < iVar1 + 4) break;
    iVar2 = *(int *)(iVar1 + 0x2802f60);
    iVar1 = iVar1 + 4;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x107d;
  FUN_004e4330("Can't load %s because deformable model manager is full.  (Size is %d)",param_1,0x40);
  return 0;
}
