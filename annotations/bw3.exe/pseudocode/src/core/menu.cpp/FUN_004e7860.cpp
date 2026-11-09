// Name: core_menu.cpp_FUN_004e7860
// Address: 004e7860
// Address Range: [[004e7860, 004e7cfb]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_FUN_004e7860(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_FUN_004e7860(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)

{
  CBitFont *pCVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_f0 [200];
  int local_28;
  char **local_24;
  int local_20;
  char **local_1c;
  CBitFont *local_18;
  int local_14;
  
  pCVar1 = _DAT_01549aac;
  local_18 = _DAT_01549aac;
  if (title != (char *)0x0) {
    engine_font_cpp_FUN_004b0a20(_DAT_01549aac,title,0xaf,y_position,0x9a,0);
    iVar2 = engine_font_cpp_FUN_004b30f0(pCVar1,0x58);
    y_position = y_position + iVar2 * 2;
    local_18 = _DAT_01549ab0;
  }
  local_20 = 0;
  if (0 < menu_count) {
    local_24 = menu_text_array;
    do {
      pCVar1 = local_18;
      engine_font_cpp_FUN_004b2a80(local_18,*local_24);
      local_28 = engine_font_cpp_FUN_004b30f0(pCVar1,0x58);
      if (title == (char *)0x0) {
        if (local_20 == 0) {
          y_position = 0xea;
          local_14 = 0x11c;
        }
        else if (local_20 == 1) {
          local_14 = 0x10d;
          y_position = 0x112;
        }
        else if (local_20 == 2) {
          y_position = 0x13a;
          local_14 = 0x122;
        }
        else if (local_20 == 3) {
          y_position = 0x162;
          local_14 = 0x124;
        }
      }
      else {
        local_14 = 0xaf;
      }
      if ((local_20 == *selected_index_ptr) &&
         (iVar2 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_004f99b0(&g_CMoonInstance),
         iVar2 != 0)) {
        iVar2 = 0;
        local_1c = local_24;
        do {
          uVar3 = rand();
          uVar4 = rand();
          iVar5 = rand();
          engine_3d_c_setRenderAlpha_FUN_00406bf0
                    ((uint)((longlong)iVar5 * 48000) >> 0x10 |
                     (int)((ulonglong)((longlong)iVar5 * 48000) >> 0x20) << 0x10);
          iVar2 = iVar2 + 1;
          engine_font_cpp_FUN_004b0a20
                    (local_18,*local_1c,((uVar3 & 3) - 2) + local_14,((uVar4 & 3) - 2) + y_position,
                     0xab,0xffffffff);
        } while (iVar2 < 5);
      }
      engine_3d_c_setRenderAlpha_FUN_00406bf0(48000);
      engine_font_cpp_FUN_004b0a20(local_18,*local_24,local_14,y_position,0x9a,0xffffffff);
      y_position = y_position + local_28;
      if (title == (char *)0x0) {
        y_position = y_position + local_28;
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 < menu_count);
  }
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  FUN_005a28c0(local_f0,"Blair Witch Volume III: The Elly Kedward Tale (c) 2000 Ritual Entertainment, Ver %1.2f",0xc28f5c29,0x3ff028f5);
  if (_DAT_01dd4890 == 0) {
    iVar5 = engine_font_cpp_FUN_004b2a80(_DAT_01549ab4,local_f0);
    iVar2 = engine_font_cpp_FUN_004b2b30(_DAT_01549ab4,local_f0);
  }
  else {
    iVar5 = engine_font_cpp_FUN_004b2a80(_DAT_01549ab4,local_f0);
    iVar2 = engine_font_cpp_FUN_004b2b30(_DAT_01549ab4,local_f0);
  }
  engine_font_cpp_FUN_004b0a20(_DAT_01549ab4,local_f0,0x26b - iVar5,0x1df - iVar2,0xf8,0);
  pcVar7 = menu_text_array[*selected_index_ptr];
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == ':') goto LAB_004e7adc;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == ':') goto LAB_004e7adc;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004e7adc:
  _DAT_01d737e4 = 0;
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x48);
  if (iVar2 != 0) {
    _DAT_01d737e4 = 1;
    iVar2 = *selected_index_ptr;
    *selected_index_ptr = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *selected_index_ptr = menu_count + -1;
    }
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x50);
  if (iVar2 != 0) {
    iVar2 = *selected_index_ptr;
    _DAT_01d737e4 = 1;
    *selected_index_ptr = iVar2 + 1;
    if (menu_count <= iVar2 + 1) {
      *selected_index_ptr = 0;
    }
  }
  if (pcVar6 != (char *)0x0) {
    _DAT_01d737d4 = 0;
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4b);
    if (iVar2 != 0) {
      _DAT_01d737d4 = 1;
      return *selected_index_ptr;
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4d);
    if (iVar2 != 0) goto LAB_004e7bab;
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
  if (iVar2 == 0) {
    return -1;
  }
LAB_004e7bab:
  return *selected_index_ptr;
}
