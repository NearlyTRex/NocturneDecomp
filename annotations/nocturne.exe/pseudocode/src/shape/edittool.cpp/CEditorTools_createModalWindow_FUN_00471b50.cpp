// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50
// Address: 00471b50
// Address Range: [[00471b50, 004720b1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

#include "nocturne.h"

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
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  byte bVar16;
  int in_stack_ffffed18;
  int local_28;
  
  bVar16 = 0;
  if (g_CBitFont_PTR_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01bcd070->max_char_width;
  g_INT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_01bcd070,0x6a)
  ;
  if (4 < g_INT_01bcd07c) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1652;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Can't open another window!");
  }
  iVar2 = g_INT_01bcd07c * 0x1d8;
  iVar3 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar4 = g_WindowHeight / 0x60;
  g_INT_01bcd07c = g_INT_01bcd07c + 1;
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
  g_CHAR_ARRAY_01bcd080[iVar2 + 0x38] = '\0';
  if (text_content != (char *)0x0) {
    iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                      (g_CBitFont_PTR_01bcd070,text_content,&g_CHAR_01bcc0d0,0x14,200,
                       (right - left) + iVar3 * -2);
    iVar13 = 0;
    pcVar10 = g_CHAR_ARRAY_01bcd080 + iVar2 + 0x38;
    if (0 < iVar5) {
      pcVar11 = &g_CHAR_01bcc0d0;
      do {
        iVar13 = iVar13 + 1;
        iVar6 = _sprintf(pcVar10,"%s\n",pcVar11);
        pcVar10 = pcVar10 + iVar6;
        pcVar11 = pcVar11 + 200;
      } while (iVar13 < iVar5);
    }
    this_ptr_00 = g_CBitFont_PTR_01bcd070;
    if (0 < iVar5) {
      pcVar10[-1] = '\0';
      local_28 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                           (this_ptr_00,g_CHAR_ARRAY_01bcd080 + iVar2 + 0x38);
      local_28 = g_INT_01bcd9bc + local_28;
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
          iVar13 = iVar5 + 4;
          *(uint *)(&stack0xffffed18 + iVar5) =
               *(uint *)((int)g_ScreenBufferArray + iVar5);
          iVar5 = iVar13;
        } while (iVar13 < g_WindowHeight * 4);
      }
      engine_special_cpp_lockFrame_FUN_005322e0();
      iVar5 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
      uVar7 = (int)((g_WindowWidth * g_BitsPerPixel + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
      iVar5 = 0;
      if (0 < g_WindowHeight) {
        iVar13 = 0;
        do {
          puVar12 = *(uint **)((int)g_ScreenBufferArray + iVar13);
          puVar14 = *(uint **)(&stack0xffffed18 + iVar13);
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + (uint)bVar16 * -2 + 1;
            puVar14 = puVar14 + (uint)bVar16 * -2 + 1;
          }
          for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(byte *)puVar14 = *(byte *)puVar12;
            puVar12 = (uint *)((int)puVar12 + (uint)bVar16 * -2 + 1);
            puVar14 = (uint *)((int)puVar14 + (uint)bVar16 * -2 + 1);
          }
          iVar5 = iVar5 + 1;
          iVar13 = iVar13 + 4;
        } while (iVar5 < g_WindowHeight);
      }
      engine_special_cpp_unlockFrame_FUN_00532320(in_stack_ffffed18);
    }
    iVar5 = (right - left) * g_BitsPerPixel;
    iVar13 = iVar5 >> 0x1f;
    uVar7 = (int)((iVar5 + iVar13 * -8) - (uint)(iVar13 << 2 < 0)) >> 3;
    pvVar8 = malloc((bottom - top) * uVar7);
    *(void **)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x1c8) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 1732;
      core_main_c_displayErrorAndQuit_FUN_004c8440("out of memory to open editor window.");
    }
    puVar12 = *(uint **)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x1c8);
    if (top < bottom) {
      iVar5 = top * 4;
      do {
        iVar13 = left * g_BitsPerPixel >> 0x1f;
        piVar1 = (int *)((int)g_ScreenBufferArray + iVar5);
        iVar5 = iVar5 + 4;
        puVar14 = (uint *)
                  (*piVar1 +
                  ((int)((left * g_BitsPerPixel + iVar13 * -8) - (uint)(iVar13 << 2 < 0)) >> 3));
        puVar15 = puVar12;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + (uint)bVar16 * -2 + 1;
          puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
        }
        for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(byte *)puVar15 = *(byte *)puVar14;
          puVar14 = (uint *)((int)puVar14 + (uint)bVar16 * -2 + 1);
          puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
        }
        puVar12 = (uint *)((int)puVar12 + uVar7);
      } while (iVar5 < bottom * 4);
    }
  }
  else {
    pcVar10 = g_CHAR_ARRAY_01bcd080 + iVar2 + 0x1c8;
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
  }
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x10) = g_ClipLeft;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x14) = g_ClipTop;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x18) = g_ClipRight;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x1c) = g_ClipBottom;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x20) = g_Projection.half_width_fixed;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x24) = g_Projection.neg_half_height_fixed;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x28) = g_Projection.center_x_fixed;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x2c) = g_Projection.center_y_fixed;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x30) = g_ViewportWidth;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x34) = g_ViewportHeight;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2) = left;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 4) = top;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 8) = right;
  *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0xc) = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401e30
            (left + iVar3,top + iVar4 + local_28,(right - iVar3) + -1,(bottom - iVar4) + -1);
  return;
}
