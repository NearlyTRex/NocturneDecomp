// Name: FUN_00482ea0
// Address: 00482ea0
// Address Range: [[00482ea0, 00482ff8]]
// Convention: unknown
// Signature: void FUN_00482ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00482ea0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  char acStack_534 [256];
  byte bStack_434;
  byte auStack_420 [260];
  byte auStack_31c [260];
  byte auStack_218 [260];
  byte auStack_114 [260];
  
  FUN_00466040(param_3,0x5bd6ba,auStack_218);
  FUN_00466040(param_2,auStack_218,auStack_114);
  FUN_00465b60(acStack_534);
  FUN_00465ba0(acStack_534,auStack_114);
  while (acStack_534[0] != '\0') {
    iVar1 = FUN_005a3d00(acStack_534,0x5bd6bc);
    if ((iVar1 != 0) && (iVar1 = FUN_005a3d00(acStack_534,0x5bd6be), iVar1 != 0)) {
      if ((bStack_434 & 4) == 0) {
        iVar1 = FUN_00486a40(param_4,acStack_534,0);
        if (iVar1 != 0) {
          FUN_00466040(param_3,acStack_534,auStack_31c);
          FUN_00482070(param_1,auStack_31c);
        }
      }
      else {
        FUN_00466040(param_3,acStack_534,auStack_420);
        FUN_00482ea0(param_1,param_2,auStack_420,param_4);
      }
    }
    FUN_00465c20(acStack_534);
  }
  FUN_00465ca0(acStack_534);
  FUN_00465b80(acStack_534,0);
  return;
}
