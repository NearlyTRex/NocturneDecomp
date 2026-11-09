// Name: crt_unknown.c_FUN_005ab480
// Address: 005ab480
// Address Range: [[005ab480, 005ab558]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005ab480(undefined4 param_1)

#include "nocturne.h"

int FUN_005ab480(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte auStack_20c [512];
  
  iVar1 = FUN_005a9cf0(param_1,0,1);
  iVar2 = iVar1;
  if ((iVar1 != -1) && (iVar2 = FUN_005a9cf0(param_1,0,2), iVar2 != -1)) {
    if (iVar2 < iVar1) {
      iVar1 = iVar1 - iVar2;
      uVar3 = FUN_005ab920(param_1);
      FUN_005ab978(param_1,uVar3 & 0xffff7fff);
      if (0 < iVar1) {
        memset(auStack_20c,0,0x200);
        do {
          iVar2 = iVar1;
          if (0x200 < iVar1) {
            iVar2 = 0x200;
          }
          iVar4 = FUN_005ab55c(param_1,auStack_20c,iVar2);
          if (iVar4 < 0) {
            return iVar4;
          }
          iVar1 = iVar1 - iVar2;
        } while (iVar1 != 0);
      }
    }
    else {
      iVar2 = FUN_005a9cf0(param_1,iVar1,0);
      uVar3 = FUN_005ab920(param_1);
      FUN_005ab978(param_1,uVar3 & 0xffff7fff);
      if (iVar2 == -1) {
        return -1;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}
