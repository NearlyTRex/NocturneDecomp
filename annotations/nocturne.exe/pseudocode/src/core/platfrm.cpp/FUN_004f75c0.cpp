// Name: FUN_004f75c0
// Address: 004f75c0
// Address Range: [[004f75c0, 004f76b5]]
// Convention: unknown
// Signature: void FUN_004f75c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f75c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  byte local_a0 [48];
  uint local_70 [12];
  byte local_40 [48];
  
  bVar6 = 0;
  if (param_2 != 0) {
    iVar2 = 0;
    iVar3 = *(int *)(param_1 + 0x514);
    iVar1 = param_1;
    while (param_2 != iVar3) {
      iVar2 = iVar2 + 1;
      if (9 < iVar2) {
        iVar3 = *(int *)(param_1 + 0x514);
        iVar2 = 0;
        iVar1 = param_1;
        while( true ) {
          if (iVar3 == 0) {
            FUN_0055afb0(local_a0,param_2 + 0x20,param_2 + 0x30);
            FUN_0055ae80(local_40,param_1 + 0x20,param_1 + 0x30);
            *(int *)(iVar1 + 0x514) = param_2;
            FUN_0055aa00(local_a0,local_40);
            puVar4 = local_70;
            puVar5 = (uint *)(iVar1 + 0x518);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            return;
          }
          iVar2 = iVar2 + 1;
          if (9 < iVar2) break;
          iVar3 = *(int *)(iVar1 + 0x548);
          iVar1 = iVar1 + 0x34;
        }
        _DAT_01cc4800 = "..\\core\\platfrm.cpp";
        _DAT_01cc4804 = 0x3d0;
        FUN_004c8440("CPlatform::attachActor - too many!");
        return;
      }
      iVar3 = *(int *)(iVar1 + 0x548);
      iVar1 = iVar1 + 0x34;
    }
  }
  return;
}
