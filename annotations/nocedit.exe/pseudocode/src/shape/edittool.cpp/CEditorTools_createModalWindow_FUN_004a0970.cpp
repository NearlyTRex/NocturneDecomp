// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970
// Address: 004a0970
// Address Range: [[004a0970, 004a0dc2]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970(CEditorTools * this_ptr, int left, int top, int right, int bottom, char * text_content, int window_flags)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_createModalWindow_FUN_004a0970
          (CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,
          int window_flags)

{
  SWindow *pSVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  SWindow *pSVar9;
  char *buffer;
  char *pcVar10;
  int iVar11;
  uint *puVar12;
  char *pcVar13;
  uint *puVar14;
  byte bVar15;
  int in_stack_00000020;
  byte in_stack_00000028;
  int local_1c;
  int local_18;
  uint *puVar16;
  
  bVar15 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if (4 < g_WindowStackCount) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x7b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open another window!");
  }
  iVar2 = g_WindowStackCount;
  pSVar9 = g_WindowStack + g_WindowStackCount;
  iVar3 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  local_1c = g_WindowHeight / 0x60;
  bottom = bottom - iVar3;
  pcVar10 = text_content + -local_1c;
  window_flags = window_flags + iVar3;
  in_stack_00000020 = in_stack_00000020 + local_1c;
  if (bottom < 0) {
    bottom = 0;
  }
  if (g_WindowWidth < window_flags) {
    window_flags = g_WindowWidth;
  }
  pSVar1 = g_WindowStack + g_WindowStackCount;
  g_WindowStackCount = g_WindowStackCount + 1;
  pSVar1->text_buffer[0] = '\0';
  local_18 = 0;
  if (text_content != (char *)0x0) {
    buffer = g_WindowStack[iVar2].text_buffer;
    iVar4 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (g_EditorFont,text_content,g_TextWrapBuffer,0x14,200,
                       (window_flags - bottom) + iVar3 * -2);
    iVar11 = 0;
    if (0 < iVar4) {
      pcVar13 = g_TextWrapBuffer;
      do {
        iVar11 = iVar11 + 1;
        iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"%s\n",pcVar13);
        buffer = buffer + iVar5;
        pcVar13 = pcVar13 + 200;
      } while (iVar11 < iVar4);
    }
    this_ptr_00 = g_EditorFont;
    if (0 < iVar4) {
      buffer[-1] = 0;
      local_1c = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                           (this_ptr_00,g_WindowStack[iVar2].text_buffer);
      local_1c = g_FontCharacterWidth + local_1c;
      iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,"j");
      if (0 < iVar4 + g_FontCharacterWidth) {
        local_18 = iVar4 + g_FontCharacterWidth;
      }
      in_stack_00000020 = in_stack_00000020 + local_18 / 2;
      pcVar10 = pcVar10 + -(local_18 / 2);
    }
  }
  text_content = pcVar10;
  if ((int)text_content < 0) {
    text_content = (char *)0x0;
  }
  if (g_WindowHeight < in_stack_00000020) {
    in_stack_00000020 = g_WindowHeight;
  }
  if ((in_stack_00000028 & 1) == 0) {
    if (g_WindowStackCount == 1) {
      shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410((CEditorTools *)right);
    }
    g_WindowStack[iVar2].backup_width = g_WindowWidth;
    iVar4 = g_WindowStack[iVar2].backup_width * g_BitsPerPixel;
    g_WindowStack[iVar2].backup_height = g_WindowHeight;
    iVar11 = iVar4 >> 0x1f;
    uVar6 = (int)((iVar4 + iVar11 * -8) - (uint)(iVar11 << 2 < 0)) >> 3;
    iVar4 = g_WindowStack[iVar2].backup_height;
    g_WindowStack[iVar2].backup_x_offset = 0;
    g_WindowStack[iVar2].backup_y_offset = 0;
    pvVar7 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (iVar4 * uVar6,"..\\shape\\edittool.cpp",0x807);
    g_WindowStack[iVar2].screen_backup_buffer = pvVar7;
    if (pvVar7 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x809;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory to open editor window.");
    }
    puVar16 = g_WindowStack[iVar2].screen_backup_buffer;
    iVar4 = 0;
    if (0 < g_WindowStack[iVar2].backup_height) {
      do {
        iVar11 = g_WindowStack[iVar2].backup_x_offset * g_BitsPerPixel;
        iVar5 = iVar11 >> 0x1f;
        puVar12 = (uint *)
                  ((int)g_ScreenBufferArray[g_WindowStack[iVar2].backup_y_offset + iVar4] +
                  ((int)((iVar11 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3));
        puVar14 = puVar16;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
          puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
        }
        for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(byte *)puVar14 = *(byte *)puVar12;
          puVar12 = (uint *)((int)puVar12 + (uint)bVar15 * -2 + 1);
          puVar14 = (uint *)((int)puVar14 + (uint)bVar15 * -2 + 1);
        }
        puVar16 = (uint *)((int)puVar16 + uVar6);
        iVar4 = iVar4 + 1;
      } while (iVar4 < g_WindowStack[iVar2].backup_height);
    }
  }
  else {
    g_WindowStack[iVar2].screen_backup_buffer = (void *)0x0;
  }
  g_WindowStack[iVar2].saved_clip_left = g_ClipLeft;
  g_WindowStack[iVar2].saved_clip_top = g_ClipTop;
  g_WindowStack[iVar2].saved_clip_right = g_ClipRight;
  g_WindowStack[iVar2].saved_clip_bottom = g_ClipBottom;
  g_WindowStack[iVar2].saved_viewport_center_x = g_ViewportCenterXFixed;
  g_WindowStack[iVar2].saved_viewport_center_y = g_ViewportCenterYFixed;
  g_WindowStack[iVar2].saved_viewport_right = g_ViewportRightFixed;
  g_WindowStack[iVar2].saved_viewport_bottom = g_ViewportBottomFixed;
  g_WindowStack[iVar2].saved_viewport_width = g_ViewportWidth;
  g_WindowStack[iVar2].saved_viewport_height = g_ViewportHeight;
  pSVar9->left = bottom;
  g_WindowStack[iVar2].top = (int)text_content;
  g_WindowStack[iVar2].right = window_flags;
  g_WindowStack[iVar2].bottom = in_stack_00000020;
  engine_2d_c_setupViewportAndClipping_FUN_00401800
            (bottom + iVar3,(int)(text_content + local_18 + local_1c),(window_flags - iVar3) + -1,
             (in_stack_00000020 - local_1c) + -1);
  return;
}
