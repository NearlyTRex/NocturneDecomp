// Name: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110
// Address: 00452110
// Address Range: [[00452110, 004524fe]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ushort *puVar8;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  
  _DAT_01abb4c4 = 0;
  iVar6 = 0;
  do {
    uVar3 = rand();
    iVar5 = iVar6 + 4;
    *(uint *)(&DAT_01abb4c8 + iVar6) = (uVar3 & 0x1f) - 0x10;
    iVar6 = iVar5;
  } while (iVar5 != 400);
  iVar6 = 0;
  if (0 < g_WindowHeight) {
    iVar5 = 0;
    do {
      iVar4 = g_WindowWidth * DAT_005b7624 >> 0x1f;
      puVar1 = (uint *)(&DAT_01bd2fa0 + iVar5);
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      memset
                ((void *)*puVar1,0,
                 (int)((g_WindowWidth * DAT_005b7624 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3);
    } while (iVar6 < g_WindowHeight);
  }
  if (DAT_005b7624 == 0x20) {
    local_30 = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar6 = local_30;
        if (0xf0 < g_WindowHeight) {
          iVar6 = local_30 * 2;
        }
        iVar6 = iVar6 + screen_y;
        if ((-1 < iVar6) && (iVar6 < g_WindowHeight)) {
          puVar7 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar6 * 4) + screen_x * 4);
          local_18 = this_ptr->shadow_depth_buffer + local_30 * this_ptr->shadow_map_width;
          local_24 = 0;
          local_20 = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              iVar6 = g_WindowWidth;
              if (*local_18 != 0) {
                iVar5 = _DAT_01abb4c4 * 4;
                _DAT_01abb4c4 = _DAT_01abb4c4 + 1;
                uVar3 = (uint)(*local_18 >> 6) + *(int *)(&DAT_01abb4c8 + iVar5);
                if (99 < _DAT_01abb4c4) {
                  _DAT_01abb4c4 = 0;
                }
                if (0x7f < uVar3) {
                  uVar3 = 0x7f;
                }
                uVar3 = uVar3 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar3 = uVar3 + brightness_offset, 0xff < uVar3)) {
                  uVar3 = 0xff;
                }
                local_24 = uVar3 + local_24 >> 1;
                uVar3 = local_24 * 3 >> 2;
                if (DAT_005b7624 == 0x20) {
                  uVar3 = local_24 << (DAT_01c0063c & 0x1f) |
                          uVar3 << (DAT_01c00630 & 0x1f) | uVar3 << (DAT_01c00624 & 0x1f);
                }
                else {
                  uVar3 = uVar3 << 0x10 | uVar3 << 8 | local_24;
                }
                *puVar7 = uVar3;
                if (0x140 < iVar6) {
                  puVar7[1] = uVar3;
                }
              }
              local_18 = local_18 + 1;
              if (g_WindowWidth < 0x141) {
                puVar7 = puVar7 + 1;
              }
              else {
                puVar7 = puVar7 + 2;
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
        iVar6 = local_2c;
        if (0xf0 < g_WindowHeight) {
          iVar6 = local_2c * 2;
        }
        iVar6 = iVar6 + screen_y;
        if ((-1 < iVar6) && (iVar6 < g_WindowHeight)) {
          puVar8 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar6 * 4) + screen_x * 2);
          local_14 = this_ptr->shadow_depth_buffer + local_2c * this_ptr->shadow_map_width;
          local_28 = 0;
          local_1c = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              if (*local_14 != 0) {
                iVar6 = _DAT_01abb4c4 * 4;
                _DAT_01abb4c4 = _DAT_01abb4c4 + 1;
                uVar3 = (uint)(*local_14 >> 6) + *(int *)(&DAT_01abb4c8 + iVar6);
                if (99 < _DAT_01abb4c4) {
                  _DAT_01abb4c4 = 0;
                }
                if (0x7f < uVar3) {
                  uVar3 = 0x7f;
                }
                uVar3 = uVar3 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar3 = uVar3 + brightness_offset, 0xff < uVar3)) {
                  uVar3 = 0xff;
                }
                local_28 = uVar3 + local_28 >> 1;
                uVar3 = local_28 * 3 >> 2;
                uVar2 = (ushort)(local_28 / _DAT_01c00640 << (DAT_01c0063c & 0x1f)) |
                        (ushort)(uVar3 / _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
                        (ushort)(uVar3 / _DAT_01c00634 << (DAT_01c00630 & 0x1f));
                *puVar8 = uVar2;
                if (0x140 < g_WindowWidth) {
                  puVar8[1] = uVar2;
                }
              }
              local_14 = local_14 + 1;
              if (g_WindowWidth < 0x141) {
                puVar8 = puVar8 + 1;
              }
              else {
                puVar8 = puVar8 + 2;
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
