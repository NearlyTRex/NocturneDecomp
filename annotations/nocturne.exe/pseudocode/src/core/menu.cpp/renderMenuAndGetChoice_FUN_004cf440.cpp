// Name: core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
// Address: 004cf440
// Address Range: [[004cf440, 004cf809]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)

{
  CBitFont *this_ptr;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int local_24;
  int local_20;
  char **local_1c;
  
  this_ptr = _DAT_014b9900;
  if (title != (char *)0x0) {
    engine_font_cpp_CBitFont_drawText_FUN_00490980(_DAT_014b9900,title,0xa0,y_position,7,0);
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0x58);
    y_position = y_position + iVar1 * 2;
  }
  local_20 = 0;
  if (0 < menu_count) {
    local_1c = menu_text_array;
    do {
      engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(this_ptr,*local_1c);
      iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0x58);
      local_24 = 0xf8;
      if (local_20 == *selected_index_ptr) {
        iVar2 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_004df170((CMoon *)0x1cc5780);
        local_24 = 7;
        if (iVar2 == 0) {
          local_24 = 0xff;
        }
        else {
          iVar2 = 0;
          do {
            uVar3 = rand();
            uVar4 = rand();
            iVar5 = rand();
            engine_3d_c_setRenderAlpha_FUN_00408370
                      ((uint)((longlong)iVar5 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar5 * 48000) >> 0x20) << 0x10);
            iVar2 = iVar2 + 1;
            engine_font_cpp_CBitFont_drawText_FUN_00490980
                      (this_ptr,*local_1c,(uVar3 & 3) + 0x9e,((uVar4 & 3) - 2) + y_position,7,-1);
          } while (iVar2 < 5);
        }
      }
      engine_3d_c_setRenderAlpha_FUN_00408370(48000);
      engine_font_cpp_CBitFont_drawText_FUN_00490980(this_ptr,*local_1c,0xa0,y_position,local_24,-1)
      ;
      y_position = y_position + iVar1;
      if (title == (char *)0x0) {
        y_position = y_position + iVar1;
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
    } while (local_20 < menu_count);
  }
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  if (_DAT_01d16810 == 0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                      (_DAT_014b9904,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                      (_DAT_014b9904,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar7 = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                      (_DAT_014b9904,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                      (_DAT_014b9904,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar7 = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";
  }
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b9904,pcVar7,0x27f - iVar1,0x1df - iVar2,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00408370(0x8000);
  engine_font_cpp_CBitFont_drawText_FUN_00490980(_DAT_014b9904,"",0x206,99,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  pcVar7 = menu_text_array[*selected_index_ptr];
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == ':') goto LAB_004cf677;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == ':') goto LAB_004cf677;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004cf677:
  _DAT_01cc5b68 = 0;
  iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x48);
  if (iVar1 != 0) {
    _DAT_01cc5b68 = 1;
    iVar1 = *selected_index_ptr;
    *selected_index_ptr = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *selected_index_ptr = menu_count + -1;
    }
  }
  iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x50);
  if (iVar1 != 0) {
    iVar1 = *selected_index_ptr;
    _DAT_01cc5b68 = 1;
    *selected_index_ptr = iVar1 + 1;
    if (menu_count <= iVar1 + 1) {
      *selected_index_ptr = 0;
    }
  }
  if (pcVar6 != (char *)0x0) {
    _DAT_01cc5b5c = 0;
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4b);
    if (iVar1 != 0) {
      _DAT_01cc5b5c = 1;
      return *selected_index_ptr;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4d);
    if (iVar1 != 0) goto LAB_004cf73d;
  }
  iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x1c);
  if (iVar1 == 0) {
    return -1;
  }
LAB_004cf73d:
  return *selected_index_ptr;
}
