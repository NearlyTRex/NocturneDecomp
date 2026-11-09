// Name: crt_unknown.c_FUN_005c0380
// Address: 005c0380
// Address Range: [[005c0380, 005c0458]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c0380(undefined4 param_1)

#include "nocturne.h"

int FUN_005c0380(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte auStack_20c [512];
  
  iVar1 = FUN_005bebb0(param_1,0,1);
  iVar2 = iVar1;
  if ((iVar1 != -1) && (iVar2 = FUN_005bebb0(param_1,0,2), iVar2 != -1)) {
    if (iVar2 < iVar1) {
      iVar1 = iVar1 - iVar2;
      uVar3 = FUN_005c0820(param_1);
      FUN_005c0878(param_1,uVar3 & 0xffff7fff);
      if (0 < iVar1) {
        memset(auStack_20c,0,0x200);
        do {
          iVar2 = iVar1;
          if (0x200 < iVar1) {
            iVar2 = 0x200;
          }
          iVar4 = FUN_005c045c(param_1,auStack_20c,iVar2);
          if (iVar4 < 0) {
            return iVar4;
          }
          iVar1 = iVar1 - iVar2;
        } while (iVar1 != 0);
      }
    }
    else {
      iVar2 = FUN_005bebb0(param_1,iVar1,0);
      uVar3 = FUN_005c0820(param_1);
      FUN_005c0878(param_1,uVar3 & 0xffff7fff);
      if (iVar2 == -1) {
        return -1;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}
