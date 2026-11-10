// Name: core_menu.cpp_FUN_004eb0e0
// Address: 004eb0e0
// Address Range: [[004eb0e0, 004eb3c7]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_FUN_004eb0e0(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_FUN_004eb0e0(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)

{
  CBitFont *this_ptr;
  int iVar1;
  int iVar2;
  char **ppcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint local_14;
  
  this_ptr = _DAT_01511cc0;
  if (title != (char *)0x0) {
    iVar4 = engine_font_cpp_FUN_004aaf00(_DAT_01511cc0,title);
    iVar4 = (0x280 - iVar4) / 2;
    engine_font_cpp_FUN_004a8df0(this_ptr,title,iVar4 + 1,y_position + 1,2,0);
    engine_font_cpp_FUN_004a8df0(this_ptr,title,iVar4,y_position,0xfa,0);
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr,0x58);
    y_position = y_position + iVar4;
  }
  iVar4 = 0;
  ppcVar3 = menu_text_array;
  if (0 < menu_count) {
    do {
      iVar1 = engine_font_cpp_FUN_004aaf00(this_ptr,*ppcVar3);
      iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr,0x58);
      iVar1 = (0x280 - iVar1) / 2;
      engine_font_cpp_FUN_004a8df0(this_ptr,*ppcVar3,iVar1,y_position + 1,4,0xffffffff);
      local_14 = 0xfc;
      if (iVar4 == *selected_index_ptr) {
        local_14 = 0xff;
      }
      engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
      engine_font_cpp_FUN_004a8df0(this_ptr,*ppcVar3,iVar1,y_position,local_14,0xffffffff);
      y_position = y_position + iVar2;
      if (title == (char *)0x0) {
        y_position = y_position + iVar2;
      }
      iVar4 = iVar4 + 1;
      ppcVar3 = ppcVar3 + 1;
    } while (iVar4 < menu_count);
  }
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  iVar4 = engine_font_cpp_FUN_004aaf00(_DAT_01511cc4,&DAT_005dcacd);
  engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(_DAT_01511cc4,&DAT_005dcacd);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc4,&DAT_005dcacd,0x280 - iVar4,0,0xfa,0);
  engine_3d_c_setRenderAlpha_FUN_00406da0(0x8000);
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  pcVar6 = menu_text_array[*selected_index_ptr];
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == ':') goto LAB_004eb260;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == ':') goto LAB_004eb260;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004eb260:
  _DAT_01d06138 = 0;
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x48);
  if (iVar4 != 0) {
    iVar4 = *selected_index_ptr;
    _DAT_01d06138 = 1;
    *selected_index_ptr = iVar4 + -1;
    if (iVar4 + -1 < 0) {
      *selected_index_ptr = menu_count + -1;
    }
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x50);
  if (iVar4 != 0) {
    iVar4 = *selected_index_ptr;
    _DAT_01d06138 = 1;
    *selected_index_ptr = iVar4 + 1;
    if (menu_count <= iVar4 + 1) {
      *selected_index_ptr = 0;
    }
  }
  if (pcVar5 != (char *)0x0) {
    _DAT_01d0612c = 0;
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4b);
    if (iVar4 != 0) {
      _DAT_01d0612c = 1;
      return *selected_index_ptr;
    }
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4d);
    if (iVar4 != 0) goto LAB_004eb328;
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c);
  if (iVar4 == 0) {
    return -1;
  }
LAB_004eb328:
  return *selected_index_ptr;
}
