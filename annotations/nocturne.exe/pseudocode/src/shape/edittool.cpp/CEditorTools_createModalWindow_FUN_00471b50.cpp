// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50
// Address: 00471b50
// Address Range: [[00471b50, 004720b1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

{
  CBitFont *this_ptr_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  uint local_12e8 [1200];
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  
  bVar12 = 0;
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (4 < _DAT_01bcd07c) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x674;
    core_main_c_FUN_004c8440("Can't open another window!");
  }
  iVar1 = _DAT_01bcd07c * 0x1d8;
  local_1c = (int *)(iVar1 + 0x1bcd080);
  local_20 = (int)((DAT_005b761c + (DAT_005b761c >> 0x1f) * -0x80) -
                  (uint)((DAT_005b761c >> 0x1f) << 6 < 0)) >> 7;
  local_24 = DAT_005b7620 / 0x60;
  _DAT_01bcd07c = _DAT_01bcd07c + 1;
  left = left - local_20;
  top = top - local_24;
  right = right + local_20;
  bottom = bottom + local_24;
  if (left < 0) {
    left = 0;
  }
  if (DAT_005b761c < right) {
    right = DAT_005b761c;
  }
  local_28 = 0;
  *(byte *)(iVar1 + 0x1bcd0b8) = 0;
  if (text_content != (char *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                      (_DAT_01bcd070,text_content,(char *)0x1bcc0d0,0x14,200,
                       (right - left) + local_20 * -2);
    iVar9 = 0;
    piVar6 = local_1c + 0xe;
    if (0 < iVar1) {
      iVar7 = 0x1bcc0d0;
      do {
        iVar9 = iVar9 + 1;
        iVar2 = _sprintf(piVar6,"%s\n",iVar7);
        piVar6 = (int *)((int)piVar6 + iVar2);
        iVar7 = iVar7 + 200;
      } while (iVar9 < iVar1);
    }
    this_ptr_00 = _DAT_01bcd070;
    if (0 < iVar1) {
      *(byte *)((int)piVar6 + -1) = 0;
      local_28 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                           (this_ptr_00,(char *)(local_1c + 0xe));
      local_28 = _DAT_01bcd9bc + local_28;
      bottom = bottom + local_28 / 2;
      top = top - local_28 / 2;
    }
  }
  if (top < 0) {
    top = 0;
  }
  if (DAT_005b7620 < bottom) {
    bottom = DAT_005b7620;
  }
  if ((window_flags & 1) == 0) {
    if (_DAT_01c02594 != 0) {
      if (0 < DAT_005b7620) {
        iVar1 = 0;
        do {
          iVar9 = iVar1 + 4;
          *(uint *)((int)local_12e8 + iVar1) = *(uint *)(&DAT_01bd2fa0 + iVar1);
          iVar1 = iVar9;
        } while (iVar9 < DAT_005b7620 * 4);
      }
      engine_special_cpp_lockFrame_FUN_005322e0();
      iVar1 = DAT_005b761c * DAT_005b7624 >> 0x1f;
      uVar3 = (int)((DAT_005b761c * DAT_005b7624 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
      iVar1 = 0;
      if (0 < DAT_005b7620) {
        iVar9 = 0;
        do {
          puVar8 = *(uint **)(&DAT_01bd2fa0 + iVar9);
          puVar10 = *(uint **)((int)local_12e8 + iVar9);
          for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
          }
          for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(byte *)puVar10 = *(byte *)puVar8;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar12 * -2 + 1);
            puVar10 = (uint *)((int)puVar10 + (uint)bVar12 * -2 + 1);
          }
          iVar1 = iVar1 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar1 < DAT_005b7620);
      }
      engine_special_cpp_FUN_00532320();
    }
    iVar1 = (right - left) * DAT_005b7624;
    iVar9 = iVar1 >> 0x1f;
    local_14 = (int)((iVar1 + iVar9 * -8) - (uint)(iVar9 << 2 < 0)) >> 3;
    pvVar4 = malloc((bottom - top) * local_14);
    local_1c[0x72] = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      PTR_01cc4800 = "..\\shape\\edittool.cpp";
      INT_01cc4804 = 0x6c4;
      core_main_c_FUN_004c8440("out of memory to open editor window.");
    }
    puVar8 = (uint *)local_1c[0x72];
    if (top < bottom) {
      iVar1 = top * 4;
      local_18 = bottom * 4;
      do {
        iVar9 = left * DAT_005b7624 >> 0x1f;
        piVar6 = (int *)(&DAT_01bd2fa0 + iVar1);
        iVar1 = iVar1 + 4;
        puVar10 = (uint *)
                  (*piVar6 +
                  ((int)((left * DAT_005b7624 + iVar9 * -8) - (uint)(iVar9 << 2 < 0)) >> 3));
        puVar11 = puVar8;
        for (uVar3 = local_14 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        for (uVar3 = local_14 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(byte *)puVar11 = *(byte *)puVar10;
          puVar10 = (uint *)((int)puVar10 + (uint)bVar12 * -2 + 1);
          puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
        }
        puVar8 = (uint *)((int)puVar8 + local_14);
      } while (iVar1 < local_18);
    }
  }
  else {
    local_1c[0x72] = 0;
  }
  local_1c[4] = _DAT_01c00c58;
  local_1c[5] = _DAT_01c00c5c;
  local_1c[6] = _DAT_01c00c60;
  local_1c[7] = _DAT_01c00c64;
  local_1c[8] = _DAT_01c00c48;
  local_1c[9] = _DAT_01c00c4c;
  local_1c[10] = _DAT_01c00c50;
  local_1c[0xb] = _DAT_01c00c54;
  local_1c[0xc] = _DAT_01c00c68;
  local_1c[0xd] = _DAT_01c00c6c;
  *local_1c = left;
  local_1c[1] = top;
  local_1c[2] = right;
  local_1c[3] = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401e30
            (left + local_20,top + local_24 + local_28,(right - local_20) + -1,
             (bottom - local_24) + -1);
  return;
}
