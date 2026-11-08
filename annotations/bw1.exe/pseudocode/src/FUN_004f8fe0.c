// Name: FUN_004f8fe0
// Address: 004f8fe0
// Address Range: [[004f8fe0, 004f90ce]]
// Convention: unknown
// Signature: void FUN_004f8fe0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f8fe0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_004fa6c0(param_1,1);
  if (*(int *)(param_1 + 0x338) != 0) {
    iVar4 = 0;
    iVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(param_1 + 0x338) == *(int *)(iVar5 + 0x14)) break;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
    iVar5 = 0;
    do {
      iVar4 = iVar4 + param_2;
      if (iVar4 < *(int *)(param_1 + 0x10)) {
        if (iVar4 < 0) {
          iVar4 = *(int *)(param_1 + 0x10) + -1;
        }
      }
      else {
        iVar4 = 0;
      }
      iVar1 = FUN_0040c600(*(uint *)(param_1 + 0x14 + iVar4 * 4),_DAT_02c99770);
      if (iVar1 != 0) {
        uVar2 = FUN_00408830(*(uint *)(param_1 + 0x338));
        uVar2 = FUN_00408830(iVar1,uVar2);
        iVar3 = FUN_005c0f80(uVar2);
        if (iVar3 == 0) {
          iVar4 = *(int *)(param_1 + 0x338);
          if (iVar1 == iVar4) {
            return;
          }
          if (iVar4 != 0) {
            (**(code **)(*(int *)(iVar4 + 0x154) + 0xc))(iVar4,0x3dcccccd);
          }
          *(int *)(param_1 + 0x338) = iVar1;
          FUN_004fa4e0(param_1,999);
          return;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 100);
  }
  return;
}
