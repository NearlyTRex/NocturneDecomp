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
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  int local_28;
  uint *local_18;
  
  bVar12 = 0;
  if (g_CBitFont_PTR_01c25590 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_INT_01c25f78 = g_CBitFont_PTR_01c25590->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_CBitFont_PTR_01c25590,0x6a)
  ;
  if (4 < g_INT_01c2559c) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0x809;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't open another window!");
  }
  iVar1 = g_INT_01c2559c * 0x1f8;
  iVar2 = (int)((g_INT_006141b8 + (g_INT_006141b8 >> 0x1f) * -0x80) -
               (uint)((g_INT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = g_INT_006141bc / 0x60;
  g_INT_01c2559c = g_INT_01c2559c + 1;
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
  g_CHAR_ARRAY_01c255a0[iVar1 + 0x48] = '\0';
  local_28 = 0;
  if (text_content != (char *)0x0) {
    pcVar8 = g_CHAR_ARRAY_01c255a0 + iVar1 + 0x48;
    iVar4 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004ab2b0
                      (g_CBitFont_PTR_01c25590,text_content,g_CHAR_ARRAY_01c245f0,0x14,200,
                       (right - left) + iVar2 * -2);
    iVar10 = 0;
    if (0 < iVar4) {
      do {
        iVar10 = iVar10 + 1;
        iVar5 = _sprintf(pcVar8,"%s\n");
        pcVar8 = pcVar8 + iVar5;
      } while (iVar10 < iVar4);
    }
    this_ptr_00 = g_CBitFont_PTR_01c25590;
    if (0 < iVar4) {
      pcVar8[-1] = '\0';
      local_28 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0
                           (this_ptr_00,g_CHAR_ARRAY_01c255a0 + iVar1 + 0x48);
      local_28 = g_INT_01c25f7c + local_28;
      iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0
                        (g_CBitFont_PTR_01c25590,"j");
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
  pcVar8 = g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1d8;
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  pcVar8[2] = '\0';
  pcVar8[3] = '\0';
  if ((window_flags & 1) == 0) {
    if (g_INT_01c2559c == 1) {
      shape_edittool_cpp_CEditorTools_backupScreen_FUN_0047baf0(this_ptr);
    }
    if (g_ARRAY_PTR_01c2a38c[0] != (byte *)0x0) {
      *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e4) = g_INT_006141b8;
      iVar4 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e4) * g_INT_006141c0;
      *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e8) = g_INT_006141bc;
      iVar10 = iVar4 >> 0x1f;
      uVar6 = (int)((iVar4 + iVar10 * -8) - (uint)(iVar10 << 2 < 0)) >> 3;
      iVar4 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e8);
      pcVar8 = g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1dc;
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e0;
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      local_18 = (uint *)malloc(iVar4 * uVar6);
      *(uint **)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1d8) = local_18;
      if ((local_18 != (uint *)0x0) &&
         (iVar4 = 0, 0 < *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e8))) {
        do {
          iVar10 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1dc) * g_INT_006141c0 >> 0x1f;
          puVar9 = (uint *)
                   (g_ARRAY_PTR_01c2a38c[*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e0) + iVar4] +
                   ((int)((*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1dc) * g_INT_006141c0 +
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
        } while (iVar4 < *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e8));
      }
    }
  }
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x10) = g_INT_01c35e48;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x14) = g_INT_01c35e4c;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x18) = g_INT_01c35e50;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1c) = g_INT_01c35e54;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x30) = g_INT_01c35e38;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x34) = g_INT_01c35e3c;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x38) = g_INT_01c35e40;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x3c) = g_INT_01c35e44;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x40) = g_INT_01c35e58;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x44) = g_INT_01c35e5c;
  engine_mini3d_cpp_getRenderViewport_FUN_004f2ba0
            ((float *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x20),
             (float *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x24),
             (float *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x28),
             (float *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x2c));
  engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0
            ((float)left,(float)top,(float)right,(float)bottom);
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1) = left;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4) = top;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) = right;
  *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) = bottom;
  engine_2d_c_setupViewportAndClipping_FUN_00401810
            (left + iVar2,top + iVar3 + local_28,(right - iVar2) + -1,(bottom - iVar3) + -1);
  return;
}
