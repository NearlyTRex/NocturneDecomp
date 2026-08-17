// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50
// Address: 00471b50
// Address Range: [[00471b50, 004720b1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

{
  int *piVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  char *buffer;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  int in_stack_ffffed18;
  int local_28;
  
  bVar15 = 0;
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (4 < _DAT_01bcd07c) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1652;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Can't open another window!");
  }
  iVar2 = _DAT_01bcd07c * 0x1d8;
  iVar3 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar4 = g_WindowHeight / 0x60;
  _DAT_01bcd07c = _DAT_01bcd07c + 1;
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
  local_28 = 0;
  *(byte *)(iVar2 + 0x1bcd0b8) = 0;
  if (text_content != (char *)0x0) {
    iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                      (_DAT_01bcd070,text_content,(char *)0x1bcc0d0,0x14,200,
                       (right - left) + iVar3 * -2);
    iVar12 = 0;
    buffer = (char *)(iVar2 + 0x1bcd0b8);
    if (0 < iVar5) {
      iVar10 = 0x1bcc0d0;
      do {
        iVar12 = iVar12 + 1;
        iVar6 = _sprintf(buffer,"%s\n",iVar10);
        buffer = buffer + iVar6;
        iVar10 = iVar10 + 200;
      } while (iVar12 < iVar5);
    }
    this_ptr_00 = _DAT_01bcd070;
    if (0 < iVar5) {
      buffer[-1] = '\0';
      local_28 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                           (this_ptr_00,(char *)(iVar2 + 0x1bcd0b8));
      local_28 = _DAT_01bcd9bc + local_28;
      bottom = bottom + local_28 / 2;
      top = top - local_28 / 2;
    }
  }
  if (top < 0) {
    top = 0;
  }
  if (g_WindowHeight < bottom) {
    bottom = g_WindowHeight;
  }
  if ((window_flags & 1) == 0) {
    if (g_UseExternalRenderer != 0) {
      if (0 < g_WindowHeight) {
        iVar5 = 0;
        do {
          iVar12 = iVar5 + 4;
          *(uint *)(&stack0xffffed18 + iVar5) =
               *(uint *)((int)g_ScreenBufferArray + iVar5);
          iVar5 = iVar12;
        } while (iVar12 < g_WindowHeight * 4);
      }
      engine_special_cpp_lockFrame_FUN_005322e0();
      iVar5 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
      uVar7 = (int)((g_WindowWidth * g_BitsPerPixel + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
      iVar5 = 0;
      if (0 < g_WindowHeight) {
        iVar12 = 0;
        do {
          puVar11 = *(uint **)((int)g_ScreenBufferArray + iVar12);
          puVar13 = *(uint **)(&stack0xffffed18 + iVar12);
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
            puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
          }
          for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(byte *)puVar13 = *(byte *)puVar11;
            puVar11 = (uint *)((int)puVar11 + (uint)bVar15 * -2 + 1);
            puVar13 = (uint *)((int)puVar13 + (uint)bVar15 * -2 + 1);
          }
          iVar5 = iVar5 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar5 < g_WindowHeight);
      }
      engine_special_cpp_unlockFrame_FUN_00532320(in_stack_ffffed18);
    }
    iVar5 = (right - left) * g_BitsPerPixel;
    iVar12 = iVar5 >> 0x1f;
    uVar7 = (int)((iVar5 + iVar12 * -8) - (uint)(iVar12 << 2 < 0)) >> 3;
    pvVar8 = malloc((bottom - top) * uVar7);
    *(void **)(iVar2 + 0x1bcd248) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 1732;
      core_main_c_displayErrorAndQuit_FUN_004c8440("out of memory to open editor window.");
    }
    puVar11 = *(uint **)(iVar2 + 0x1bcd248);
    if (top < bottom) {
      iVar5 = top * 4;
      do {
        iVar12 = left * g_BitsPerPixel >> 0x1f;
        piVar1 = (int *)((int)g_ScreenBufferArray + iVar5);
        iVar5 = iVar5 + 4;
        puVar13 = (uint *)
                  (*piVar1 +
                  ((int)((left * g_BitsPerPixel + iVar12 * -8) - (uint)(iVar12 << 2 < 0)) >> 3));
        puVar14 = puVar11;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
          puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
        }
        for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(byte *)puVar14 = *(byte *)puVar13;
          puVar13 = (uint *)((int)puVar13 + (uint)bVar15 * -2 + 1);
          puVar14 = (uint *)((int)puVar14 + (uint)bVar15 * -2 + 1);
        }
        puVar11 = (uint *)((int)puVar11 + uVar7);
      } while (iVar5 < bottom * 4);
    }
  }
  else {
    *(uint *)(iVar2 + 0x1bcd248) = 0;
  }
  *(int *)(iVar2 + 0x1bcd090) = g_ClipLeft;
  *(int *)(iVar2 + 0x1bcd094) = g_ClipTop;
  *(int *)(iVar2 + 0x1bcd098) = g_ClipRight;
  *(int *)(iVar2 + 0x1bcd09c) = g_ClipBottom;
  *(int *)(iVar2 + 0x1bcd0a0) = g_Projection.half_width_fixed;
  *(int *)(iVar2 + 0x1bcd0a4) = g_Projection.neg_half_height_fixed;
  *(int *)(iVar2 + 0x1bcd0a8) = g_Projection.center_x_fixed;
  *(int *)(iVar2 + 0x1bcd0ac) = g_Projection.center_y_fixed;
  *(int *)(iVar2 + 0x1bcd0b0) = g_ViewportWidth;
  *(int *)(iVar2 + 0x1bcd0b4) = g_ViewportHeight;
  *(int *)(iVar2 + 0x1bcd080) = left;
  *(int *)(iVar2 + 0x1bcd084) = top;
  *(int *)(iVar2 + 0x1bcd088) = right;
  *(int *)(iVar2 + 0x1bcd08c) = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401e30
            (left + iVar3,top + iVar4 + local_28,(right - iVar3) + -1,(bottom - iVar4) + -1);
  return;
}
