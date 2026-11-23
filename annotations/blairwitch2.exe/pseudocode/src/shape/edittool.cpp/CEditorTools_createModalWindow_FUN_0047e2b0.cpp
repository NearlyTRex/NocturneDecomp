// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047e2b0
// Address: 0047e2b0
// Address Range: [[0047e2b0, 0047e75b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_0047e2b0(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_0047e2b0(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

{
  int iVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *buffer;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  int local_28;
  uint *local_18;
  
  bVar11 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 160;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_EditorFont->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_EditorFont,0x6a);
  if (4 < g_WindowStackCount) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2057;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't open another window!");
  }
  iVar1 = g_WindowStackCount * 0x1f8;
  iVar2 = (int)((g_INT_006141b8 + (g_INT_006141b8 >> 0x1f) * -0x80) -
               (uint)((g_INT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = g_INT_006141bc / 0x60;
  g_WindowStackCount = g_WindowStackCount + 1;
  left = left - iVar2;
  top = top - iVar3;
  right = right + iVar2;
  bottom = bottom + iVar3;
  if (left < 0) {
    left = 0;
  }
  if (g_INT_006141b8 < right) {
    right = g_INT_006141b8;
  }
  *(byte *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x48) = 0;
  local_28 = 0;
  if (text_content != (char *)0x0) {
    buffer = (char *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x48);
    iVar4 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004ab2b0
                      (g_EditorFont,text_content,g_TextWrapBuffer,0x14,200,
                       (right - left) + iVar2 * -2);
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        iVar9 = iVar9 + 1;
        iVar5 = _sprintf(buffer,"%s\n");
        buffer = buffer + iVar5;
      } while (iVar9 < iVar4);
    }
    this_ptr_00 = g_EditorFont;
    if (0 < iVar4) {
      buffer[-1] = '\0';
      local_28 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0
                           (this_ptr_00,(char *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x48));
      local_28 = g_INT_01c25f7c + local_28;
      iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(g_EditorFont,"j");
      if (local_28 < iVar4 + g_INT_01c25f7c) {
        local_28 = iVar4 + g_INT_01c25f7c;
      }
      bottom = bottom + local_28 / 2;
      top = top - local_28 / 2;
    }
  }
  if (top < 0) {
    top = 0;
  }
  if (g_INT_006141bc < bottom) {
    bottom = g_INT_006141bc;
  }
  if (g_INT_01c25f84 != 0) {
    window_flags = window_flags | 1;
  }
  *(uint *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1d8) = 0;
  if ((window_flags & 1) == 0) {
    if (g_WindowStackCount == 1) {
      shape_edittool_cpp_CEditorTools_backupScreen_FUN_0047baf0(this_ptr);
    }
    if (g_ScreenBufferArray[0] != (byte *)0x0) {
      *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1e4) = g_INT_006141b8;
      iVar4 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1e4) * g_INT_006141c0;
      *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1e8) = g_INT_006141bc;
      iVar9 = iVar4 >> 0x1f;
      uVar6 = (int)((iVar4 + iVar9 * -8) - (uint)(iVar9 << 2 < 0)) >> 3;
      *(uint *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1dc) = 0;
      *(uint *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1e0) = 0;
      local_18 = (uint *)malloc
                           (*(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1e8) * uVar6);
      *(uint **)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1d8) = local_18;
      if ((local_18 != (uint *)0x0) &&
         (iVar4 = 0, 0 < *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1e8))) {
        do {
          iVar9 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1dc) * g_INT_006141c0;
          iVar5 = iVar9 >> 0x1f;
          puVar8 = (uint *)
                   (g_ScreenBufferArray
                    [*(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1e0) + iVar4] +
                   ((int)((iVar9 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3));
          puVar10 = local_18;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(byte *)puVar10 = *(byte *)puVar8;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar11 * -2 + 1);
            puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
          }
          local_18 = (uint *)((int)local_18 + uVar6);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1e8));
      }
    }
  }
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x10) = g_INT_01c35e48;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x14) = g_INT_01c35e4c;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x18) = g_ClipRight;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1c) = g_INT_01c35e54;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x30) = g_INT_01c35e38;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x34) = g_INT_01c35e3c;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x38) = g_INT_01c35e40;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x3c) = g_INT_01c35e44;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x40) = g_ViewportWidth;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x44) = g_ViewportHeight;
  engine_mini3d_cpp_getRenderViewport_FUN_004f2ba0
            ((float *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x20),
             (float *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x24),
             (float *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x28),
             (float *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x2c));
  engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0
            ((float)left,(float)top,(float)right,(float)bottom);
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1) = left;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 4) = top;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 8) = right;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0xc) = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401810
            (left + iVar2,top + iVar3 + local_28,(right - iVar2) + -1,(bottom - iVar3) + -1);
  return;
}
