// Name: FUN_0040d9a0
// Address: 0040d9a0
// Address Range: [[0040d9a0, 0040db5b]]
// Convention: unknown
// Signature: uint FUN_0040d9a0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040d9a0(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  uint local_18;
  int local_14;
  
  local_18 = FUN_0040d910(param_1);
  if (DAT_0061b4a0 == 0x10) {
    iVar3 = 0;
    local_18 = 0;
    do {
      uVar2 = *(uint *)(&DAT_01c4e3d4 + local_18);
      *(ushort *)(iVar3 + 0x1c4e7d4) =
           (ushort)(((int)uVar2 >> 8 & 0xffU) / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
           (ushort)(((int)uVar2 >> 0x10 & 0xffU) / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) |
           (ushort)((uVar2 & 0xff) / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
      local_18 = local_18 + 4;
      iVar3 = iVar3 + 2;
    } while (iVar3 != 0x200);
  }
  local_14 = 0;
  if (0 < DAT_0061b49c) {
    local_1c = 0;
    do {
      iVar3 = 0;
      if (0 < DAT_0061b498) {
        iVar5 = 0;
        iVar4 = 0;
        do {
          uVar2 = (uint)*(byte *)(*param_1 +
                                 (param_1[3] * iVar3) / DAT_0061b498 +
                                 ((local_14 * param_1[4]) / DAT_0061b49c) * param_1[3]);
          if (DAT_0061b4a0 == 0x20) {
            local_18 = *(uint *)(&DAT_01c4e3d4 + uVar2 * 4);
            *(uint *)(*(int *)(&DAT_01c4354c + local_1c) + iVar4) = local_18;
          }
          else {
            uVar1 = *(ushort *)(uVar2 * 2 + 0x1c4e7d4);
            local_18 = (uint)uVar1;
            *(ushort *)(*(int *)(&DAT_01c4354c + local_1c) + iVar5) = uVar1;
          }
          iVar5 = iVar5 + 2;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < DAT_0061b498);
      }
      local_1c = local_1c + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_0061b49c);
  }
  return local_18;
}
