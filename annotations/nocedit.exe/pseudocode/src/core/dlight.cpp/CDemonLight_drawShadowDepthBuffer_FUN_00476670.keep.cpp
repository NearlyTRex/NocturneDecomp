// Name: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
// Address: 00476670
// MANUAL RECONSTRUCTION
// Address Range: [[00476670, 00476a5e]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

{
  int *piVar1;
  ushort uVar3;
  uint uVar4;
  int iVar7;
  uint uVar2;
  int iVar3;
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
  int *piVar2;

  g_NoiseTableIndex = 0;
  iVar3 = 0;
  do {
#if NOCTURNE_AUTHENTIC_RNG
    uVar4 = rand();
#else
    uVar4 = nocturne_rng_fx();
#endif
    g_NoiseTable[iVar3] = (uVar4 & 0x1f) - 0x10;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 100);
  iVar7 = 0;
  if (0 < g_WindowHeight) {
    do {
      memset(g_ScreenBufferArray[iVar7],0,g_WindowWidth * g_BitsPerPixel / 8);
      iVar7 = iVar7 + 1;
    } while (iVar7 < g_WindowHeight);
  }
  if (g_BitsPerPixel == 0x20) {
    local_30 = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar3 = local_30;
        if (0xf0 < g_WindowHeight) {
          iVar3 = local_30 * 2;
        }
        iVar3 = iVar3 + screen_y;
        if ((-1 < iVar3) && (iVar3 < g_WindowHeight)) {
          puVar8 = (uint *)g_ScreenBufferArray[iVar3] + screen_x;
          local_18 = this_ptr->shadow_depth_buffer + local_30 * this_ptr->shadow_map_width;
          local_24 = 0;
          local_20 = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              iVar3 = g_WindowWidth;
              if (*local_18 != 0) {
                piVar2 = g_NoiseTable + g_NoiseTableIndex;
                g_NoiseTableIndex = g_NoiseTableIndex + 1;
                uVar2 = (uint)(*local_18 >> 6) + *piVar2;
                if (99 < g_NoiseTableIndex) {
                  g_NoiseTableIndex = 0;
                }
                if (0x7f < uVar2) {
                  uVar2 = 0x7f;
                }
                uVar2 = uVar2 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar2 = uVar2 + brightness_offset, 0xff < uVar2)) {
                  uVar2 = 0xff;
                }
                local_24 = uVar2 + local_24 >> 1;
                uVar2 = local_24 * 3 >> 2;
                if (g_BitsPerPixel == 0x20) {
                  uVar2 = local_24 << (g_BlueBitPosition.bytes[0] & 0x1f) |
                          uVar2 << (g_GreenBitPosition.bytes[0] & 0x1f) |
                          uVar2 << (g_RedBitPosition.bytes[0] & 0x1f);
                }
                else {
                  uVar2 = uVar2 << 0x10 | uVar2 << 8 | local_24;
                }
                *puVar8 = uVar2;
                if (0x140 < iVar3) {
                  puVar8[1] = uVar2;
                }
              }
              local_18 = local_18 + 1;
              if (g_WindowWidth < 0x141) {
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
        iVar3 = local_2c;
        if (0xf0 < g_WindowHeight) {
          iVar3 = local_2c * 2;
        }
        iVar3 = iVar3 + screen_y;
        if ((-1 < iVar3) && (iVar3 < g_WindowHeight)) {
          puVar9 = (ushort *)g_ScreenBufferArray[iVar3] + screen_x;
          local_14 = this_ptr->shadow_depth_buffer + local_2c * this_ptr->shadow_map_width;
          local_28 = 0;
          local_1c = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              if (*local_14 != 0) {
                piVar1 = g_NoiseTable + g_NoiseTableIndex;
                g_NoiseTableIndex = g_NoiseTableIndex + 1;
                uVar2 = (uint)(*local_14 >> 6) + *piVar1;
                if (99 < g_NoiseTableIndex) {
                  g_NoiseTableIndex = 0;
                }
                if (0x7f < uVar2) {
                  uVar2 = 0x7f;
                }
                uVar2 = uVar2 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar2 = uVar2 + brightness_offset, 0xff < uVar2)) {
                  uVar2 = 0xff;
                }
                local_28 = uVar2 + local_28 >> 1;
                uVar2 = local_28 * 3 >> 2;
                uVar3 = (ushort)(local_28 / (uint)g_BlueScaleFactor <<
                                (g_BlueBitPosition.bytes[0] & 0x1f)) |
                        (ushort)(uVar2 / (uint)g_RedScaleFactor <<
                                (g_RedBitPosition.bytes[0] & 0x1f)) |
                        (ushort)(uVar2 / (uint)g_GreenScaleFactor <<
                                (g_GreenBitPosition.bytes[0] & 0x1f));
                *puVar9 = uVar3;
                if (0x140 < g_WindowWidth) {
                  puVar9[1] = uVar3;
                }
              }
              local_14 = local_14 + 1;
              if (g_WindowWidth < 0x141) {
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
