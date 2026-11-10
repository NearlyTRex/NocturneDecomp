// Name: shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0
// Address: 004843d0
// Address Range: [[004843d0, 004849e4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004843d0(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048490a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004843d0(CPickList *this_ptr)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char local_164 [300];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  shape_edittool_cpp_FUN_0047fa80(g_CEditorToolsPtr);
  shape_edittool_cpp_FUN_00480200(g_CEditorToolsPtr,1);
  local_28 = _DAT_01c6b5a8;
  local_24 = this_ptr->scroll_top;
  local_34 = 0;
  if (0 < this_ptr->column_count) {
    do {
      local_1c = _DAT_01c6b5ac;
      local_2c = 0;
      if (0 < this_ptr->rows_per_column) {
        do {
          iVar5 = local_1c;
          iVar6 = local_28;
          if ((this_ptr->base).item_count <= local_24) break;
          if (local_24 == this_ptr->current_index) {
            iVar8 = local_28 + this_ptr->column_width + -1;
            iVar7 = local_1c + this_ptr->row_height + -1;
            uVar9 = _DAT_01c5bb48;
            if (this_ptr->confirmed_flag != 0) {
              uVar9 = _DAT_01c5bb4c;
            }
            local_38 = iVar8;
            local_30 = iVar7;
            if (_DAT_01c5baec == 0) {
              engine_2d_c_fillRectColor_FUN_004031c0(local_28,local_1c,iVar8,iVar7,uVar9);
            }
            else {
              iVar3 = (uVar9 & 0xff) * 3;
              engine_mini3d_cpp_FUN_004f3520
                        ((uint)(&DAT_01c6af9a)[iVar3] |
                         (uint)(&DAT_01c6af98)[iVar3] << 0x10 | (uint)(&DAT_01c6af99)[iVar3] << 8);
              engine_mini3d_cpp_FUN_004f37e0(iVar6,iVar5,local_38,local_30);
            }
            if (this_ptr->selection_state == -1) {
              uVar9 = _DAT_01c5baec;
              if (_DAT_01c5baec != 0) {
                engine_mini3d_cpp_FUN_004f3520
                          ((uint)DAT_01c6af9a | (uint)DAT_01c6af99 << 8 | (uint)DAT_01c6af98 << 0x10
                          );
                uVar9 = _DAT_01c6b5c0;
              }
              _DAT_01c6b5c0 = uVar9;
              shape_edittool_cpp_FUN_0047b5e0(local_28,local_1c,iVar8,iVar7,1);
            }
          }
          local_18 = 0;
          pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(&this_ptr->base,local_24);
          iVar5 = local_28 + this_ptr->column_padding;
          local_20 = _DAT_01c5bb40;
          iVar6 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(this_ptr,local_24);
          if (iVar6 == 0) {
            local_20 = _DAT_01c5bb44;
          }
          local_14 = this_ptr->ok_button_text + local_18 * 4 + -0x5c;
          do {
            cVar2 = *pcVar10;
            pcVar1 = pcVar10;
            pcVar11 = local_164;
            while ((pcVar10 = pcVar1, cVar2 != '\0' && (pcVar10 = pcVar1 + 1, *pcVar1 != '\t'))) {
              *pcVar11 = *pcVar1;
              pcVar11 = pcVar11 + 1;
              cVar2 = *pcVar10;
              pcVar1 = pcVar10;
            }
            *pcVar11 = '\0';
            engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
            engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
            engine_font_cpp_FUN_004b0a20(_DAT_01c5b0e0,local_164,iVar5,local_1c,local_20,0xffffffff)
            ;
            pcVar1 = local_14 + 4;
            iVar5 = iVar5 + *(int *)(local_14 + 0x10);
            local_18 = local_18 + 1;
            local_14 = pcVar1;
          } while (*pcVar10 != '\0');
          local_1c = local_1c + this_ptr->row_height;
          local_24 = local_24 + 1;
          local_2c = local_2c + 1;
        } while (local_2c < this_ptr->rows_per_column);
      }
      uVar9 = _DAT_01c6b5c0;
      if (0 < local_34) {
        uVar4 = _DAT_01c5bb50;
        if (_DAT_01c5baec != 0) {
          iVar6 = (_DAT_01c5bb50 & 0xff) * 3;
          engine_mini3d_cpp_FUN_004f3520
                    ((uint)(&DAT_01c6af9a)[iVar6] |
                     (uint)(&DAT_01c6af99)[iVar6] << 8 | (uint)(&DAT_01c6af98)[iVar6] << 0x10);
          uVar4 = _DAT_01c6b5c0;
        }
        _DAT_01c6b5c0 = uVar4;
        iVar5 = shape_edittool_cpp_calculateGridHeight_FUN_00485ff0();
        iVar6 = DAT_005fba1c / 0x60;
        if (this_ptr->scroll_mode == 2) {
          iVar7 = 3;
        }
        else {
          iVar7 = 1;
        }
        iVar8 = shape_edittool_cpp_FUN_00486580((char *)0x0);
        if (this_ptr->scroll_mode != 2) {
          iVar5 = 0;
        }
        engine_2d_c_drawLine_FUN_004011a0
                  (local_28,_DAT_01c6b5ac,local_28,_DAT_01c6b5b4 - (iVar5 + iVar8 + iVar6 * iVar7));
      }
      local_34 = local_34 + 1;
      local_28 = local_28 + this_ptr->column_width;
      _DAT_01c6b5c0 = uVar9;
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
  shape_edittool_cpp_FUN_00485640(&this_ptr->scrollbar);
LAB_004845e8:
  if (this_ptr->ok_button_text[0] != '\0') {
    shape_edittool_cpp_FUN_00486120(&this_ptr->ok_button,this_ptr->selection_state == 0);
  }
  if (this_ptr->cancel_button_text[0] != '\0') {
    shape_edittool_cpp_FUN_00486120(&this_ptr->cancel_button,this_ptr->selection_state == 1);
  }
  if (this_ptr->state_flag == 0) {
    shape_edittool_cpp_FUN_00480410(g_CEditorToolsPtr,0);
    return;
  }
  return;
}
