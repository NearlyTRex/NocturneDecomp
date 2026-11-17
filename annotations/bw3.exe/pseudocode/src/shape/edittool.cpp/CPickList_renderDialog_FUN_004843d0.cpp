// Name: shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0
// Address: 004843d0
// Address Range: [[004843d0, 004849e4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004843d0(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048490a) */

void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004843d0(CPickList *this_ptr)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint color;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char local_164 [300];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80(g_CEditorToolsPtr);
  shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_00480200(g_CEditorToolsPtr,1);
  local_28 = g_INT_01c6b5a8;
  local_24 = this_ptr->scroll_top;
  local_34 = 0;
  if (0 < this_ptr->column_count) {
    do {
      local_1c = g_INT_01c6b5ac;
      local_2c = 0;
      if (0 < this_ptr->rows_per_column) {
        do {
          iVar5 = local_1c;
          iVar9 = local_28;
          if ((this_ptr->base).item_count <= local_24) break;
          if (local_24 == this_ptr->current_index) {
            iVar6 = local_28 + this_ptr->column_width + -1;
            iVar4 = local_1c + this_ptr->row_height + -1;
            color = g_INT_01c5bb48;
            if (this_ptr->confirmed_flag != 0) {
              color = g_ConfirmedSelectionColor;
            }
            local_38 = iVar6;
            local_30 = iVar4;
            if (g_INT_01c5baec == 0) {
              engine_2d_c_fillRectColor_FUN_004031c0(local_28,local_1c,iVar6,iVar4,color);
            }
            else {
              iVar7 = (color & 0xff) * 3;
              engine_mini3d_cpp_setColor_FUN_004f3520
                        ((uint)g_UCHAR_ARRAY_01c6af98[iVar7 + 2] |
                         (uint)g_UCHAR_ARRAY_01c6af98[iVar7] << 0x10 |
                         (uint)g_UCHAR_ARRAY_01c6af98[iVar7 + 1] << 8);
              engine_mini3d_cpp_fillRect_FUN_004f37e0(iVar9,iVar5,local_38,local_30);
            }
            if (this_ptr->selection_state == -1) {
              iVar9 = g_INT_01c5baec;
              if (g_INT_01c5baec != 0) {
                engine_mini3d_cpp_setColor_FUN_004f3520
                          ((uint)g_UCHAR_ARRAY_01c6af98[2] |
                           (uint)g_UCHAR_ARRAY_01c6af98[1] << 8 |
                           (uint)g_UCHAR_ARRAY_01c6af98[0] << 0x10);
                iVar9 = g_INT_01c6b5c0;
              }
              g_INT_01c6b5c0 = iVar9;
              shape_edittool_cpp_drawDashedLine_FUN_0047b5e0(local_28,local_1c,iVar6,iVar4,1);
            }
          }
          local_18 = 0;
          pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(&this_ptr->base,local_24);
          iVar5 = local_28 + this_ptr->column_padding;
          local_20 = g_EnabledTextColor;
          iVar9 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(this_ptr,local_24);
          if (iVar9 == 0) {
            local_20 = g_DisabledTextColor;
          }
          local_14 = this_ptr->tab_column_widths + local_18 + -4;
          do {
            cVar2 = *pcVar8;
            pcVar3 = pcVar8;
            pcVar10 = local_164;
            while ((pcVar8 = pcVar3, cVar2 != '\0' && (pcVar8 = pcVar3 + 1, *pcVar3 != '\t'))) {
              *pcVar10 = *pcVar3;
              pcVar10 = pcVar10 + 1;
              cVar2 = *pcVar8;
              pcVar3 = pcVar8;
            }
            *pcVar10 = '\0';
            engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
            engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
            engine_font_cpp_CBitFont_drawText_FUN_004b0a20
                      (g_CBitFont_PTR_01c5b0e0,local_164,iVar5,local_1c,local_20,-1);
            piVar1 = local_14 + 1;
            iVar5 = iVar5 + local_14[4];
            local_18 = local_18 + 1;
            local_14 = piVar1;
          } while (*pcVar8 != '\0');
          local_1c = local_1c + this_ptr->row_height;
          local_24 = local_24 + 1;
          local_2c = local_2c + 1;
        } while (local_2c < this_ptr->rows_per_column);
      }
      iVar9 = g_INT_01c6b5c0;
      if (0 < local_34) {
        iVar5 = g_PickListSeparatorColor;
        if (g_INT_01c5baec != 0) {
          iVar5 = (g_PickListSeparatorColor & 0xffU) * 3;
          engine_mini3d_cpp_setColor_FUN_004f3520
                    ((uint)g_UCHAR_ARRAY_01c6af98[iVar5 + 2] |
                     (uint)g_UCHAR_ARRAY_01c6af98[iVar5 + 1] << 8 |
                     (uint)g_UCHAR_ARRAY_01c6af98[iVar5] << 0x10);
          iVar5 = g_INT_01c6b5c0;
        }
        g_INT_01c6b5c0 = iVar5;
        iVar4 = shape_edittool_cpp_calculateGridHeight_FUN_00485ff0();
        iVar5 = g_INT_005fba1c / 0x60;
        if (this_ptr->scroll_mode == 2) {
          iVar6 = 3;
        }
        else {
          iVar6 = 1;
        }
        iVar7 = shape_edittool_cpp_calculateButtonHeight_FUN_00486580((char *)0x0);
        if (this_ptr->scroll_mode != 2) {
          iVar4 = 0;
        }
        engine_2d_c_drawLine_FUN_004011a0
                  (local_28,g_INT_01c6b5ac,local_28,g_INT_01c6b5b4 - (iVar4 + iVar7 + iVar5 * iVar6)
                  );
      }
      local_34 = local_34 + 1;
      local_28 = local_28 + this_ptr->column_width;
      g_INT_01c6b5c0 = iVar9;
    } while (local_34 < this_ptr->column_count);
  }
  if (this_ptr->scroll_mode == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).item_count = (this_ptr->base).item_count;
    (this_ptr->scrollbar).page_size = this_ptr->rows_per_column;
  }
  else {
    if (this_ptr->scroll_mode != 2) goto LAB_004845e8;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->rows_per_column;
    (this_ptr->scrollbar).item_count =
         ((this_ptr->base).item_count + this_ptr->rows_per_column + -1) / this_ptr->rows_per_column;
    (this_ptr->scrollbar).page_size = this_ptr->column_count;
  }
  shape_edittool_cpp_CEdScrollBar_render_FUN_00485640(&this_ptr->scrollbar);
LAB_004845e8:
  if (this_ptr->ok_button_text[0] != '\0') {
    shape_edittool_cpp_CEdButton_paint_FUN_00486120
              (&this_ptr->ok_button,(uint)(this_ptr->selection_state == 0));
  }
  if (this_ptr->cancel_button_text[0] != '\0') {
    shape_edittool_cpp_CEdButton_paint_FUN_00486120
              (&this_ptr->cancel_button,(uint)(this_ptr->selection_state == 1));
  }
  if (this_ptr->state_flag == 0) {
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_00480410(g_CEditorToolsPtr,0);
    return;
  }
  return;
}
