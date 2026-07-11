// Name: FUN_00572f40
// Address: 00572f40
// Address Range: [[00572f40, 00573018]]
// Convention: unknown
// Signature: int FUN_00572f40(undefined4 param_1)

#include "nocturne.h"

int FUN_00572f40(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_20c [512];
  
  iVar1 = FUN_005689c0(param_1,0,1);
  iVar2 = iVar1;
  if ((iVar1 != -1) && (iVar2 = FUN_005689c0(param_1,0,2), iVar2 != -1)) {
    if (iVar2 < iVar1) {
      iVar1 = iVar1 - iVar2;
      uVar3 = FUN_0056f220(param_1);
      FUN_0056f278(param_1,uVar3 & 0xffff7fff);
      if (0 < iVar1) {
        FUN_00563cc0(local_20c,0,0x200);
        do {
          iVar2 = iVar1;
          if (0x200 < iVar1) {
            iVar2 = 0x200;
          }
          iVar4 = FUN_0057301c(param_1,local_20c,iVar2);
          if (iVar4 < 0) {
            return iVar4;
          }
          iVar1 = iVar1 - iVar2;
        } while (iVar1 != 0);
      }
    }
    else {
      iVar2 = FUN_005689c0(param_1,iVar1,0);
      uVar3 = FUN_0056f220(param_1);
      FUN_0056f278(param_1,uVar3 & 0xffff7fff);
      if (iVar2 == -1) {
        return -1;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}
