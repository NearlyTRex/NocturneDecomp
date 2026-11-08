// Name: FUN_00573660
// Address: 00573660
// Address Range: [[00573660, 00573718]]
// Convention: unknown
// Signature: undefined8 FUN_00573660(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00573660(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_0056fa10(param_1,1);
  if (iVar1 == 0) {
    uVar3 = 0xbff0000000000000;
  }
  else {
    if ((*(int *)(iVar1 + 0x60) != 0) && (_DAT_02c80650 != 0)) {
      iVar2 = FUN_00571fa0(iVar1);
      if (iVar2 == 0) {
        FUN_00573e70();
        return 0xbff0000000000000;
      }
    }
    uVar3 = FUN_00572430(*(uint *)(iVar1 + 0x68),*(uint *)(iVar1 + 0x50),
                         *(uint *)(iVar1 + 0x54),*(uint *)(iVar1 + 0x58),param_2);
    FUN_00573e70();
  }
  return uVar3;
}
