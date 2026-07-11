// Name: FUN_0044efb0
// Address: 0044efb0
// Address Range: [[0044efb0, 0044f0ae]]
// Convention: unknown
// Signature: void FUN_0044efb0(int param_1)

#include "nocturne.h"

void FUN_0044efb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1cb8) != 0) {
    for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x1cc4) / 2; iVar6 = iVar6 + 1) {
      for (iVar4 = 0; iVar1 = *(int *)(param_1 + 0x1cc0) / 2, iVar4 < iVar1; iVar4 = iVar4 + 1) {
        iVar2 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
        iVar3 = iVar2 >> 0x1f;
        iVar1 = iVar1 - iVar4;
        iVar5 = *(int *)(param_1 + 0x1cc4) / 2 - iVar6;
        if ((int)((iVar2 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2 <
            iVar1 * iVar1 + iVar5 * iVar5) {
          *(ushort *)
           (*(int *)(param_1 + 0x2f94) + (*(int *)(param_1 + 0x1cc0) * iVar6 + iVar4) * 2) = 0;
          *(ushort *)
           (*(int *)(param_1 + 0x2f94) +
           (*(int *)(param_1 + 0x1cc0) * iVar6 + ((*(int *)(param_1 + 0x1cc0) + -1) - iVar4)) * 2) =
               0;
          *(ushort *)
           (*(int *)(param_1 + 0x2f94) +
           (((*(int *)(param_1 + 0x1cc0) + -1) - iVar4) +
           *(int *)(param_1 + 0x1cc0) * ((*(int *)(param_1 + 0x1cc4) + -1) - iVar6)) * 2) = 0;
          *(ushort *)
           (*(int *)(param_1 + 0x2f94) +
           (((*(int *)(param_1 + 0x1cc4) + -1) - iVar6) * *(int *)(param_1 + 0x1cc0) + iVar4) * 2) =
               0;
        }
      }
    }
  }
  return;
}
