// Name: core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
// Address: 00510000
// Address Range: [[00510000, 0051040d]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,int spacing_flag)

#include "nocturne.h"

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,int spacing_flag)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar5;
  int local_24;
  int local_20;
  char **local_1c;
  char *pcVar7;
  CBitFont *this_ptr;
  
  this_ptr = g_ThemeFont;
  if (spacing_flag != 0) {
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_ThemeFont,(char *)spacing_flag,0xa0,y_position,7,0);
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0x58);
    y_position = y_position + iVar4 * 2;
  }
  local_20 = 0;
  if (0 < menu_count) {
    local_1c = menu_text_array;
    do {
      engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,*local_1c);
      iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0x58);
      local_24 = 0xf8;
      if (local_20 == *selected_index_ptr) {
        iVar2 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(&g_CMoonInstance);
        local_24 = 7;
        if (iVar2 == 0) {
          local_24 = 0xff;
        }
        else {
          iVar4 = 0;
          do {
            uVar3 = rand();
            uVar4 = rand();
            iVar5 = rand();
            engine_3d_c_setRenderAlpha_FUN_00406d80
                      ((uint)((longlong)iVar5 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar5 * 48000) >> 0x20) << 0x10);
            iVar4 = iVar4 + 1;
            engine_font_cpp_CBitFont_drawText_FUN_004cda80
                      (this_ptr,*local_1c,(uVar3 & 3) + 0x9e,((uVar4 & 3) - 2) + y_position,7,-1);
          } while (iVar4 < 5);
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
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar7 = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
  }
  else {
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar7 = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";
  }
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,pcVar7,0x27f - iVar3,0x1df - iVar4,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0x8000);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,g_MenuVersionText,0x206,99,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,"NON-RELEASE EDITOR BUILD",0,0,0xf8,0);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_SmallEditorFont,"Press CTRL+D to access the editor menu",0,0x14,0xf8,0);
  pcVar5 = menu_text_array[*selected_index_ptr];
  do {
    pcVar6 = pcVar5;
    if (*pcVar5 == ':') goto LAB_00510279;
    if (*pcVar5 == '\0') break;
    pcVar6 = pcVar5 + 1;
    if (*pcVar6 == ':') goto LAB_00510279;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00510279:
  g_MenuInputHappened = 0;
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD8);
  if (iVar4 != 0) {
    iVar4 = *selected_index_ptr;
    g_MenuInputHappened = 1;
    *selected_index_ptr = iVar4 + -1;
    if (iVar4 + -1 < 0) {
      *selected_index_ptr = menu_count + -1;
    }
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD2);
  if (iVar4 != 0) {
    g_MenuInputHappened = 1;
    iVar4 = *selected_index_ptr;
    *selected_index_ptr = iVar4 + 1;
    if (menu_count <= iVar4 + 1) {
      *selected_index_ptr = 0;
    }
  }
  if (pcVar6 != (char *)0x0) {
    g_MenuLeftRightPressed = 0;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar4 != 0) {
      g_MenuLeftRightPressed = 1;
      return *selected_index_ptr;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar4 != 0) goto LAB_00510340;
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
  if (iVar4 == 0) {
    return -1;
  }
LAB_00510340:
  return *selected_index_ptr;
}
