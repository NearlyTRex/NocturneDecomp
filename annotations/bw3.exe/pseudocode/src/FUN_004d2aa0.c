// Name: FUN_004d2aa0
// Address: 004d2aa0
// Address Range: [[004d2aa0, 004d2ae2]]
// Convention: unknown
// Signature: undefined4 FUN_004d2aa0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_004d2aa0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = FUN_004fc310(param_1 + 0x158,"GETGRABBED",0);
    iVar2 = FUN_004fba50(uVar1);
    if (iVar2 < 0) {
      return 0;
    }
  }
  return 1;
}
