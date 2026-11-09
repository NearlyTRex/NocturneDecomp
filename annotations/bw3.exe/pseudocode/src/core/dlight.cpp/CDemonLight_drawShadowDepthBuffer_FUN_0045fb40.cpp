// Name: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40
// Address: 0045fb40
// Address Range: [[0045fb40, 0045ff2e]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

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
  
  _DAT_01b4b6b4 = 0;
  iVar6 = 0;
  do {
    uVar3 = rand();
    iVar5 = iVar6 + 4;
    *(uint *)(&DAT_01b4b6b8 + iVar6) = (uVar3 & 0x1f) - 0x10;
    iVar6 = iVar5;
  } while (iVar5 != 400);
  iVar6 = 0;
  if (0 < DAT_005fba1c) {
    iVar5 = 0;
    do {
      iVar4 = DAT_005fba18 * DAT_005fba20 >> 0x1f;
      puVar1 = (uint *)(&DAT_01c5faec + iVar5);
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      memset
                ((void *)*puVar1,0,
                 (int)((DAT_005fba18 * DAT_005fba20 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3);
    } while (iVar6 < DAT_005fba1c);
  }
  if (DAT_005fba20 == 0x20) {
    local_30 = 0;
    if (0 < *(int *)&this_ptr->field_0x1cc4) {
      do {
        iVar6 = local_30;
        if (0xf0 < DAT_005fba1c) {
          iVar6 = local_30 * 2;
        }
        iVar6 = iVar6 + screen_y;
        if ((-1 < iVar6) && (iVar6 < DAT_005fba1c)) {
          puVar7 = (uint *)(*(int *)(&DAT_01c5faec + iVar6 * 4) + screen_x * 4);
          local_18 = (ushort *)
                     (*(int *)&this_ptr->field_0x2f94 +
                     local_30 * *(int *)&this_ptr->field_0x1cc0 * 2);
          local_24 = 0;
          local_20 = 0;
          if (0 < *(int *)&this_ptr->field_0x1cc0) {
            do {
              iVar6 = DAT_005fba18;
              if (*local_18 != 0) {
                iVar5 = _DAT_01b4b6b4 * 4;
                _DAT_01b4b6b4 = _DAT_01b4b6b4 + 1;
                uVar3 = (uint)(*local_18 >> 6) + *(int *)(&DAT_01b4b6b8 + iVar5);
                if (99 < _DAT_01b4b6b4) {
                  _DAT_01b4b6b4 = 0;
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
                if (DAT_005fba20 == 0x20) {
                  uVar3 = local_24 << (DAT_01c6af8c & 0x1f) |
                          uVar3 << (DAT_01c6af80 & 0x1f) | uVar3 << (DAT_01c6af74 & 0x1f);
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
              if (DAT_005fba18 < 0x141) {
                puVar7 = puVar7 + 1;
              }
              else {
                puVar7 = puVar7 + 2;
              }
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)&this_ptr->field_0x1cc0);
          }
        }
        local_30 = local_30 + 1;
      } while (local_30 < *(int *)&this_ptr->field_0x1cc4);
    }
  }
  else {
    local_2c = 0;
    if (0 < *(int *)&this_ptr->field_0x1cc4) {
      do {
        iVar6 = local_2c;
        if (0xf0 < DAT_005fba1c) {
          iVar6 = local_2c * 2;
        }
        iVar6 = iVar6 + screen_y;
        if ((-1 < iVar6) && (iVar6 < DAT_005fba1c)) {
          puVar8 = (ushort *)(*(int *)(&DAT_01c5faec + iVar6 * 4) + screen_x * 2);
          local_14 = (ushort *)
                     (*(int *)&this_ptr->field_0x2f94 +
                     local_2c * *(int *)&this_ptr->field_0x1cc0 * 2);
          local_28 = 0;
          local_1c = 0;
          if (0 < *(int *)&this_ptr->field_0x1cc0) {
            do {
              if (*local_14 != 0) {
                iVar6 = _DAT_01b4b6b4 * 4;
                _DAT_01b4b6b4 = _DAT_01b4b6b4 + 1;
                uVar3 = (uint)(*local_14 >> 6) + *(int *)(&DAT_01b4b6b8 + iVar6);
                if (99 < _DAT_01b4b6b4) {
                  _DAT_01b4b6b4 = 0;
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
                uVar2 = (ushort)(local_28 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
                        (ushort)(uVar3 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
                        (ushort)(uVar3 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f));
                *puVar8 = uVar2;
                if (0x140 < DAT_005fba18) {
                  puVar8[1] = uVar2;
                }
              }
              local_14 = local_14 + 1;
              if (DAT_005fba18 < 0x141) {
                puVar8 = puVar8 + 1;
              }
              else {
                puVar8 = puVar8 + 2;
              }
              local_1c = local_1c + 1;
            } while (local_1c < *(int *)&this_ptr->field_0x1cc0);
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < *(int *)&this_ptr->field_0x1cc4);
    }
  }
  return;
}
