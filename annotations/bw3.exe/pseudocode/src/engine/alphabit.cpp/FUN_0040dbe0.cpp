// Name: engine_alphabit.cpp_FUN_0040dbe0
// Address: 0040dbe0
// Address Range: [[0040dbe0, 0040dd9b]]
// Convention: unknown
// Signature: void engine_alphabit_cpp_FUN_0040dbe0(CAlphaBitmap *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_alphabit_cpp_FUN_0040dbe0(CAlphaBitmap *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040db50(param_1);
  if (DAT_005fba20 == 0x10) {
    iVar2 = 0;
    local_18 = 0;
    do {
      uVar1 = *(uint *)(&DAT_01c6a974 + local_18);
      *(ushort *)(iVar2 + 0x1c6ad74) =
           (ushort)(((int)uVar1 >> 8 & 0xffU) / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
           (ushort)(((int)uVar1 >> 0x10 & 0xffU) / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
           (ushort)((uVar1 & 0xff) / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
      local_18 = local_18 + 4;
      iVar2 = iVar2 + 2;
    } while (iVar2 != 0x200);
  }
  local_14 = 0;
  if (0 < DAT_005fba1c) {
    local_1c = 0;
    do {
      iVar2 = 0;
      if (0 < DAT_005fba18) {
        iVar4 = 0;
        iVar3 = 0;
        do {
          uVar1 = (uint)*(byte *)(*(int *)param_1 +
                                 (*(int *)&param_1->field_0xc * iVar2) / DAT_005fba18 +
                                 ((local_14 * *(int *)&param_1->field_0x10) / DAT_005fba1c) *
                                 *(int *)&param_1->field_0xc);
          if (DAT_005fba20 == 0x20) {
            *(uint *)(*(int *)(&DAT_01c5faec + local_1c) + iVar3) =
                 *(uint *)(&DAT_01c6a974 + uVar1 * 4);
          }
          else {
            *(ushort *)(*(int *)(&DAT_01c5faec + local_1c) + iVar4) =
                 *(ushort *)(uVar1 * 2 + 0x1c6ad74);
          }
          iVar4 = iVar4 + 2;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < DAT_005fba18);
      }
      local_1c = local_1c + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_005fba1c);
  }
  return;
}
