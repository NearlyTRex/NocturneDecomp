// Name: FUN_004c45e0
// Address: 004c45e0
// Address Range: [[004c45e0, 004c47b1]]
// Convention: unknown
// Signature: void FUN_004c45e0(int *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c4765) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c45e0(int *param_1)

{
  int *piVar1;
  int *local_2c;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  local_1c = 0;
  if (0 < *param_1) {
    local_20 = param_1;
    local_2c = param_1;
    local_24 = param_1;
    do {
      local_24 = local_24 + 0x100;
      local_18 = local_2c;
      local_14 = local_2c;
      piVar1 = local_20;
      do {
        if (DAT_0061b4a0 < 0x10) {
          if (DAT_0061b4a0 != 8) {
LAB_004c478b:
            _DAT_01d1d400 = "..\\engine\\font.cpp";
            _DAT_01d1d404 = 0x8e4;
            FUN_005030e0("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else if (DAT_0061b4a0 < 0x11) {
          local_14[0x36d] =
               (*(byte *)((int)piVar1 + 0x1b6) / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f) |
               *(byte *)((int)piVar1 + 0x1b5) / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f) |
               *(byte *)(piVar1 + 0x6d) / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) & 0xffff;
        }
        else {
          if (DAT_0061b4a0 != 0x20) goto LAB_004c478b;
          local_18[0x36d] =
               (uint)*(byte *)((int)piVar1 + 0x1b6) << (DAT_01c4e9ec & 0x1f) |
               (uint)*(byte *)(piVar1 + 0x6d) << (DAT_01c4e9d4 & 0x1f) |
               (uint)*(byte *)((int)piVar1 + 0x1b5) << (DAT_01c4e9e0 & 0x1f);
        }
        piVar1 = (int *)((int)piVar1 + 3);
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      } while (local_14 != local_24);
      local_20 = local_20 + 0xc0;
      local_2c = local_2c + 0x100;
      local_1c = local_1c + 1;
    } while (local_1c < *param_1);
  }
  return;
}
