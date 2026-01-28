// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970
// Address: 004a0970
// Address Range: [[004a0970, 004a0dc2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_004a0970 (CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content, int window_flags)

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
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  SWindow *pSVar10;
  char *buffer;
  int iVar11;
  uint *puVar12;
  char *pcVar13;
  uint *puVar14;
  byte bVar15;
  int local_24;
  uint *local_14;
  
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
  pSVar10 = g_WindowStack + g_WindowStackCount;
  iVar3 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar4 = g_WindowHeight / 0x60;
  left = left - iVar3;
  top = top - iVar4;
  right = right + iVar3;
  bottom = bottom + iVar4;
  if (left < 0) {
    left = 0;
  }
  if (g_WindowWidth < right) {
    right = g_WindowWidth;
  }
  pSVar1 = g_WindowStack + g_WindowStackCount;
  g_WindowStackCount = g_WindowStackCount + 1;
  pSVar1->text_buffer[0] = '\0';
  local_24 = 0;
  if (text_content != (char *)0x0) {
    buffer = g_WindowStack[iVar2].text_buffer;
    iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (g_EditorFont,text_content,g_TextWrapBuffer,0x14,200,
                       (right - left) + iVar3 * -2);
    iVar11 = 0;
    if (0 < iVar5) {
      pcVar13 = g_TextWrapBuffer;
      do {
        iVar11 = iVar11 + 1;
        iVar6 = crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"%s\n",pcVar13);
        buffer = buffer + iVar6;
        pcVar13 = pcVar13 + 200;
      } while (iVar11 < iVar5);
    }
    this_ptr_00 = g_EditorFont;
    if (0 < iVar5) {
      buffer[-1] = 0;
      local_24 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                           (this_ptr_00,g_WindowStack[iVar2].text_buffer);
      local_24 = g_FontCharacterWidth + local_24;
      iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,"j");
      if (local_24 < iVar5 + g_FontCharacterWidth) {
        local_24 = iVar5 + g_FontCharacterWidth;
      }
      bottom = bottom + local_24 / 2;
      top = top - local_24 / 2;
    }
  }
  if (top < 0) {
    top = 0;
  }
  if (g_WindowHeight < bottom) {
    bottom = g_WindowHeight;
  }
  if ((window_flags & 1U) == 0) {
    if (g_WindowStackCount == 1) {
      shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410(this_ptr);
    }
    g_WindowStack[iVar2].backup_width = g_WindowWidth;
    iVar5 = g_WindowStack[iVar2].backup_width * g_BitsPerPixel;
    g_WindowStack[iVar2].backup_height = g_WindowHeight;
    iVar11 = iVar5 >> 0x1f;
    uVar7 = (int)((iVar5 + iVar11 * -8) - (uint)(iVar11 << 2 < 0)) >> 3;
    iVar5 = g_WindowStack[iVar2].backup_height;
    g_WindowStack[iVar2].backup_x_offset = 0;
    g_WindowStack[iVar2].backup_y_offset = 0;
    pvVar8 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (iVar5 * uVar7,"..\\shape\\edittool.cpp",0x807);
    g_WindowStack[iVar2].screen_backup_buffer = pvVar8;
    if (pvVar8 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x809;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory to open editor window.");
    }
    local_14 = g_WindowStack[iVar2].screen_backup_buffer;
    iVar5 = 0;
    if (0 < g_WindowStack[iVar2].backup_height) {
      do {
        iVar11 = g_WindowStack[iVar2].backup_x_offset * g_BitsPerPixel;
        iVar6 = iVar11 >> 0x1f;
        puVar12 = (uint *)
                  ((int)g_ScreenBufferArray[g_WindowStack[iVar2].backup_y_offset + iVar5] +
                  ((int)((iVar11 + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3));
        puVar14 = local_14;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
          puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
        }
        for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(byte *)puVar14 = *(byte *)puVar12;
          puVar12 = (uint *)((int)puVar12 + (uint)bVar15 * -2 + 1);
          puVar14 = (uint *)((int)puVar14 + (uint)bVar15 * -2 + 1);
        }
        local_14 = (uint *)((int)local_14 + uVar7);
        iVar5 = iVar5 + 1;
      } while (iVar5 < g_WindowStack[iVar2].backup_height);
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
  pSVar10->left = left;
  g_WindowStack[iVar2].top = top;
  g_WindowStack[iVar2].right = right;
  g_WindowStack[iVar2].bottom = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401800
            (left + iVar3,top + iVar4 + local_24,(right - iVar3) + -1,(bottom - iVar4) + -1);
  return;
}
