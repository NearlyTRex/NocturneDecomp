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
  int iVar1;
  uint uVar2;
  uint uVar3;
  CBitFont *unaff_EBX;
  CBitFont *unaff_EBP;
  int iVar4;
  uint *unaff_ESI;
  char *pcVar5;
  CBitFont *unaff_EDI;
  int in_stack_0000001c;
  int in_stack_00000030;
  int *in_stack_00000038;
  int in_stack_00000048;
  int *in_stack_0000004c;
  int in_stack_0000005c;
  int *in_stack_00000060;
  int *in_stack_00000074;
  int *in_stack_00000088;
  char *pcVar6;
  int iVar7;
  int in_stack_ffffffdc;
  int in_stack_ffffffe0;
  CBitFont *in_stack_ffffffe4;
  CBitFont *pCVar8;
  
  pCVar8 = g_ThemeFont;
  iVar4 = y_position;
  if (spacing_flag != 0) {
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_ThemeFont,(char *)spacing_flag,0xa0,y_position,7,0);
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar8,0x58);
    iVar4 = y_position + iVar4 * 2;
  }
  pCVar8 = (CBitFont *)0x0;
  if (0 < y_position) {
    do {
      engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(unaff_EDI,(char *)*selected_index_ptr);
      engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(in_stack_ffffffe4,0x58);
      iVar7 = 0xf8;
      if (in_stack_ffffffdc == *(int *)menu_count) {
        iVar1 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(&g_CMoonInstance);
        if (iVar1 == 0) {
          in_stack_ffffffdc = 0xff;
        }
        else {
          iVar1 = 0;
          pCVar8 = in_stack_ffffffe4;
          do {
            uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
            uVar3 = crt_stdlib_c_rand_FUN_005feb5c();
            iVar7 = crt_stdlib_c_rand_FUN_005feb5c();
            engine_3d_c_setRenderAlpha_FUN_00406d80
                      ((uint)((longlong)iVar7 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar7 * 48000) >> 0x20) << 0x10);
            in_stack_ffffffe0 = -1;
            in_stack_ffffffdc = 7;
            iVar7 = ((uVar3 & 3) - 2) + iVar4;
            iVar1 = iVar1 + 1;
            engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                      (unaff_EBX,(char *)*unaff_ESI,(uVar2 & 3) + 0x9e,iVar7,7,-1);
          } while (iVar1 < 5);
        }
      }
      engine_3d_c_setRenderAlpha_FUN_00406d80(48000);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (unaff_EBP,(char *)pCVar8->bitmap_count,iVar7,iVar4,in_stack_ffffffe0,-1);
      iVar4 = iVar4 + in_stack_ffffffe0;
      if (in_stack_0000001c == 0) {
        iVar4 = iVar4 + in_stack_ffffffe0;
      }
      selected_index_ptr = selected_index_ptr + 1;
      pCVar8 = (CBitFont *)((int)&pCVar8->bitmap_count + 1);
    } while ((int)pCVar8 < y_position);
  }
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_MessageCount == 0) {
    iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar6 = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
  }
  else {
    iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar6 = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";
  }
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,pcVar6,0x27f - iVar7,0x1df - iVar4,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0x8000);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,g_MenuVersionText,0x206,99,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,"NON-RELEASE EDITOR BUILD",0,0,0xf8,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,"Press CTRL+D to access the editor menu",0,0x14,0xf8,0);
  pcVar6 = *(char **)(*in_stack_00000038 * 4 + in_stack_00000030);
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == ':') goto LAB_00510279;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == ':') goto LAB_00510279;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00510279:
  g_MenuInputHappened = 0;
  iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x48);
  if (iVar4 != 0) {
    iVar4 = *in_stack_0000004c;
    g_MenuInputHappened = 1;
    *in_stack_0000004c = iVar4 + -1;
    if (iVar4 + -1 < 0) {
      *in_stack_0000004c = in_stack_00000048 + -1;
    }
  }
  iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x50);
  if (iVar4 != 0) {
    g_MenuInputHappened = 1;
    iVar4 = *in_stack_00000060;
    *in_stack_00000060 = iVar4 + 1;
    if (in_stack_0000005c <= iVar4 + 1) {
      *in_stack_00000060 = 0;
    }
  }
  if (pcVar5 != (char *)0x0) {
    g_MenuLeftRightPressed = 0;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
    if (iVar4 != 0) {
      g_MenuLeftRightPressed = 1;
      return *in_stack_00000074;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
    if (iVar4 != 0) goto LAB_00510340;
  }
  iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
  if (iVar4 == 0) {
    return -1;
  }
LAB_00510340:
  return *in_stack_00000088;
}
