// Name: FUN_0042f280
// Address: 0042f280
// Address Range: [[0042f280, 0042f30b]]
// Convention: unknown
// Signature: void FUN_0042f280(int param_1)

#include "nocturne.h"

void FUN_0042f280(int param_1)

{
  byte *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_1 == 0) {
      puVar1 = &DAT_005f1124 + iVar2;
LAB_0042f2a2:
      FUN_0046e5e0(DAT_005f2afc,puVar1);
    }
    else {
      if (param_1 == 1) {
        puVar1 = &DAT_005f1004 + iVar2;
        goto LAB_0042f2a2;
      }
      if (param_1 == 2) {
        puVar1 = &DAT_005f1094 + iVar2;
        goto LAB_0042f2a2;
      }
      if (param_1 == 4) {
        puVar1 = &DAT_005f11b4 + iVar2;
        goto LAB_0042f2a2;
      }
      if (param_1 == 3) {
        puVar1 = &DAT_005f1244 + iVar2;
        goto LAB_0042f2a2;
      }
    }
    iVar2 = iVar2 + 0x18;
    if (iVar2 == 0x90) {
      return;
    }
  } while( true );
}
