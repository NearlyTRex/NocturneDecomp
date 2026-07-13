// Name: FUN_00403130
// Address: 00403130
// Address Range: [[00403130, 00403194]]
// Convention: unknown
// Signature: void FUN_00403130(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403130(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00456a60(&DAT_005771c6,param_1,&DAT_005771c3);
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x6b7;
    FUN_004c8440("Unable to write fog tab");
  }
  FUN_00563a50(0x1bd1ea0,0x100,0x10,iVar1);
  FUN_00563380(iVar1);
  return;
}
