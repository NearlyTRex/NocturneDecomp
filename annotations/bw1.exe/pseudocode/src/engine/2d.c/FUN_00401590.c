// Name: FUN_00401590
// Address: 00401590
// Address Range: [[00401590, 00401616]]
// Convention: unknown
// Signature: void FUN_00401590(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401590(uint param_1)

{
  int iVar1;
  byte local_2c [44];
  
  FUN_005a08d0(local_2c);
  iVar1 = FUN_005a0fd0(local_2c,"art",param_1,1);
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x29b;
    FUN_005030e0("Unable to open VGA palette");
  }
  FUN_005a0c10(local_2c,&DAT_01c4e9f8,0x300);
  FUN_005a0dc0(local_2c);
  FUN_005a0a50(local_2c,0);
  return;
}
