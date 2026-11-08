// Name: FUN_00540c40
// Address: 00540c40
// Address Range: [[00540c40, 00540ce5]]
// Convention: unknown
// Signature: void FUN_00540c40(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540c40(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004659c0(&DAT_005d0cc9,param_2,&DAT_005d0cc6);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\setdir.cpp";
    _DAT_01d71de4 = 0x2b5;
    FUN_004e4330("Can't create %s",param_2);
  }
  FUN_005a48e0(&DAT_0212551c,0x3000,*param_1,iVar1);
  if ((*(byte *)(iVar1 + 0xc) & 0x20) == 0) {
    FUN_005a3a90(iVar1);
    return;
  }
  _DAT_01d71de0 = "..\\core\\setdir.cpp";
  _DAT_01d71de4 = 0x2b7;
  FUN_004e4330("Error writing %s",param_2);
  FUN_005a3a90(iVar1);
  return;
}
