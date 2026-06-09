// Name: shape_design.c_quantizePaletteColors_FUN_0046b770
// Address: 0046b770
// MANUAL RECONSTRUCTION
// Address Range: [[0046b770, 0046b991]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_quantizePaletteColors_FUN_0046b770(byte *image_data,int pixel_count,int stride,int row_step,char *palette_data,char *bit_mask)

#include "nocturne.h"

void __cdecl shape_design_c_quantizePaletteColors_FUN_0046b770(byte *image_data,int pixel_count,int stride,int row_step,char *palette_data,char *bit_mask)

{
  float fVar1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float local_34;
  uint local_30;
  uint local_2c;
  byte local_1c;
  int local_14;
  int mask_len;
  float fVar2;

  mask_len = strlen(bit_mask);
  for (local_14 = 0; local_14 < pixel_count; local_14 = local_14 + 1) {
    local_1c = image_data[row_step];
    uVar3 = (uint)local_1c;
    if ((local_14 < mask_len * 8) &&
       (((uint)(byte)bit_mask[local_14 / 8] &
        1 << ((byte)local_14 & 7)) != 0)) {
      uVar4 = (uint)(byte)palette_data[uVar3 * 3];
      uVar5 = (uint)(byte)palette_data[uVar3 * 3 + 1];
      uVar6 = (uint)(byte)palette_data[uVar3 * 3 + 2];
      local_34 = 1e+30;
      local_30 = uVar3;
      for (local_2c = 0; (int)local_2c < 0x100; local_2c = local_2c + 1) {
        if (local_2c != uVar3) {
          uVar7 = (uint)(byte)palette_data[local_2c * 3];
          uVar8 = (uint)(byte)palette_data[local_2c * 3 + 1];
          uVar9 = (uint)(byte)palette_data[local_2c * 3 + 2];
          fVar2 = SQRT((float)(uVar6 * uVar6 + uVar5 * uVar5 + uVar4 * uVar4)) *
                  (float)0.57735027000000005 -
                  SQRT((float)(uVar9 * uVar9 + uVar8 * uVar8 + uVar7 * uVar7)) *
                  (float)0.57735027000000005;
          fVar1 = fVar2 * fVar2 * (float)0.69999999999999996 +
                  (float)(int)((uVar6 - uVar9) * (uVar6 - uVar9)) * (float)0.11 +
                  (float)(int)((uVar5 - uVar8) * (uVar5 - uVar8)) * (float)0.58999999999999997 +
                  (float)(int)((uVar4 - uVar7) * (uVar4 - uVar7)) * (float)0.29999999999999999;
          if (fVar1 < local_34) {
            local_30 = local_2c;
            local_34 = fVar1;
          }
        }
      }
      local_1c = (byte)local_30;
    }
    *image_data = local_1c;
    image_data = image_data + stride;
  }
  return;
}
