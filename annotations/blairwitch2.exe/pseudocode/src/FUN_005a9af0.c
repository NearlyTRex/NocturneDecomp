// Name: FUN_005a9af0
// Address: 005a9af0
// Address Range: [[005a9af0, 005a9b5d]]
// Convention: unknown
// Signature: void FUN_005a9af0(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005a9af0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (param_2 < 0x2261) {
    if (param_2 != 0x2260) {
      return;
    }
    FUN_0055ae50(0x0264B290,param_1,"ghostchilslap0?.wav",iVar1);
    return;
  }
  if (param_2 < 0x2262) {
    FUN_0055ae50(0x0264B290,param_1,"ghostchilddeath0?.wav",iVar1);
    return;
  }
  if (param_2 != 0x2262) {
    return;
  }
  FUN_0055ae50(0x0264B290,param_1,"robinscream0?.wav",iVar1);
  return;
}
