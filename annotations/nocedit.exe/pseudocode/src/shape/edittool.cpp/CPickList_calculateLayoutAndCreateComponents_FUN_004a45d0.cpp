// Name: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
// Address: 004a45d0
// Address Range: [[004a45d0, 004a4d33]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0(CPickList *this_ptr,char *dialog_title,int config_parameter)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0(CPickList *this_ptr,char *dialog_title,int config_parameter)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  CPickList *pCVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int bottom_pos;
  int top_pos;
  int iVar9;
  int iVar10;
  bool bVar11;
  char local_160 [300];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  this_ptr->character_width = g_FontCharacterWidth + 1;
  this_ptr->column_padding = 8;
  this_ptr->tab_column_count = 1;
  memset(this_ptr->tab_column_widths,0,0x28);
  local_14 = 0;
  if (0 < (this_ptr->base).item_count) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&this_ptr->base,local_14);
      iVar10 = 0;
      pCVar5 = this_ptr;
      while( true ) {
        cVar1 = *pcVar3;
        pcVar2 = pcVar3;
        pcVar8 = local_160;
        while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
          *pcVar8 = *pcVar2;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar3;
          pcVar2 = pcVar3;
        }
        *pcVar8 = '\0';
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,local_160);
        if (pCVar5->tab_column_widths[0] < iVar4) {
          pCVar5->tab_column_widths[0] = iVar4;
        }
        iVar10 = iVar10 + 1;
        pCVar5 = (CPickList *)&(pCVar5->base).capacity;
        if (*pcVar3 == '\0') break;
        if (9 < iVar10) {
          g_CurrentFilename = "..\\shape\\edittool.cpp";
          g_CurrentLineNumber = 0xed6;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many picklist columns!");
        }
      }
      if (this_ptr->tab_column_count < iVar10) {
        this_ptr->tab_column_count = iVar10;
      }
      local_14 = local_14 + 1;
    } while (local_14 < (this_ptr->base).item_count);
  }
  pCVar5 = this_ptr;
  for (iVar10 = 0; iVar10 < this_ptr->tab_column_count + -1; iVar10 = iVar10 + 1) {
    pCVar5->tab_column_widths[0] = pCVar5->tab_column_widths[0] + g_WindowWidth / 0x28;
    pCVar5 = (CPickList *)&(pCVar5->base).capacity;
  }
  iVar10 = 0;
  this_ptr->total_content_width = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->tab_column_count) {
    do {
      iVar10 = iVar10 + 1;
      this_ptr->total_content_width = this_ptr->total_content_width + pCVar5->tab_column_widths[0];
      pCVar5 = (CPickList *)&(pCVar5->base).capacity;
    } while (iVar10 < this_ptr->tab_column_count);
  }
  this_ptr->total_content_width = this_ptr->total_content_width + this_ptr->column_padding * 2;
  iVar10 = (g_WindowHeight + g_FontCharacterWidth * -4) / this_ptr->character_width;
  this_ptr->vertical_page_size = iVar10;
  if (iVar10 < 1) {
    this_ptr->vertical_page_size = 1;
  }
  iVar10 = (this_ptr->base).item_count;
  if (iVar10 < this_ptr->vertical_page_size) {
    this_ptr->vertical_page_size = iVar10;
  }
  iVar10 = g_WindowWidth * 7 >> 0x1f;
  iVar10 = ((int)((g_WindowWidth * 7 + iVar10 * -8) - (uint)(iVar10 << 2 < 0)) >> 3) /
           this_ptr->total_content_width;
  this_ptr->column_count = iVar10;
  if (iVar10 < 1) {
    this_ptr->column_count = 1;
  }
  iVar10 = ((this_ptr->base).item_count + this_ptr->vertical_page_size + -1) /
           this_ptr->vertical_page_size;
  if (iVar10 < this_ptr->column_count) {
    this_ptr->column_count = iVar10;
  }
  if (0 < this_ptr->selected_index) {
    this_ptr->column_count = this_ptr->selected_index;
  }
  this_ptr->dialog_result = 0;
  if (this_ptr->vertical_page_size * this_ptr->column_count < (this_ptr->base).item_count) {
    if (this_ptr->column_count < 2) {
      this_ptr->dialog_result = 1;
    }
    else {
      this_ptr->dialog_result = 2;
    }
  }
  iVar10 = this_ptr->total_content_width * this_ptr->column_count + 8;
  iVar4 = this_ptr->vertical_page_size * this_ptr->character_width + 6;
  iVar6 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  local_30 = iVar6;
  local_2c = shape_edittool_cpp_calculateGridHeight_FUN_004a64b0();
  if (this_ptr->dialog_result == 1) {
    iVar10 = iVar10 + iVar6;
  }
  else if (this_ptr->dialog_result == 2) {
    iVar4 = iVar4 + local_2c;
  }
  local_34 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
                  (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  local_28 = g_WindowHeight / 0x60;
  iVar9 = 0;
  iVar6 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  bVar11 = this_ptr->ok_button_text[0] != '\0';
  if (bVar11) {
    iVar6 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(this_ptr->ok_button_text);
  }
  local_18 = (uint)bVar11;
  if (this_ptr->cancel_button_text[0] != '\0') {
    iVar7 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(this_ptr->cancel_button_text);
    if (iVar6 < iVar7) {
      iVar6 = iVar7;
    }
    local_18 = local_18 + 1;
  }
  if (0 < (int)local_18) {
    iVar9 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
    if (iVar6 < iVar9) {
      iVar6 = iVar9;
    }
    local_1c = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar9 = local_28 + local_1c;
    local_20 = local_18 * iVar6 + (local_18 - 1) * local_34;
    if (this_ptr->dialog_result == 2) {
      iVar9 = iVar9 + local_28;
    }
    if (iVar10 < local_20) {
      iVar10 = local_20;
    }
    iVar4 = iVar4 + iVar9;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,iVar10,iVar4,dialog_title,config_parameter);
  iVar10 = (g_ClipRight - g_ClipLeft) + 1;
  iVar4 = (g_ClipBottom - g_ClipTop) + 1;
  if (this_ptr->dialog_result == 1) {
    iVar10 = iVar10 - local_30;
    bottom_pos = (g_ClipBottom - local_1c) - local_28;
    iVar7 = (g_ClipRight - local_30) + 1;
    top_pos = g_ClipTop;
  }
  else {
    if (this_ptr->dialog_result != 2) goto LAB_004a4afc;
    iVar4 = iVar4 - local_2c;
    bottom_pos = g_ClipBottom - iVar9;
    top_pos = ((g_ClipBottom - local_2c) - iVar9) + 1;
    iVar7 = g_ClipLeft;
  }
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&this_ptr->scrollbar,iVar7,top_pos,g_ClipRight,bottom_pos);
LAB_004a4afc:
  if (0 < (int)local_18) {
    local_24 = (g_ClipBottom - local_1c) + 1;
    if (this_ptr->ok_button_text[0] != '\0') {
      iVar7 = (g_ClipRight + 1) - local_20;
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                (&this_ptr->ok_button,iVar7,local_24,iVar7 + -1 + iVar6,local_24 + local_1c + -1,
                 this_ptr->ok_button_text);
    }
    if (this_ptr->cancel_button_text[0] != '\0') {
      iVar7 = (g_ClipRight + 1) - iVar6;
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                (&this_ptr->cancel_button,iVar7,local_24,iVar7 + -1 + iVar6,local_24 + local_1c + -1
                 ,this_ptr->cancel_button_text);
    }
    iVar4 = iVar4 - iVar9;
  }
  this_ptr->vertical_page_size = iVar4 / this_ptr->character_width;
  this_ptr->column_count = iVar10 / this_ptr->total_content_width;
  iVar4 = ((this_ptr->base).item_count + this_ptr->vertical_page_size + -1) /
          this_ptr->vertical_page_size;
  if (iVar4 < this_ptr->column_count) {
    this_ptr->column_count = iVar4;
  }
  if (this_ptr->column_count < 1) {
    this_ptr->column_count = 1;
  }
  this_ptr->page_size = this_ptr->vertical_page_size * this_ptr->column_count;
  this_ptr->scroll_top = 0;
  this_ptr->total_content_width = iVar10 / this_ptr->column_count;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  this_ptr->search_text_buffer[0] = '\0';
  g_LastClickItemIndex = -1;
  this_ptr->confirmed_flag = 0;
  return;
}
