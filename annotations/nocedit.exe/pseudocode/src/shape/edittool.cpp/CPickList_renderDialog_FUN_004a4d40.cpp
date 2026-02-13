// Name: shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
// Address: 004a4d40
// Address Range: [[004a4d40, 004a5230]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(CPickList *this_ptr)

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
  char *pcVar10;
  char local_15c [300];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
  shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
  local_28 = g_ClipLeft;
  local_24 = this_ptr->scroll_top;
  local_30 = 0;
  if (0 < this_ptr->column_count) {
    do {
      local_1c = g_ClipTop;
      local_2c = 0;
      if (0 < this_ptr->vertical_page_size) {
        do {
          iVar8 = local_1c;
          if ((this_ptr->base).item_count <= local_24) break;
          if (local_24 == this_ptr->current_index) {
            iVar3 = local_28 + this_ptr->total_content_width + -1;
            iVar5 = local_1c + this_ptr->character_width + -1;
            iVar4 = g_SelectionHighlightColor;
            if (this_ptr->confirmed_flag != 0) {
              iVar4 = g_HighlightColor1;
            }
            engine_2d_c_fillRectColor_FUN_00403170(local_28,local_1c,iVar3,iVar5,iVar4);
            if (this_ptr->selection_state == -1) {
              g_ActiveRenderColor = 0;
              shape_edittool_cpp_drawDashedLine_FUN_0049d290(local_28,iVar8,iVar3,iVar5,1);
            }
          }
          iVar8 = local_24;
          local_18 = 0;
          pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&this_ptr->base,local_24);
          local_14 = local_28 + this_ptr->unk2;
          local_20 = g_EnabledTextColor;
          iVar8 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0(this_ptr,iVar8);
          if (iVar8 == 0) {
            local_20 = g_BackgroundColor1;
          }
          pcVar10 = this_ptr->unk3 + local_18 * 4 + -0x14;
          do {
            cVar1 = *pcVar7;
            pcVar2 = pcVar7;
            pcVar9 = local_15c;
            while ((pcVar7 = pcVar2, cVar1 != '\0' && (pcVar7 = pcVar2 + 1, *pcVar2 != '\t'))) {
              *pcVar9 = *pcVar2;
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar7;
              pcVar2 = pcVar7;
            }
            *pcVar9 = '\0';
            engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
            engine_font_cpp_CBitFont_drawText_FUN_004cda80
                      (g_EditorFont,local_15c,local_14,local_1c,local_20,-1);
            local_18 = local_18 + 1;
            local_14 = local_14 + *(int *)(pcVar10 + 0x10);
            pcVar10 = pcVar10 + 4;
          } while (*pcVar7 != '\0');
          local_1c = local_1c + this_ptr->character_width;
          local_24 = local_24 + 1;
          local_2c = local_2c + 1;
        } while (local_2c < this_ptr->vertical_page_size);
      }
      iVar8 = g_ActiveRenderColor;
      if (0 < local_30) {
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
        if (this_ptr->dialog_result != 2) {
          iVar3 = 0;
        }
        engine_2d_c_drawLine_FUN_004011b0
                  (local_28,g_ClipTop,local_28,g_ClipBottom - (iVar3 + iVar4 * iVar5 + iVar6));
      }
      local_30 = local_30 + 1;
      local_28 = local_28 + this_ptr->total_content_width;
      g_ActiveRenderColor = iVar8;
    } while (local_30 < this_ptr->column_count);
  }
  if (this_ptr->dialog_result == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).current_value = (this_ptr->base).item_count;
    (this_ptr->scrollbar).max_value = this_ptr->vertical_page_size;
  }
  else {
    if (this_ptr->dialog_result != 2) goto LAB_004a4f19;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->vertical_page_size;
    (this_ptr->scrollbar).current_value =
         ((this_ptr->base).item_count + this_ptr->vertical_page_size + -1) /
         this_ptr->vertical_page_size;
    (this_ptr->scrollbar).max_value = this_ptr->column_count;
  }
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&this_ptr->scrollbar);
LAB_004a4f19:
  if (this_ptr->ok_button_text[0] != '\0') {
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0
              (&this_ptr->ok_button,(uint)(this_ptr->selection_state == 0));
  }
  if (this_ptr->cancel_button_text[0] != '\0') {
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0
              (&this_ptr->cancel_button,(uint)(this_ptr->selection_state == 1));
  }
  if (this_ptr->state_flag != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
  return;
}
