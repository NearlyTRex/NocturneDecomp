// Name: FUN_00513670
// Address: 00513670
// Address Range: [[00513670, 00513715]]
// Convention: unknown
// Signature: void FUN_00513670(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00513670(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00456a60(&DAT_00590c10,param_2,&DAT_00590c0d);
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\setdir.cpp";
    _DAT_01cc4804 = 0x2a2;
    FUN_004c8440("Can't create %s",param_2);
  }
  FUN_00563a50(&DAT_020875f8,0x3000,*param_1,iVar1);
  if ((*(byte *)(iVar1 + 0xc) & 0x20) == 0) {
    FUN_00563380(iVar1);
    return;
  }
  _DAT_01cc4800 = "..\\core\\setdir.cpp";
  _DAT_01cc4804 = 0x2a4;
  FUN_004c8440("Error writing %s",param_2);
  FUN_00563380(iVar1);
  return;
}
