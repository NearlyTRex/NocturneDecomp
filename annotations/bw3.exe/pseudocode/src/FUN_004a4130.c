// Name: FUN_004a4130
// Address: 004a4130
// Address Range: [[004a4130, 004a41c5]]
// Convention: unknown
// Signature: void FUN_004a4130(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004a4130(uint param_1,int param_2)

{
  byte *puVar1;
  int iVar2;
  byte *puVar3;
  
  puVar3 = &DAT_005fd8f4;
  iVar2 = 0;
  do {
    if (param_2 == 1) {
      FUN_0046e5e0(DAT_005f2afc,puVar3);
    }
    if (param_2 == 2) {
      puVar1 = &DAT_005fd984 + iVar2;
LAB_004a4158:
      FUN_0046e5e0(DAT_005f2afc,puVar1);
    }
    else {
      if (param_2 == 3) {
        puVar1 = &DAT_005fda14 + iVar2;
        goto LAB_004a4158;
      }
      if (param_2 == 4) {
        puVar1 = &DAT_005fdaa4 + iVar2;
        goto LAB_004a4158;
      }
      if (param_2 == 5) {
        puVar1 = &DAT_005fdb34 + iVar2;
        goto LAB_004a4158;
      }
    }
    iVar2 = iVar2 + 0x18;
    puVar3 = puVar3 + 0x18;
    if (iVar2 == 0x90) {
      return;
    }
  } while( true );
}
