// Name: FUN_0055b280
// Address: 0055b280
// Address Range: [[0055b280, 0055b325]]
// Convention: unknown
// Signature: void FUN_0055b280(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055b280(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00479180(&DAT_005f1020,param_2,&DAT_005f101d);
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\setdir.cpp";
    _DAT_01d1d404 = 0x2b5;
    FUN_005030e0("Can't create %s",param_2);
  }
  FUN_005c1a70(&DAT_020b28f4,0x3000,*param_1,iVar1);
  if ((*(byte *)(iVar1 + 0xc) & 0x20) == 0) {
    FUN_005c0d10(iVar1);
    return;
  }
  _DAT_01d1d400 = "..\\core\\setdir.cpp";
  _DAT_01d1d404 = 0x2b7;
  FUN_005030e0("Error writing %s",param_2);
  FUN_005c0d10(iVar1);
  return;
}
