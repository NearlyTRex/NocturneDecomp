// Name: FUN_00533010
// Address: 00533010
// Address Range: [[00533010, 00533183]]
// Convention: unknown
// Signature: void FUN_00533010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533010(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte local_118 [256];
  uint local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x19a2c)) {
    local_14 = 0;
    piVar4 = (int *)(param_1 + 0x19a30);
    do {
      if (*piVar4 == 0) {
        iVar1 = *(int *)(&DAT_01fc8d04 + local_14);
        if (iVar1 == 0) {
          return;
        }
        local_18 = 0;
        if (0 < _DAT_01fc8e84) {
          iVar2 = 0;
          do {
            if (iVar1 == *(int *)(&DAT_01fc8e88 + iVar2)) {
              local_18 = 1;
              break;
            }
            iVar2 = iVar2 + 4;
          } while (iVar2 < _DAT_01fc8e84 * 4);
        }
        FUN_0053b8d0(piVar4,iVar1,local_18);
        FUN_005b7790(local_118,&DAT_005e5b36,piVar4 + 1);
        iVar2 = FUN_0048e340(0x01C38BC0,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        FUN_005b7790(local_118,"%soff",piVar4 + 1);
        iVar2 = FUN_0048e340(0x01C38BC0,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 0;
        }
        iVar2 = FUN_005b8da0(piVar4 + 1,&DAT_005e5b41,4);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x15ae5c) == 0) {
            *(uint *)(iVar1 + 0x1cb4) = 0;
            local_14 = local_14 + 4;
            goto LAB_00533042;
          }
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        local_14 = local_14 + 4;
      }
LAB_00533042:
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x626;
    } while (iVar3 < *(int *)(param_1 + 0x19a2c));
  }
  return;
}
