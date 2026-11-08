// Name: FUN_005940a0
// Address: 005940a0
// Address Range: [[005940a0, 00594137]]
// Convention: unknown
// Signature: void FUN_005940a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005940a0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_00524270(param_1 + 0x158,&param_2);
    if (uVar2 < 100) {
      FUN_00434a80(param_1,uVar2);
    }
    else {
      if (uVar2 < 0x65) {
        FUN_00594140(param_1,_DAT_02c8374c);
        iVar1 = *(int *)(param_1 + 0x1ffb0);
      }
      else {
        if (uVar2 != 0x65) {
          FUN_00434a80(param_1,uVar2);
          goto LAB_005940ee;
        }
        FUN_00594140(param_1,_DAT_02c83750);
        iVar1 = *(int *)(param_1 + 0x1ffb0);
      }
      *(uint *)(param_1 + 0x1ffb0) = (uint)(iVar1 == 0);
    }
LAB_005940ee:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
