// Name: core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
// Address: 00510000
// Address Range: [[00510000, 0051040d]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,int spacing_flag)

#include "nocturne.h"

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,int spacing_flag)

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
  
  this_ptr = g_ThemeFont;
  if (spacing_flag != 0) {
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_ThemeFont,(char *)spacing_flag,0xa0,y_position,7,0);
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0x58);
    y_position = y_position + iVar1 * 2;
  }
  local_20 = 0;
  if (0 < menu_count) {
    local_1c = menu_text_array;
    do {
      engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,*local_1c);
      iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0x58);
      local_24 = 0xf8;
      if (local_20 == *selected_index_ptr) {
        iVar2 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(&g_CMoonInstance);
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
            engine_3d_c_setRenderAlpha_FUN_00406d80
                      ((uint)((longlong)iVar5 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar5 * 48000) >> 0x20) << 0x10);
            iVar2 = iVar2 + 1;
            engine_font_cpp_CBitFont_drawText_FUN_004cda80
                      (this_ptr,*local_1c,(uVar3 & 3) + 0x9e,((uVar4 & 3) - 2) + y_position,7,-1);
          } while (iVar2 < 5);
        }
      }
      engine_3d_c_setRenderAlpha_FUN_00406d80(48000);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,*local_1c,0xa0,y_position,local_24,-1)
      ;
      y_position = y_position + iVar1;
      if (spacing_flag == 0) {
        y_position = y_position + iVar1;
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
    } while (local_20 < menu_count);
  }
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_MessageCount == 0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar7 = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
  }
  else {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar7 = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";
  }
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,pcVar7,0x27f - iVar2,0x1df - iVar1,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0x8000);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,g_MenuVersionText,0x206,99,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,"NON-RELEASE EDITOR BUILD",0,0,0xf8,0);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,"Press CTRL+D to access the editor menu",0,0x14,0xf8,0);
  pcVar7 = menu_text_array[*selected_index_ptr];
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == ':') goto LAB_00510279;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == ':') goto LAB_00510279;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00510279:
  g_MenuInputHappened = 0;
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    iVar1 = *selected_index_ptr;
    g_MenuInputHappened = 1;
    *selected_index_ptr = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *selected_index_ptr = menu_count + -1;
    }
  }
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    g_MenuInputHappened = 1;
    iVar1 = *selected_index_ptr;
    *selected_index_ptr = iVar1 + 1;
    if (menu_count <= iVar1 + 1) {
      *selected_index_ptr = 0;
    }
  }
  if (pcVar6 != (char *)0x0) {
    g_MenuLeftRightPressed = 0;
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      g_MenuLeftRightPressed = 1;
      return *selected_index_ptr;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) goto LAB_00510340;
  }
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
  if (iVar1 == 0) {
    return -1;
  }
LAB_00510340:
  return *selected_index_ptr;
}
