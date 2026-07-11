// Name: FUN_0044ed80
// Address: 0044ed80
// Address Range: [[0044ed80, 0044efaa]]
// Convention: unknown
// Signature: void FUN_0044ed80(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_0044ed80(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_24;
  uint local_14;
  
  if ((-1 < param_2) && (-1 < param_3)) {
    if ((param_2 + param_4 <= DAT_005b761c) && (param_3 + param_4 <= DAT_005b7620)) {
      iVar1 = (*(int *)(param_1 + 0x1cc0) << 8) / param_4;
      local_14 = 0x20000;
      uVar4 = 0;
      for (local_24 = 0; local_24 < *(int *)(param_1 + 0x1cc4) * 0x100; local_24 = local_24 + iVar1)
      {
        iVar5 = 0;
        while (iVar5 < *(int *)(param_1 + 0x1cc0) * 0x100) {
          uVar2 = (uint)*(ushort *)
                         (*(int *)(param_1 + 0x2f94) +
                         (((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) -
                                (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8) +
                         ((int)((local_24 + (local_24 >> 0x1f) * -0x100) -
                               (uint)((local_24 >> 0x1f) << 7 < 0)) >> 8) *
                         *(int *)(param_1 + 0x1cc0)) * 2);
          if ((uVar2 == 0) || (0xfffe < uVar2)) {
LAB_0044eea7:
            iVar5 = iVar5 + iVar1;
          }
          else {
            if (uVar2 < local_14) {
              local_14 = uVar2;
            }
            if (uVar2 <= uVar4) goto LAB_0044eea7;
            iVar5 = iVar5 + iVar1;
            uVar4 = uVar2;
          }
        }
      }
      if (uVar4 == local_14) {
        uVar4 = local_14 + 1;
      }
      for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x1cc4) * 0x100; iVar5 = iVar5 + iVar1) {
        for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1cc0) * 0x100; iVar3 = iVar3 + iVar1) {
          uVar2 = (uint)*(ushort *)
                         (*(int *)(param_1 + 0x2f94) +
                         (((int)((iVar3 + (iVar3 >> 0x1f) * -0x100) -
                                (uint)((iVar3 >> 0x1f) << 7 < 0)) >> 8) +
                         ((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) -
                               (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8) * *(int *)(param_1 + 0x1cc0))
                         * 2);
          if ((uVar2 < 0xffff) && (uVar2 != 0)) {
            *(int *)((iVar3 / iVar1 + param_2) * 4 +
                    *(int *)(&DAT_01bd2fa0 + (param_3 + iVar5 / iVar1) * 4)) =
                 ((int)((uVar2 - local_14) * 0xff) / (int)(uVar4 - local_14)) * 0x10101;
          }
        }
      }
      if (*(int *)(0x01C775EC + 0x1e4) != 0) {
        FUN_00402d30(param_2,param_2 + param_4,param_3 + param_4 + -0xb,param_1);
        return;
      }
    }
  }
  return;
}
