// Name: FUN_005cd2f8
// Address: 005cd2f8
// Address Range: [[005cd2f8, 005cd384]]
// Convention: unknown
// Signature: undefined4 FUN_005cd2f8(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005cd2f8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((0 < param_1) && (param_1 < 0xd)) {
    PTR_FUN_006262d0 = &UNK_005cd2ac;
    if ((param_2 != 2) && (param_2 != 3)) {
      iVar1 = FUN_005cd168(param_1);
      if ((iVar1 != 0) && (param_1 == 2)) {
        FUN_005ce060(0,0x9f);
      }
    }
    uVar2 = FUN_005cd144(param_1);
    FUN_005cd0f0(param_1,param_2);
    iVar1 = FUN_005cd210();
    if (iVar1 == 0) {
      FUN_005cd274();
    }
    else {
      FUN_005cd248();
    }
    return uVar2;
  }
  FUN_005c6450(9);
  return 3;
}
