// Name: FUN_0040dbe0
// Address: 0040dbe0
// Address Range: [[0040dbe0, 0040dd9b]]
// Convention: unknown
// Signature: uint FUN_0040dbe0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040dbe0(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  uint local_18;
  int local_14;
  
  local_18 = FUN_0040db50(param_1);
  if (DAT_005fba20 == 0x10) {
    iVar3 = 0;
    local_18 = 0;
    do {
      uVar2 = *(uint *)(&DAT_01c6a974 + local_18);
      *(ushort *)(iVar3 + 0x1c6ad74) =
           (ushort)(((int)uVar2 >> 8 & 0xffU) / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
           (ushort)(((int)uVar2 >> 0x10 & 0xffU) / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
           (ushort)((uVar2 & 0xff) / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
      local_18 = local_18 + 4;
      iVar3 = iVar3 + 2;
    } while (iVar3 != 0x200);
  }
  local_14 = 0;
  if (0 < DAT_005fba1c) {
    local_1c = 0;
    do {
      iVar3 = 0;
      if (0 < DAT_005fba18) {
        iVar5 = 0;
        iVar4 = 0;
        do {
          uVar2 = (uint)*(byte *)(*param_1 +
                                 (param_1[3] * iVar3) / DAT_005fba18 +
                                 ((local_14 * param_1[4]) / DAT_005fba1c) * param_1[3]);
          if (DAT_005fba20 == 0x20) {
            local_18 = *(uint *)(&DAT_01c6a974 + uVar2 * 4);
            *(uint *)(*(int *)(&DAT_01c5faec + local_1c) + iVar4) = local_18;
          }
          else {
            uVar1 = *(ushort *)(uVar2 * 2 + 0x1c6ad74);
            local_18 = (uint)uVar1;
            *(ushort *)(*(int *)(&DAT_01c5faec + local_1c) + iVar5) = uVar1;
          }
          iVar5 = iVar5 + 2;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < DAT_005fba18);
      }
      local_1c = local_1c + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_005fba1c);
  }
  return local_18;
}
