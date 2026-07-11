// Name: FUN_004931b0
// Address: 004931b0
// Address Range: [[004931b0, 0049338e]]
// Convention: unknown
// Signature: void FUN_004931b0(int *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049330b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004931b0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *local_28;
  int local_24;
  int *local_20;
  int *local_14;
  
  local_24 = 0;
  if (0 < *param_1) {
    local_20 = param_1;
    local_28 = param_1;
    do {
      iVar3 = 0;
      local_14 = local_20;
      piVar5 = local_28;
      do {
        uVar4 = (uint)*(byte *)((int)piVar5 + 0x166);
        uVar2 = (uint)*(byte *)((int)piVar5 + 0x165);
        uVar1 = (uint)*(byte *)(piVar5 + 0x59);
        if (DAT_005b7624 < 0x10) {
          if (DAT_005b7624 == 8) {
            uVar1 = (uint)(byte)(&DAT_01bf7720)
                                [((int)uVar4 >> 3) +
                                 ((int)uVar1 >> 3) * 0x400 + ((int)uVar2 >> 3) * 0x20];
LAB_00493246:
            local_20[iVar3 + 0x359] = uVar1;
          }
          else {
LAB_00493368:
            _DAT_01cc4800 = "..\\engine\\font.cpp";
            _DAT_01cc4804 = 0x686;
            FUN_004c8440("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else {
          if (DAT_005b7624 < 0x11) {
            uVar1 = (uVar4 / _DAT_01c00640 << (DAT_01c0063c & 0x1f) |
                    uVar1 / _DAT_01c00628 << (DAT_01c00624 & 0x1f) |
                    uVar2 / _DAT_01c00634 << (DAT_01c00630 & 0x1f)) & 0xffff;
            goto LAB_00493246;
          }
          if (DAT_005b7624 != 0x20) goto LAB_00493368;
          local_14[0x359] =
               uVar4 << (DAT_01c0063c & 0x1f) |
               uVar2 << (DAT_01c00630 & 0x1f) | uVar1 << (DAT_01c00624 & 0x1f);
        }
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 1;
        piVar5 = (int *)((int)piVar5 + 3);
      } while (iVar3 < 0x100);
      local_28 = local_28 + 0xc0;
      local_20 = local_20 + 0x100;
      local_24 = local_24 + 1;
    } while (local_24 < *param_1);
  }
  return;
}
