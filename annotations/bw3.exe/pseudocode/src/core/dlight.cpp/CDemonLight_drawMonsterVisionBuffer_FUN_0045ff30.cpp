// Name: core_dlight.cpp_CDemonLight_drawMonsterVisionBuffer_FUN_0045ff30
// Address: 0045ff30
// Address Range: [[0045ff30, 0046026a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_drawMonsterVisionBuffer_FUN_0045ff30(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_drawMonsterVisionBuffer_FUN_0045ff30(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ushort *puVar7;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  ushort *local_18;
  int local_14;
  
  engine_special_cpp_clearScreen_FUN_00560d70();
  if (g_INT_005fba20 == 0x20) {
    local_28 = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar3 = local_28;
        if (0xf0 < g_INT_005fba1c) {
          iVar3 = local_28 * 2;
        }
        iVar3 = iVar3 + screen_y;
        if ((-1 < iVar3) && (iVar3 < g_INT_005fba1c)) {
          local_24 = 0;
          puVar6 = (uint *)(g_ARRAY_PTR_01c5faec[iVar3] + screen_x * 4);
          puVar7 = this_ptr->shadow_depth_buffer + local_28 * this_ptr->shadow_map_width;
          iVar3 = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              iVar1 = g_INT_005fba18;
              if (*puVar7 != 0) {
                uVar5 = (uint)(*puVar7 >> 6);
                if (0x7f < uVar5) {
                  uVar5 = 0x7f;
                }
                uVar5 = uVar5 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar5 = uVar5 + brightness_offset, 0xff < uVar5)) {
                  uVar5 = 0xff;
                }
                uVar5 = uVar5 + local_24;
                local_24 = uVar5 >> 1;
                iVar4 = (int)(local_24 * 3 + 0x96) >> 1;
                uVar5 = uVar5 >> 2;
                if (g_INT_005fba20 == 0x20) {
                  uVar5 = uVar5 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
                          iVar4 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
                          uVar5 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
                }
                else {
                  uVar5 = iVar4 << 0x10 | uVar5 << 8 | uVar5;
                }
                *puVar6 = uVar5;
                if (0x140 < iVar1) {
                  puVar6[1] = uVar5;
                }
              }
              puVar7 = puVar7 + 1;
              if (g_INT_005fba18 < 0x141) {
                puVar6 = puVar6 + 1;
              }
              else {
                puVar6 = puVar6 + 2;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < this_ptr->shadow_map_width);
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
        iVar3 = local_2c;
        if (0xf0 < g_INT_005fba1c) {
          iVar3 = local_2c * 2;
        }
        iVar3 = iVar3 + screen_y;
        if ((-1 < iVar3) && (iVar3 < g_INT_005fba1c)) {
          puVar7 = (ushort *)(g_ARRAY_PTR_01c5faec[iVar3] + screen_x * 2);
          local_18 = this_ptr->shadow_depth_buffer + local_2c * this_ptr->shadow_map_width;
          local_20 = 0;
          local_14 = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              iVar3 = g_INT_005fba18;
              if (*local_18 != 0) {
                uVar5 = (uint)(*local_18 >> 6);
                if (0x7f < uVar5) {
                  uVar5 = 0x7f;
                }
                uVar5 = uVar5 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar5 = uVar5 + brightness_offset, 0xff < uVar5)) {
                  uVar5 = 0xff;
                }
                local_20 = uVar5 + local_20 >> 1;
                uVar5 = local_20 * 3 >> 2;
                uVar2 = (ushort)(local_20 / (uint)g_INT_01c6af90 <<
                                (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) |
                        (ushort)(uVar5 / (uint)g_INT_01c6af84 <<
                                (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) |
                        (ushort)(uVar5 / (uint)g_INT_01c6af78 <<
                                (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f));
                *puVar7 = uVar2;
                if (0x140 < iVar3) {
                  puVar7[1] = uVar2;
                }
              }
              local_18 = local_18 + 1;
              if (g_INT_005fba18 < 0x141) {
                puVar7 = puVar7 + 1;
              }
              else {
                puVar7 = puVar7 + 2;
              }
              local_14 = local_14 + 1;
            } while (local_14 < this_ptr->shadow_map_width);
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < this_ptr->shadow_map_height);
    }
  }
  return;
}
