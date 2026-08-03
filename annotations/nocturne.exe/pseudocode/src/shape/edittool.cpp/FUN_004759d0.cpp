// Name: shape_edittool.cpp_FUN_004759d0
// Address: 004759d0
// Address Range: [[004759d0, 00475da1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_004759d0(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_FUN_004759d0(CPickList *this_ptr)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int x;
  char local_15c [300];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  shape_edittool_cpp_FUN_004722b0(g_CEditorTools_PTR_005b6d50);
  local_28 = _DAT_01c00c58;
  local_24 = this_ptr->scroll_top;
  local_30 = 0;
  if (0 < this_ptr->column_count) {
    do {
      local_1c = _DAT_01c00c5c;
      local_2c = 0;
      if (0 < this_ptr->vertical_page_size) {
        do {
          if ((this_ptr->base).item_count <= local_24) break;
          if (local_24 == this_ptr->current_index) {
            iVar3 = _DAT_01bcde10;
            if (this_ptr->confirmed_flag != 0) {
              iVar3 = _DAT_01bcde14;
            }
            engine_2d_c_fillRectColor_FUN_00403e60
                      (local_28,local_1c,local_28 + this_ptr->total_content_width + -1,
                       local_1c + this_ptr->character_width + -1,iVar3);
          }
          iVar3 = local_24;
          local_18 = 0;
          local_14 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&this_ptr->base,local_24);
          x = local_28 + this_ptr->column_padding;
          local_20 = _DAT_01bcde08;
          iVar3 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(this_ptr,iVar3);
          if (iVar3 == 0) {
            local_20 = _DAT_01bcde0c;
          }
          pcVar5 = this_ptr->hotkeys + local_18 * 4 + -0x14;
          do {
            cVar1 = *local_14;
            pcVar4 = local_15c;
            while ((pcVar6 = local_14, cVar1 != '\0' && (pcVar6 = local_14 + 1, *local_14 != '\t')))
            {
              *pcVar4 = *local_14;
              pcVar4 = pcVar4 + 1;
              cVar1 = *pcVar6;
              local_14 = pcVar6;
            }
            *pcVar4 = '\0';
            local_14 = pcVar6;
            engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
            engine_font_cpp_CBitFont_drawText_FUN_00490980
                      (_DAT_01bcd070,local_15c,x,local_1c,local_20,-1);
            local_18 = local_18 + 1;
            x = x + *(int *)(pcVar5 + 0x7c);
            pcVar5 = pcVar5 + 4;
          } while (*pcVar6 != '\0');
          local_24 = local_24 + 1;
          local_1c = local_1c + this_ptr->character_width;
          local_2c = local_2c + 1;
        } while (local_2c < this_ptr->vertical_page_size);
      }
      uVar2 = _DAT_01c00c70;
      if (0 < local_30) {
        _DAT_01c00c70 = _DAT_01bcde18;
        engine_2d_c_drawLine_FUN_004015a0(local_28,_DAT_01c00c5c,local_28,_DAT_01c00c64);
      }
      local_30 = local_30 + 1;
      local_28 = local_28 + this_ptr->total_content_width;
      _DAT_01c00c70 = uVar2;
    } while (local_30 < this_ptr->column_count);
  }
  if (this_ptr->dialog_result == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).current_value = (this_ptr->base).item_count;
    (this_ptr->scrollbar).max_value = this_ptr->vertical_page_size;
  }
  else {
    if (this_ptr->dialog_result != 2) goto LAB_00475b35;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->vertical_page_size;
    (this_ptr->scrollbar).current_value =
         ((this_ptr->base).item_count + this_ptr->vertical_page_size + -1) /
         this_ptr->vertical_page_size;
    (this_ptr->scrollbar).max_value = this_ptr->column_count;
  }
  shape_edittool_cpp_CEdScrollBar_render_FUN_00476580(&this_ptr->scrollbar);
LAB_00475b35:
  if (this_ptr->state_flag != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(g_CEditorTools_PTR_005b6d50,1);
  return;
}
