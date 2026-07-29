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
  int *piVar5;
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
  
  shape_edittool_cpp_FUN_004722b0(0x01BCD074);
  local_28 = _DAT_01c00c58;
  local_24 = *(int *)(this_ptr->search_text_buffer + 0x10);
  local_30 = 0;
  if (0 < *(int *)(this_ptr->search_text_buffer + 0x20)) {
    do {
      local_1c = _DAT_01c00c5c;
      local_2c = 0;
      if (0 < *(int *)(this_ptr->search_text_buffer + 0x18)) {
        do {
          if ((this_ptr->base).item_count <= local_24) break;
          if (local_24 == *(int *)(this_ptr->search_text_buffer + 0xc)) {
            iVar3 = _DAT_01bcde10;
            if (*(int *)this_ptr->search_text_buffer != 0) {
              iVar3 = _DAT_01bcde14;
            }
            engine_2d_c_fillRectColor_FUN_00403e60
                      (local_28,local_1c,
                       local_28 + *(int *)(this_ptr->search_text_buffer + 0x1c) + -1,
                       local_1c + *(int *)(this_ptr->search_text_buffer + 4) + -1,iVar3);
          }
          iVar3 = local_24;
          local_18 = 0;
          local_14 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&this_ptr->base,local_24);
          x = local_28 + *(int *)(this_ptr->search_text_buffer + 8);
          local_20 = _DAT_01bcde08;
          iVar3 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(this_ptr,iVar3);
          if (iVar3 == 0) {
            local_20 = _DAT_01bcde0c;
          }
          piVar5 = this_ptr->tab_column_widths + local_18 + -4;
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
            x = x + piVar5[0x1f];
            piVar5 = piVar5 + 1;
          } while (*pcVar6 != '\0');
          local_24 = local_24 + 1;
          local_1c = local_1c + *(int *)(this_ptr->search_text_buffer + 4);
          local_2c = local_2c + 1;
        } while (local_2c < *(int *)(this_ptr->search_text_buffer + 0x18));
      }
      uVar2 = _DAT_01c00c70;
      if (0 < local_30) {
        _DAT_01c00c70 = _DAT_01bcde18;
        engine_2d_c_drawLine_FUN_004015a0(local_28,_DAT_01c00c5c,local_28,_DAT_01c00c64);
      }
      local_30 = local_30 + 1;
      local_28 = local_28 + *(int *)(this_ptr->search_text_buffer + 0x1c);
      _DAT_01c00c70 = uVar2;
    } while (local_30 < *(int *)(this_ptr->search_text_buffer + 0x20));
  }
  if (*(int *)(this_ptr->search_text_buffer + 0x60) == 1) {
    *(uint *)(this_ptr->search_text_buffer + 0x2c) =
         *(uint *)(this_ptr->search_text_buffer + 0x10);
    *(int *)(this_ptr->search_text_buffer + 0x30) = (this_ptr->base).item_count;
    *(uint *)(this_ptr->search_text_buffer + 0x34) =
         *(uint *)(this_ptr->search_text_buffer + 0x18);
  }
  else {
    if (*(int *)(this_ptr->search_text_buffer + 0x60) != 2) goto LAB_00475b35;
    *(int *)(this_ptr->search_text_buffer + 0x2c) =
         *(int *)(this_ptr->search_text_buffer + 0x10) /
         *(int *)(this_ptr->search_text_buffer + 0x18);
    *(int *)(this_ptr->search_text_buffer + 0x30) =
         ((this_ptr->base).item_count + *(int *)(this_ptr->search_text_buffer + 0x18) + -1) /
         *(int *)(this_ptr->search_text_buffer + 0x18);
    *(uint *)(this_ptr->search_text_buffer + 0x34) =
         *(uint *)(this_ptr->search_text_buffer + 0x20);
  }
  shape_edittool_cpp_CEdScrollBar_render_FUN_00476580
            ((CEdScrollBar *)(this_ptr->search_text_buffer + 0x2c));
LAB_00475b35:
  if (*(int *)(this_ptr->ok_button_text + 0x34) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(0x01BCD074,1);
  return;
}
