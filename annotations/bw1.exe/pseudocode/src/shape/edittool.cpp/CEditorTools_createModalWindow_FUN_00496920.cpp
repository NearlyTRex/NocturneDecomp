// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00496920
// Address: 00496920
// Address Range: [[00496920, 00496dcb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00496920(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00496920(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)

{
  int iVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  int local_28;
  uint *local_18;
  
  bVar12 = 0;
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0xa4;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_INT_01c3f538 = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  if (4 < g_INT_01c3eb5c) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0x864;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't open another window!");
  }
  iVar1 = g_INT_01c3eb5c * 0x1f8;
  iVar2 = (int)((g_INT_0061b498 + (g_INT_0061b498 >> 0x1f) * -0x80) -
               (uint)((g_INT_0061b498 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = g_INT_0061b49c / 0x60;
  g_INT_01c3eb5c = g_INT_01c3eb5c + 1;
  left = left - iVar2;
  top = top - iVar3;
  right = right + iVar2;
  bottom = bottom + iVar3;
  if (left < 0) {
    left = 0;
  }
  if (g_INT_0061b498 < right) {
    right = g_INT_0061b498;
  }
  g_CHAR_ARRAY_01c3eb60[iVar1 + 0x48] = '\0';
  local_28 = 0;
  if (text_content != (char *)0x0) {
    pcVar8 = g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x48;
    iVar4 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004c4260
                      (g_CBitFont_PTR_01c3eb50,text_content,g_CHAR_ARRAY_01c3dbb0,0x14,200,
                       (right - left) + iVar2 * -2);
    iVar10 = 0;
    if (0 < iVar4) {
      do {
        iVar10 = iVar10 + 1;
        iVar5 = _sprintf(pcVar8,"%s\n");
        pcVar8 = pcVar8 + iVar5;
      } while (iVar10 < iVar4);
    }
    this_ptr_00 = g_CBitFont_PTR_01c3eb50;
    if (0 < iVar4) {
      pcVar8[-1] = '\0';
      local_28 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50
                           (this_ptr_00,g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x48);
      local_28 = g_INT_01c3f53c + local_28;
      iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50
                        (g_CBitFont_PTR_01c3eb50,"j");
      if (local_28 < iVar4 + g_INT_01c3f53c) {
        local_28 = iVar4 + g_INT_01c3f53c;
      }
      bottom = bottom + local_28 / 2;
      top = top - local_28 / 2;
    }
  }
  if (top < 0) {
    top = 0;
  }
  if (g_INT_0061b49c < bottom) {
    bottom = g_INT_0061b49c;
  }
  if (g_INT_01c3f544 != 0) {
    window_flags = window_flags | 1;
  }
  pcVar8 = g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1d8;
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  pcVar8[2] = '\0';
  pcVar8[3] = '\0';
  if ((window_flags & 1) == 0) {
    if (g_INT_01c3eb5c == 1) {
      shape_edittool_cpp_CEditorTools_backupScreen_FUN_00494030(this_ptr);
    }
    if (g_ARRAY_PTR_01c4354c[0] != (byte *)0x0) {
      *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1e4) = g_INT_0061b498;
      iVar4 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1e4) * g_INT_0061b4a0;
      *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1e8) = g_INT_0061b49c;
      iVar10 = iVar4 >> 0x1f;
      uVar6 = (int)((iVar4 + iVar10 * -8) - (uint)(iVar10 << 2 < 0)) >> 3;
      iVar4 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1e8);
      pcVar8 = g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1dc;
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1e0;
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      local_18 = (uint *)malloc(iVar4 * uVar6);
      *(uint **)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1d8) = local_18;
      if ((local_18 != (uint *)0x0) &&
         (iVar4 = 0, 0 < *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1e8))) {
        do {
          iVar10 = *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1dc) * g_INT_0061b4a0 >> 0x1f;
          puVar9 = (uint *)
                   (g_ARRAY_PTR_01c4354c[*(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1e0) + iVar4] +
                   ((int)((*(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1dc) * g_INT_0061b4a0 +
                          iVar10 * -8) - (uint)(iVar10 << 2 < 0)) >> 3));
          puVar11 = local_18;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(byte *)puVar11 = *(byte *)puVar9;
            puVar9 = (uint *)((int)puVar9 + (uint)bVar12 * -2 + 1);
            puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
          }
          local_18 = (uint *)((int)local_18 + uVar6);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1e8));
      }
    }
  }
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x10) = g_INT_01c4f008;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x14) = g_INT_01c4f00c;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x18) = g_INT_01c4f010;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x1c) = g_INT_01c4f014;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x30) = g_INT_01c4eff8;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x34) = g_INT_01c4effc;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x38) = g_INT_01c4f000;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x3c) = g_INT_01c4f004;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x40) = g_INT_01c4f018;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x44) = g_INT_01c4f01c;
  engine_mini3d_cpp_getRenderViewport_FUN_00511980
            ((float *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x20),
             (float *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x24),
             (float *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x28),
             (float *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0x2c));
  engine_mini3d_cpp_setRenderViewport_FUN_00511850
            ((float)left,(float)top,(float)right,(float)bottom);
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1) = left;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 4) = top;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 8) = right;
  *(int *)(g_CHAR_ARRAY_01c3eb60 + iVar1 + 0xc) = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401810
            (left + iVar2,top + iVar3 + local_28,(right - iVar2) + -1,(bottom - iVar3) + -1);
  return;
}
