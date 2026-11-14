// Name: engine_alphabit.cpp_FUN_0040d9a0
// Address: 0040d9a0
// Address Range: [[0040d9a0, 0040db5b]]
// Convention: unknown
// Signature: void engine_alphabit_cpp_FUN_0040d9a0(CAlphaBitmap *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_alphabit_cpp_FUN_0040d9a0(CAlphaBitmap *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040d910(param_1);
  if (DAT_0061b4a0 == 0x10) {
    iVar2 = 0;
    local_18 = 0;
    do {
      uVar1 = *(uint *)(&DAT_01c4e3d4 + local_18);
      *(ushort *)(iVar2 + 0x1c4e7d4) =
           (ushort)(((int)uVar1 >> 8 & 0xffU) / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
           (ushort)(((int)uVar1 >> 0x10 & 0xffU) / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) |
           (ushort)((uVar1 & 0xff) / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
      local_18 = local_18 + 4;
      iVar2 = iVar2 + 2;
    } while (iVar2 != 0x200);
  }
  local_14 = 0;
  if (0 < DAT_0061b49c) {
    local_1c = 0;
    do {
      iVar2 = 0;
      if (0 < DAT_0061b498) {
        iVar4 = 0;
        iVar3 = 0;
        do {
          if (DAT_0061b4a0 == 0x20) {
            *(uint *)(*(int *)(&DAT_01c4354c + local_1c) + iVar3) =
                 *(uint *)
                  (&DAT_01c4e3d4 +
                  (uint)(byte)param_1->raw
                              [(param_1->width * iVar2) / DAT_0061b498 +
                               ((local_14 * param_1->height) / DAT_0061b49c) * param_1->width] * 4);
          }
          else {
            *(ushort *)(*(int *)(&DAT_01c4354c + local_1c) + iVar4) =
                 *(ushort *)
                  ((uint)(byte)param_1->raw
                               [(param_1->width * iVar2) / DAT_0061b498 +
                                ((local_14 * param_1->height) / DAT_0061b49c) * param_1->width] * 2
                  + 0x1c4e7d4);
          }
          iVar4 = iVar4 + 2;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < DAT_0061b498);
      }
      local_1c = local_1c + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_0061b49c);
  }
  return;
}
