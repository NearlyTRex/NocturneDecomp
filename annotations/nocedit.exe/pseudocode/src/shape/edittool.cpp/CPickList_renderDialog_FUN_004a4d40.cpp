// Name: shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
// Address: 004a4d40
// Address Range: [[004a4d40, 004a5230]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40(CPickList * this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(CPickList *this_ptr)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int unaff_retaddr;
  CPickList *in_stack_00000008;
  int *in_stack_0000000c;
  char acStack_150 [292];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
  shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
  local_20 = g_ClipLeft;
  local_1c = in_stack_0000000c[0x60];
  local_28 = 0;
  if (0 < in_stack_0000000c[100]) {
    do {
      local_14 = g_ClipTop;
      local_24 = 0;
      if (0 < in_stack_0000000c[0x62]) {
        do {
          iVar8 = local_14;
          if (*in_stack_0000000c <= local_1c) break;
          if (local_1c == in_stack_0000000c[0x5f]) {
            iVar3 = local_20 + in_stack_0000000c[99] + -1;
            iVar5 = local_14 + in_stack_0000000c[0x5d] + -1;
            iVar4 = g_SelectionHighlightColor;
            if (in_stack_0000000c[0x5c] != 0) {
              iVar4 = g_HighlightColor1;
            }
            engine_2d_c_fillRectColor_FUN_00403170(local_20,local_14,iVar3,iVar5,iVar4);
            if (*(int *)(unaff_retaddr + 0x3a4) == -1) {
              g_ActiveRenderColor = 0;
              shape_edittool_cpp_drawDashedLine_FUN_0049d290(local_2c,iVar8,iVar3,iVar5,1);
            }
          }
          iVar8 = local_24;
          local_18 = 0;
          pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             (&this_ptr->base_strlist,local_24);
          iVar4 = local_24 + in_stack_00000008->field9_0x178;
          local_1c = g_EnabledTextColor;
          iVar8 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0(in_stack_00000008,iVar8);
          if (iVar8 == 0) {
            local_18 = g_BackgroundColor1;
          }
          do {
            pcVar9 = &stack0xfffffeac;
            cVar1 = *pcVar7;
            pcVar2 = pcVar7;
            while ((pcVar7 = pcVar2, cVar1 != '\0' && (pcVar7 = pcVar2 + 1, *pcVar2 != '\t'))) {
              *pcVar9 = *pcVar2;
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar7;
              pcVar2 = pcVar7;
            }
            *pcVar9 = '\0';
            engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
            engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                      (g_EditorFont,acStack_150,unaff_ESI,iVar4,local_14,-1);
            iVar4 = iVar4 + 1;
          } while (*pcVar7 != '\0');
          local_14 = local_14 + in_stack_0000000c[0x5d];
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
        } while (local_24 < in_stack_0000000c[0x62]);
      }
      iVar8 = g_ActiveRenderColor;
      if (0 < local_28) {
        g_ActiveRenderColor = g_HighlightColor2;
        iVar3 = shape_edittool_cpp_calculateGridHeight_FUN_004a64b0();
        iVar4 = g_WindowHeight / 0x60;
        if (this_ptr->dialog_result == 2) {
          iVar5 = 3;
        }
        else {
          iVar5 = 1;
        }
        iVar6 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        if (in_stack_00000008->dialog_result != 2) {
          iVar3 = 0;
        }
        engine_2d_c_drawLine_FUN_004011b0
                  (local_24,g_ClipTop,local_24,g_ClipBottom - (iVar3 + iVar4 * iVar5 + iVar6));
      }
      local_28 = local_28 + 1;
      local_20 = local_20 + in_stack_0000000c[99];
      g_ActiveRenderColor = iVar8;
    } while (local_28 < in_stack_0000000c[100]);
  }
  if (in_stack_0000000c[0x76] == 1) {
    in_stack_0000000c[0x69] = in_stack_0000000c[0x60];
    in_stack_0000000c[0x6a] = *in_stack_0000000c;
    in_stack_0000000c[0x6b] = in_stack_0000000c[0x62];
  }
  else {
    if (in_stack_0000000c[0x76] != 2) goto LAB_004a4f19;
    in_stack_0000000c[0x69] = in_stack_0000000c[0x60] / in_stack_0000000c[0x62];
    in_stack_0000000c[0x6a] =
         (*in_stack_0000000c + in_stack_0000000c[0x62] + -1) / in_stack_0000000c[0x62];
    in_stack_0000000c[0x6b] = in_stack_0000000c[100];
  }
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)(in_stack_0000000c + 0x69));
LAB_004a4f19:
  if ((char)in_stack_0000000c[0x11] != '\0') {
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0
              ((CEdButton *)(in_stack_0000000c + 0x77),(uint)(in_stack_0000000c[0xe9] == 0));
  }
  if ((char)in_stack_0000000c[0x2a] != '\0') {
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0
              ((CEdButton *)(in_stack_0000000c + 0xb0),(uint)(in_stack_0000000c[0xe9] == 1));
  }
  if (in_stack_0000000c[0x10] != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
  return;
}
