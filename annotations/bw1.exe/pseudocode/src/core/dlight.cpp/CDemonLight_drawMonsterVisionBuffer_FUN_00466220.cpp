// Name: core_dlight.cpp_CDemonLight_drawMonsterVisionBuffer_FUN_00466220
// Address: 00466220
// Address Range: [[00466220, 004665b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_drawMonsterVisionBuffer_FUN_00466220(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset,int tint_mode)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_drawMonsterVisionBuffer_FUN_00466220(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset,int tint_mode)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ushort *puVar8;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  ushort *local_1c;
  int local_18;
  int local_14;
  
  engine_special_cpp_clearScreen_FUN_0057dc40();
  if (g_INT_0061b4a0 == 0x20) {
    local_28 = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar2 = local_28;
        if (0xf0 < g_INT_0061b49c) {
          iVar2 = local_28 * 2;
        }
        iVar2 = iVar2 + screen_y;
        if ((-1 < iVar2) && (iVar2 < g_INT_0061b49c)) {
          puVar8 = this_ptr->shadow_depth_buffer + local_28 * this_ptr->shadow_map_width;
          local_24 = 0;
          local_14 = 0;
          puVar7 = (uint *)(g_ARRAY_PTR_01c4354c[iVar2] + screen_x * 4);
          if (0 < this_ptr->shadow_map_width) {
            do {
              iVar2 = g_INT_0061b498;
              if (*puVar8 != 0) {
                uVar6 = (uint)(*puVar8 >> 6);
                if (0x7f < uVar6) {
                  uVar6 = 0x7f;
                }
                uVar6 = uVar6 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar6 = uVar6 + brightness_offset, 0xff < uVar6)) {
                  uVar6 = 0xff;
                }
                uVar6 = uVar6 + local_24;
                local_24 = uVar6 >> 1;
                uVar6 = uVar6 >> 2;
                uVar5 = (int)(local_24 * 3 + 0x96) >> 1;
                uVar3 = uVar5;
                uVar4 = uVar6;
                if ((tint_mode != 0) && (uVar3 = uVar6, uVar4 = uVar5, tint_mode == 1)) {
                  uVar6 = (int)(local_24 * 3) >> 1;
                  uVar3 = uVar6;
                  uVar4 = uVar6;
                }
                if (g_INT_0061b4a0 == 0x20) {
                  uVar6 = uVar6 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
                          uVar4 << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f) |
                          uVar3 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f);
                }
                else {
                  uVar6 = uVar3 << 0x10 | uVar4 << 8 | uVar6;
                }
                *puVar7 = uVar6;
                if (0x140 < iVar2) {
                  puVar7[1] = uVar6;
                }
              }
              puVar8 = puVar8 + 1;
              if (g_INT_0061b498 < 0x141) {
                puVar7 = puVar7 + 1;
              }
              else {
                puVar7 = puVar7 + 2;
              }
              local_14 = local_14 + 1;
            } while (local_14 < this_ptr->shadow_map_width);
          }
        }
        local_28 = local_28 + 1;
      } while (local_28 < this_ptr->shadow_map_height);
    }
  }
  else {
    local_2c = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar2 = local_2c;
        if (0xf0 < g_INT_0061b49c) {
          iVar2 = local_2c * 2;
        }
        iVar2 = iVar2 + screen_y;
        if ((-1 < iVar2) && (iVar2 < g_INT_0061b49c)) {
          local_1c = this_ptr->shadow_depth_buffer + local_2c * this_ptr->shadow_map_width;
          local_20 = 0;
          local_18 = 0;
          puVar8 = (ushort *)(g_ARRAY_PTR_01c4354c[iVar2] + screen_x * 2);
          if (0 < this_ptr->shadow_map_width) {
            do {
              iVar2 = g_INT_0061b498;
              if (*local_1c != 0) {
                uVar6 = (uint)(*local_1c >> 6);
                if (0x7f < uVar6) {
                  uVar6 = 0x7f;
                }
                uVar6 = uVar6 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar6 = uVar6 + brightness_offset, 0xff < uVar6)) {
                  uVar6 = 0xff;
                }
                uVar6 = uVar6 + local_20;
                local_20 = uVar6 >> 1;
                uVar6 = uVar6 >> 2;
                uVar5 = (int)(local_20 * 3 + 0x96) >> 1;
                uVar3 = uVar5;
                uVar4 = uVar6;
                if ((tint_mode != 0) && (uVar3 = uVar6, uVar4 = uVar5, tint_mode == 1)) {
                  uVar6 = (int)(local_20 * 3) >> 1;
                  uVar3 = uVar6;
                  uVar4 = uVar6;
                }
                uVar1 = (ushort)(uVar6 / (uint)g_INT_01c4e9f0 <<
                                (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f)) |
                        (ushort)(uVar4 / (uint)g_INT_01c4e9e4 <<
                                (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f)) |
                        (ushort)(uVar3 / (uint)g_INT_01c4e9d8 <<
                                (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f));
                *puVar8 = uVar1;
                if (0x140 < iVar2) {
                  puVar8[1] = uVar1;
                }
              }
              local_1c = local_1c + 1;
              if (g_INT_0061b498 < 0x141) {
                puVar8 = puVar8 + 1;
              }
              else {
                puVar8 = puVar8 + 2;
              }
              local_18 = local_18 + 1;
            } while (local_18 < this_ptr->shadow_map_width);
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < this_ptr->shadow_map_height);
    }
  }
  return;
}
