// Name: FUN_00401590
// Address: 00401590
// Address Range: [[00401590, 00401614]]
// Convention: unknown
// Signature: void FUN_00401590(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401590(uint param_1)

{
  int iVar1;
  byte local_28 [40];
  
  FUN_0057cd50(local_28);
  iVar1 = FUN_0057d390(local_28,&DAT_005ca05c,param_1);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x29b;
    FUN_004e4500("Unable to open VGA palette");
  }
  FUN_0057cfe0(local_28,&DAT_01c35838,0x300);
  FUN_0057d180(local_28);
  FUN_0057cec0(local_28,0);
  return;
}
