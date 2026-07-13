// Name: FUN_00403070
// Address: 00403070
// Address Range: [[00403070, 0040312f]]
// Convention: unknown
// Signature: void FUN_00403070(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403070(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00456a60(&DAT_0057718f,param_1,&DAT_0057718c);
  if (iVar1 == 0) {
    FUN_00402e90(param_2);
    FUN_00403130(param_1);
    iVar1 = FUN_00456a60(&DAT_00577196,param_1,&DAT_00577193);
  }
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x69c;
    FUN_004c8440("Unable to read fog table.");
  }
  else {
    FUN_005636d0(0x1bd1ea0,0x100,0x10,iVar1);
    FUN_00563380(iVar1);
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(char *)(iVar1 + 0x1bd2da0) = (char)param_2;
    *(char *)(iVar1 + 0x1bd2ea0) = (char)param_2;
    *(byte *)(iVar1 + 0x1bd1da0) = *(byte *)(iVar1 + 0x1bd1ea0);
    iVar1 = iVar2;
  } while (iVar2 < 0x100);
  FUN_00532a80(param_2);
  return;
}
