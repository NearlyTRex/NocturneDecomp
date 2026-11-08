// Name: FUN_00481ca0
// Address: 00481ca0
// Address Range: [[00481ca0, 00481df8]]
// Convention: unknown
// Signature: void FUN_00481ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00481ca0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  char acStack_534 [256];
  byte bStack_434;
  byte auStack_420 [260];
  byte auStack_31c [260];
  byte auStack_218 [260];
  byte auStack_114 [260];
  
  FUN_00461260(param_3,0x5d2864,auStack_218);
  FUN_00461260(param_2,auStack_218,auStack_114);
  FUN_00460e10(acStack_534);
  FUN_00460e50(acStack_534,auStack_114);
  while (acStack_534[0] != '\0') {
    iVar1 = FUN_005b8c30(acStack_534,0x5d2866);
    if ((iVar1 != 0) && (iVar1 = FUN_005b8c30(acStack_534,0x5d2868), iVar1 != 0)) {
      if ((bStack_434 & 4) == 0) {
        iVar1 = FUN_00485840(param_4,acStack_534,0);
        if (iVar1 != 0) {
          FUN_00461260(param_3,acStack_534,auStack_31c);
          FUN_00480e70(param_1,auStack_31c);
        }
      }
      else {
        FUN_00461260(param_3,acStack_534,auStack_420);
        FUN_00481ca0(param_1,param_2,auStack_420,param_4);
      }
    }
    FUN_00460ed0(acStack_534);
  }
  FUN_00460f50(acStack_534);
  FUN_00460e30(acStack_534,0);
  return;
}
