// Name: FUN_0050d040
// Address: 0050d040
// Address Range: [[0050d040, 0050d1b3]]
// Convention: unknown
// Signature: void FUN_0050d040(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050d040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte local_118 [256];
  uint local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x19644)) {
    local_14 = 0;
    piVar4 = (int *)(param_1 + 0x19648);
    do {
      if (*piVar4 == 0) {
        iVar1 = *(int *)(&DAT_01fb99d4 + local_14);
        if (iVar1 == 0) {
          return;
        }
        local_18 = 0;
        if (0 < _DAT_01fb9b54) {
          iVar2 = 0;
          do {
            if (iVar1 == *(int *)(&DAT_01fb9b58 + iVar2)) {
              local_18 = 1;
              break;
            }
            iVar2 = iVar2 + 4;
          } while (iVar2 < _DAT_01fb9b54 * 4);
        }
        FUN_00515420(piVar4,iVar1,local_18);
        FUN_00563c90(local_118,&DAT_0059079a,piVar4 + 1);
        iVar2 = FUN_0047dc30(0x01C03A10,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        FUN_00563c90(local_118,"%soff",piVar4 + 1);
        iVar2 = FUN_0047dc30(0x01C03A10,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 0;
        }
        iVar2 = FUN_00564bc0(piVar4 + 1,&DAT_005907a5,4);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x15aa60) == 0) {
            *(uint *)(iVar1 + 0x1cb4) = 0;
            local_14 = local_14 + 4;
            goto LAB_0050d072;
          }
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        local_14 = local_14 + 4;
      }
LAB_0050d072:
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x626;
    } while (iVar3 < *(int *)(param_1 + 0x19644));
  }
  return;
}
