// Name: FUN_0049a300
// Address: 0049a300
// Address Range: [[0049a300, 0049a458]]
// Convention: unknown
// Signature: void FUN_0049a300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0049a300(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  char acStack_534 [256];
  byte bStack_434;
  byte auStack_420 [260];
  byte auStack_31c [260];
  byte auStack_218 [260];
  byte auStack_114 [260];
  
  FUN_00479770(param_3,0x5dc5fd,auStack_218);
  FUN_00479770(param_2,auStack_218,auStack_114);
  FUN_00479320(acStack_534);
  FUN_00479360(acStack_534,auStack_114);
  while (acStack_534[0] != '\0') {
    iVar1 = FUN_005c0f80(acStack_534,0x5dc5ff);
    if ((iVar1 != 0) && (iVar1 = FUN_005c0f80(acStack_534,0x5dc601), iVar1 != 0)) {
      if ((bStack_434 & 4) == 0) {
        iVar1 = FUN_0049dea0(param_4,acStack_534,0);
        if (iVar1 != 0) {
          FUN_00479770(param_3,acStack_534,auStack_31c);
          FUN_004994d0(param_1,auStack_31c);
        }
      }
      else {
        FUN_00479770(param_3,acStack_534,auStack_420);
        FUN_0049a300(param_1,param_2,auStack_420,param_4);
      }
    }
    FUN_004793e0(acStack_534);
  }
  FUN_00479460(acStack_534);
  FUN_00479340(acStack_534,0);
  return;
}
