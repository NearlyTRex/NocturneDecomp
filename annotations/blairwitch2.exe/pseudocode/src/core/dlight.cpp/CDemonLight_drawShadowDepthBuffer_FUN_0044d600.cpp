// Name: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600
// Address: 0044d600
// Address Range: [[0044d600, 0044d9ee]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ushort *puVar9;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  
  g_INT_01b13888 = 0;
  iVar7 = 0;
  do {
    uVar4 = rand();
    iVar6 = iVar7 + 4;
    *(uint *)((int)g_INT_ARRAY_01b1388c + iVar7) = (uVar4 & 0x1f) - 0x10;
    iVar7 = iVar6;
  } while (iVar6 != 400);
  iVar7 = 0;
  if (0 < g_INT_006141bc) {
    iVar6 = 0;
    do {
      iVar5 = g_INT_006141b8 * g_INT_006141c0 >> 0x1f;
      puVar1 = (uint *)((int)g_ARRAY_PTR_01c2a38c + iVar6);
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 1;
      memset
                ((void *)*puVar1,0,
                 (int)((g_INT_006141b8 * g_INT_006141c0 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3
                );
    } while (iVar7 < g_INT_006141bc);
  }
  if (g_INT_006141c0 == 0x20) {
    local_30 = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar7 = local_30;
        if (0xf0 < g_INT_006141bc) {
          iVar7 = local_30 * 2;
        }
        iVar7 = iVar7 + screen_y;
        if ((-1 < iVar7) && (iVar7 < g_INT_006141bc)) {
          puVar8 = (uint *)(g_ARRAY_PTR_01c2a38c[iVar7] + screen_x * 4);
          local_18 = this_ptr->shadow_depth_buffer + local_30 * this_ptr->shadow_map_width;
          local_24 = 0;
          local_20 = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              iVar7 = g_INT_006141b8;
              if (*local_18 != 0) {
                piVar2 = g_INT_ARRAY_01b1388c + g_INT_01b13888;
                g_INT_01b13888 = g_INT_01b13888 + 1;
                uVar4 = (uint)(*local_18 >> 6) + *piVar2;
                if (99 < g_INT_01b13888) {
                  g_INT_01b13888 = 0;
                }
                if (0x7f < uVar4) {
                  uVar4 = 0x7f;
                }
                uVar4 = uVar4 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar4 = uVar4 + brightness_offset, 0xff < uVar4)) {
                  uVar4 = 0xff;
                }
                local_24 = uVar4 + local_24 >> 1;
                uVar4 = local_24 * 3 >> 2;
                if (g_INT_006141c0 == 0x20) {
                  uVar4 = local_24 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
                          uVar4 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f) |
                          uVar4 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
                }
                else {
                  uVar4 = uVar4 << 0x10 | uVar4 << 8 | local_24;
                }
                *puVar8 = uVar4;
                if (0x140 < iVar7) {
                  puVar8[1] = uVar4;
                }
              }
              local_18 = local_18 + 1;
              if (g_INT_006141b8 < 0x141) {
                puVar8 = puVar8 + 1;
              }
              else {
                puVar8 = puVar8 + 2;
              }
              local_20 = local_20 + 1;
            } while (local_20 < this_ptr->shadow_map_width);
          }
        }
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr->shadow_map_height);
    }
  }
  else {
    local_2c = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar7 = local_2c;
        if (0xf0 < g_INT_006141bc) {
          iVar7 = local_2c * 2;
        }
        iVar7 = iVar7 + screen_y;
        if ((-1 < iVar7) && (iVar7 < g_INT_006141bc)) {
          puVar9 = (ushort *)(g_ARRAY_PTR_01c2a38c[iVar7] + screen_x * 2);
          local_14 = this_ptr->shadow_depth_buffer + local_2c * this_ptr->shadow_map_width;
          local_28 = 0;
          local_1c = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              if (*local_14 != 0) {
                piVar2 = g_INT_ARRAY_01b1388c + g_INT_01b13888;
                g_INT_01b13888 = g_INT_01b13888 + 1;
                uVar4 = (uint)(*local_14 >> 6) + *piVar2;
                if (99 < g_INT_01b13888) {
                  g_INT_01b13888 = 0;
                }
                if (0x7f < uVar4) {
                  uVar4 = 0x7f;
                }
                uVar4 = uVar4 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar4 = uVar4 + brightness_offset, 0xff < uVar4)) {
                  uVar4 = 0xff;
                }
                local_28 = uVar4 + local_28 >> 1;
                uVar4 = local_28 * 3 >> 2;
                uVar3 = (ushort)(local_28 / (uint)g_INT_01c35830 <<
                                (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) |
                        (ushort)(uVar4 / (uint)g_INT_01c35818 <<
                                (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) |
                        (ushort)(uVar4 / (uint)g_INT_01c35824 <<
                                (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f));
                *puVar9 = uVar3;
                if (0x140 < g_INT_006141b8) {
                  puVar9[1] = uVar3;
                }
              }
              local_14 = local_14 + 1;
              if (g_INT_006141b8 < 0x141) {
                puVar9 = puVar9 + 1;
              }
              else {
                puVar9 = puVar9 + 2;
              }
              local_1c = local_1c + 1;
            } while (local_1c < this_ptr->shadow_map_width);
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < this_ptr->shadow_map_height);
    }
  }
  return;
}
