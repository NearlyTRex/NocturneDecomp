// Name: core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
// Address: 00510000
// Address Range: [[00510000, 0051040d]]
// Convention: __cdecl
// Signature: int core_menu.cpp_renderMenuAndGetChoice_FUN_00510000(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, int spacing_flag)

#include "nocturne.h"

int __cdecl
core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
          (char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,
          int spacing_flag)

{
  CBitFont *this_ptr;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int in_stack_00000018;
  int *in_stack_0000001c;
  int *in_stack_00000024;
  int *in_stack_0000002c;
  char *pcVar8;
  int x_pos;
  int color_mode;
  int iVar9;
  char **ppcVar10;
  char **ppcVar11;
  CBitFont *this_ptr_00;
  
  this_ptr = g_ThemeFont;
  iVar6 = y_position;
  this_ptr_00 = g_ThemeFont;
  if (spacing_flag != 0) {
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_ThemeFont,(char *)spacing_flag,0xa0,y_position,7,0);
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0x58);
    iVar6 = y_position + iVar6 * 2;
  }
  iVar9 = 0;
  ppcVar10 = menu_text_array;
  if (0 < menu_count) {
    do {
      engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr_00,*ppcVar10);
      iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
      x_pos = 0xa0;
      color_mode = 0xf8;
      if (iVar9 == *selected_index_ptr) {
        iVar2 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(&g_CMoonInstance);
        color_mode = 7;
        if (iVar2 == 0) {
          color_mode = 0xff;
        }
        else {
          iVar2 = 0;
          ppcVar11 = ppcVar10;
          do {
            uVar3 = crt_stdlib_c_rand_FUN_005feb5c();
            uVar4 = crt_stdlib_c_rand_FUN_005feb5c();
            iVar5 = crt_stdlib_c_rand_FUN_005feb5c();
            engine_3d_c_setRenderAlpha_FUN_00406d80
                      ((uint)((longlong)iVar5 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar5 * 48000) >> 0x20) << 0x10);
            iVar2 = iVar2 + 1;
            engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                      (this_ptr_00,*ppcVar11,(uVar3 & 3) + 0x9e,((uVar4 & 3) - 2) + iVar6,7,-1);
          } while (iVar2 < 5);
        }
      }
      engine_3d_c_setRenderAlpha_FUN_00406d80(48000);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (this_ptr_00,*ppcVar10,x_pos,iVar6,color_mode,-1);
      iVar6 = iVar6 + iVar1;
      if (spacing_flag == 0) {
        iVar6 = iVar6 + iVar1;
      }
      iVar9 = iVar9 + 1;
      ppcVar10 = ppcVar10 + 1;
    } while (iVar9 < menu_count);
  }
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_MessageCount == 0) {
    iVar9 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar8 = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
  }
  else {
    iVar9 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar8 = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";
  }
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,pcVar8,0x27f - iVar9,0x1df - iVar6,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0x8000);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,g_MenuVersionText,0x206,99,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,"NON-RELEASE EDITOR BUILD",0,0,0xf8,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,"Press CTRL+D to access the editor menu",0,0x14,0xf8,0);
  pcVar8 = menu_text_array[*selected_index_ptr];
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == ':') goto LAB_00510279;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == ':') goto LAB_00510279;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00510279:
  g_MenuInputHappened = 0;
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
  if (iVar6 != 0) {
    iVar6 = *(int *)spacing_flag;
    g_MenuInputHappened = 1;
    *(int *)spacing_flag = iVar6 + -1;
    if (iVar6 + -1 < 0) {
      *(int *)spacing_flag = y_position + -1;
    }
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
  if (iVar6 != 0) {
    g_MenuInputHappened = 1;
    iVar6 = *in_stack_0000001c;
    *in_stack_0000001c = iVar6 + 1;
    if (in_stack_00000018 <= iVar6 + 1) {
      *in_stack_0000001c = 0;
    }
  }
  if (pcVar7 != (char *)0x0) {
    g_MenuLeftRightPressed = 0;
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
    if (iVar6 != 0) {
      g_MenuLeftRightPressed = 1;
      return *in_stack_00000024;
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
    if (iVar6 != 0) goto LAB_00510340;
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
  if (iVar6 == 0) {
    return -1;
  }
LAB_00510340:
  return *in_stack_0000002c;
}
