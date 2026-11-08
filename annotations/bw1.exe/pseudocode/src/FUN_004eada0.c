// Name: FUN_004eada0
// Address: 004eada0
// Address Range: [[004eada0, 004eade2]]
// Convention: unknown
// Signature: undefined4 FUN_004eada0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_004eada0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = FUN_00524a00(param_1 + 0x158,"GETGRABBED",0);
    iVar2 = FUN_00524150(uVar1);
    if (iVar2 < 0) {
      return 0;
    }
  }
  return 1;
}
