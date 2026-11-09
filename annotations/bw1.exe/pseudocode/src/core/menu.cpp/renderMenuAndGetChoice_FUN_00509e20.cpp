// Name: core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20
// Address: 00509e20
// Address Range: [[00509e20, 0050a1ec]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)

{
  CBitFont *this_ptr;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_24;
  int local_20;
  char **local_1c;
  
  this_ptr = _DAT_0152d244;
  if (title != (char *)0x0) {
    engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,title,400,y_position,7,0);
    iVar1 = engine_font_cpp_FUN_004c4510(this_ptr,0x58);
    y_position = y_position + iVar1 * 2;
  }
  local_20 = 0;
  if (0 < menu_count) {
    local_1c = menu_text_array;
    do {
      engine_font_cpp_FUN_004c3ea0(this_ptr,*local_1c);
      iVar1 = engine_font_cpp_FUN_004c4510(this_ptr,0x58);
      local_24 = 0xf8;
      if (local_20 == *selected_index_ptr) {
        iVar2 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_005220b0(&g_CMoonInstance);
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
            engine_3d_c_setRenderAlpha_FUN_00406bd0
                      ((uint)((longlong)iVar5 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar5 * 48000) >> 0x20) << 0x10);
            iVar2 = iVar2 + 1;
            engine_font_cpp_FUN_004c1dd0
                      (this_ptr,*local_1c,(uVar3 & 3) + 0x18e,((uVar4 & 3) - 2) + y_position,7,
                       0xffffffff);
          } while (iVar2 < 5);
        }
      }
      engine_3d_c_setRenderAlpha_FUN_00406bd0(48000);
      engine_font_cpp_FUN_004c1dd0(this_ptr,*local_1c,400,y_position,local_24,0xffffffff);
      y_position = y_position + iVar1;
      if (title == (char *)0x0) {
        y_position = y_position + iVar1;
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
    } while (local_20 < menu_count);
  }
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  if (_DAT_01d7f1b8 == 0) {
    iVar1 = engine_font_cpp_FUN_004c3ea0(_DAT_0152d248,"Blair Witch Volume I: Rustin Parr  2000 Terminal Reality Inc.  Patent Pending.");
    iVar2 = engine_font_cpp_FUN_004c3f50(_DAT_0152d248,"Blair Witch Volume I: Rustin Parr  2000 Terminal Reality Inc.  Patent Pending.");
    pcVar7 = "Blair Witch Volume I: Rustin Parr  2000 Terminal Reality Inc.  Patent Pending.";
  }
  else {
    iVar1 = engine_font_cpp_FUN_004c3ea0(_DAT_0152d248,"Blair Witch Volume I: Rustin Parr (c) 2000 Terminal Reality Inc.  Patent Pending.");
    iVar2 = engine_font_cpp_FUN_004c3f50(_DAT_0152d248,"Blair Witch Volume I: Rustin Parr (c) 2000 Terminal Reality Inc.  Patent Pending.");
    pcVar7 = "Blair Witch Volume I: Rustin Parr (c) 2000 Terminal Reality Inc.  Patent Pending.";
  }
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d248,pcVar7,0x26b - iVar1,0x1df - iVar2,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0x8000);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d248,&DAT_005e7aac,0x206,399,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  pcVar7 = menu_text_array[*selected_index_ptr];
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == ':') goto LAB_0050a05a;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == ':') goto LAB_0050a05a;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_0050a05a:
  _DAT_01d1ee9c = 0;
  iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x48);
  if (iVar1 != 0) {
    _DAT_01d1ee9c = 1;
    iVar1 = *selected_index_ptr;
    *selected_index_ptr = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *selected_index_ptr = menu_count + -1;
    }
  }
  iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x50);
  if (iVar1 != 0) {
    iVar1 = *selected_index_ptr;
    _DAT_01d1ee9c = 1;
    *selected_index_ptr = iVar1 + 1;
    if (menu_count <= iVar1 + 1) {
      *selected_index_ptr = 0;
    }
  }
  if (pcVar6 != (char *)0x0) {
    _DAT_01d1ee8c = 0;
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4b);
    if (iVar1 != 0) {
      _DAT_01d1ee8c = 1;
      return *selected_index_ptr;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4d);
    if (iVar1 != 0) goto LAB_0050a120;
  }
  iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
  if (iVar1 == 0) {
    return -1;
  }
LAB_0050a120:
  return *selected_index_ptr;
}
