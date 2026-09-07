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
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  int *piVar2;
  int goggles_scale_x;
  int goggles_scale_y;
  int lit_rows;
  int row_count;
  int rep;
  int dst_x;
  uint *rows32[NOCTURNE_GOGGLES_MAX_SCALE];
  ushort *rows16[NOCTURNE_GOGGLES_MAX_SCALE];

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
#if NOCTURNE_AUTHENTIC_HUD_SCALE
  goggles_scale_x = (0x140 < g_WindowWidth) ? 2 : 1;
  goggles_scale_y = (0xf0 < g_WindowHeight) ? 2 : 1;
#else
  goggles_scale_x = nocturne_goggles_scale_x();
  goggles_scale_y = nocturne_goggles_scale_y();
#endif
  lit_rows = (goggles_scale_y + 1) / 2;
  if (g_BitsPerPixel == 0x20) {
    local_30 = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        row_count = 0;
        for (rep = 0; rep < lit_rows; rep = rep + 1) {
          iVar3 = screen_y + local_30 * goggles_scale_y + rep;
          if ((-1 < iVar3) && (iVar3 < g_WindowHeight)) {
            rows32[row_count] = (uint *)g_ScreenBufferArray[iVar3];
            row_count = row_count + 1;
          }
        }
        if (0 < row_count) {
          local_18 = this_ptr->shadow_depth_buffer + local_30 * this_ptr->shadow_map_width;
          local_24 = 0;
          local_20 = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
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
                uVar2 = local_24 << (g_BlueBitPosition.bytes[0] & 0x1f) |
                        uVar2 << (g_GreenBitPosition.bytes[0] & 0x1f) |
                        uVar2 << (g_RedBitPosition.bytes[0] & 0x1f);
                for (rep = 0; rep < goggles_scale_x; rep = rep + 1) {
                  dst_x = screen_x + local_20 * goggles_scale_x + rep;
                  if ((-1 < dst_x) && (dst_x < g_WindowWidth)) {
                    for (iVar3 = 0; iVar3 < row_count; iVar3 = iVar3 + 1) {
                      rows32[iVar3][dst_x] = uVar2;
                    }
                  }
                }
              }
              local_18 = local_18 + 1;
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
        row_count = 0;
        for (rep = 0; rep < lit_rows; rep = rep + 1) {
          iVar3 = screen_y + local_2c * goggles_scale_y + rep;
          if ((-1 < iVar3) && (iVar3 < g_WindowHeight)) {
            rows16[row_count] = (ushort *)g_ScreenBufferArray[iVar3];
            row_count = row_count + 1;
          }
        }
        if (0 < row_count) {
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
                for (rep = 0; rep < goggles_scale_x; rep = rep + 1) {
                  dst_x = screen_x + local_1c * goggles_scale_x + rep;
                  if ((-1 < dst_x) && (dst_x < g_WindowWidth)) {
                    for (iVar3 = 0; iVar3 < row_count; iVar3 = iVar3 + 1) {
                      rows16[iVar3][dst_x] = uVar3;
                    }
                  }
                }
              }
              local_14 = local_14 + 1;
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
