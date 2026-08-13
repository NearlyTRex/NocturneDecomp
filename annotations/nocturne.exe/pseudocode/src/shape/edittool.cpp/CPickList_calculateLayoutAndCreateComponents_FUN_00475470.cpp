// Name: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00475470
// Address: 00475470
// Address Range: [[00475470, 004759c5]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00475470(CPickList *this_ptr,char *dialog_title,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00475470(CPickList *this_ptr,char *dialog_title,uint window_flags)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  CPickList *pCVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int top_pos;
  int iVar9;
  char local_144 [300];
  int local_18;
  int local_14;
  
  this_ptr->character_width = _DAT_01bcd9bc + 1;
  this_ptr->column_padding = 8;
  this_ptr->tab_column_count = 1;
  memset(this_ptr->tab_column_widths,0,0x28);
  local_14 = 0;
  if (0 < (this_ptr->base).item_count) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&this_ptr->base,local_14);
      iVar9 = 0;
      pCVar5 = this_ptr;
      while( true ) {
        cVar1 = *pcVar3;
        pcVar2 = pcVar3;
        pcVar8 = local_144;
        while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
          *pcVar8 = *pcVar2;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar3;
          pcVar2 = pcVar3;
        }
        *pcVar8 = '\0';
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,local_144);
        if (pCVar5->tab_column_widths[0] < iVar4) {
          pCVar5->tab_column_widths[0] = iVar4;
        }
        iVar9 = iVar9 + 1;
        pCVar5 = (CPickList *)&(pCVar5->base).capacity;
        if (*pcVar3 == '\0') break;
        if (9 < iVar9) {
          g_CurrentFilename = "..\\shape\\edittool.cpp";
          g_CurrentLineNumber = 3329;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Too many picklist columns!");
        }
      }
      if (this_ptr->tab_column_count < iVar9) {
        this_ptr->tab_column_count = iVar9;
      }
      local_14 = local_14 + 1;
    } while (local_14 < (this_ptr->base).item_count);
  }
  pCVar5 = this_ptr;
  for (iVar9 = 0; iVar9 < this_ptr->tab_column_count + -1; iVar9 = iVar9 + 1) {
    pCVar5->tab_column_widths[0] = pCVar5->tab_column_widths[0] + g_WindowWidth / 0x28;
    pCVar5 = (CPickList *)&(pCVar5->base).capacity;
  }
  iVar9 = 0;
  this_ptr->total_content_width = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->tab_column_count) {
    do {
      iVar9 = iVar9 + 1;
      this_ptr->total_content_width = this_ptr->total_content_width + pCVar5->tab_column_widths[0];
      pCVar5 = (CPickList *)&(pCVar5->base).capacity;
    } while (iVar9 < this_ptr->tab_column_count);
  }
  this_ptr->total_content_width = this_ptr->total_content_width + this_ptr->column_padding * 2;
  iVar9 = (g_WindowHeight + _DAT_01bcd9bc * -4) / this_ptr->character_width;
  this_ptr->vertical_page_size = iVar9;
  if (iVar9 < 1) {
    this_ptr->vertical_page_size = 1;
  }
  iVar9 = (this_ptr->base).item_count;
  if (iVar9 < this_ptr->vertical_page_size) {
    this_ptr->vertical_page_size = iVar9;
  }
  iVar9 = g_WindowWidth * 7 >> 0x1f;
  iVar9 = ((int)((g_WindowWidth * 7 + iVar9 * -8) - (uint)(iVar9 << 2 < 0)) >> 3) /
          this_ptr->total_content_width;
  this_ptr->column_count = iVar9;
  if (iVar9 < 1) {
    this_ptr->column_count = 1;
  }
  iVar9 = ((this_ptr->base).item_count + this_ptr->vertical_page_size + -1) /
          this_ptr->vertical_page_size;
  if (iVar9 < this_ptr->column_count) {
    this_ptr->column_count = iVar9;
  }
  if (this_ptr->forced_column_count != 0) {
    this_ptr->column_count = 1;
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
  iVar9 = this_ptr->total_content_width * this_ptr->column_count + 8;
  iVar4 = this_ptr->vertical_page_size * this_ptr->character_width + 6;
  iVar6 = shape_edittool_cpp_calculateGridWidth_FUN_00476df0();
  local_18 = iVar6;
  iVar7 = shape_edittool_cpp_calculateGridHeight_FUN_00476e10();
  if (this_ptr->dialog_result == 1) {
    iVar9 = iVar9 + iVar6;
  }
  else if (this_ptr->dialog_result == 2) {
    iVar4 = iVar4 + iVar7;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (g_CEditorTools_PTR_005b6d50,iVar9,iVar4,dialog_title,window_flags);
  iVar9 = (g_ClipRight - g_ClipLeft) + 1;
  iVar4 = (g_ClipBottom - g_ClipTop) + 1;
  if (this_ptr->dialog_result == 1) {
    iVar9 = iVar9 - local_18;
    iVar6 = (g_ClipRight - local_18) + 1;
    top_pos = g_ClipTop;
  }
  else {
    if (this_ptr->dialog_result != 2) goto LAB_0047587b;
    top_pos = (g_ClipBottom - iVar7) + 1;
    iVar4 = iVar4 - iVar7;
    iVar6 = g_ClipLeft;
  }
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004764d0
            (&this_ptr->scrollbar,iVar6,top_pos,g_ClipRight,g_ClipBottom);
LAB_0047587b:
  this_ptr->vertical_page_size = iVar4 / this_ptr->character_width;
  this_ptr->column_count = iVar9 / this_ptr->total_content_width;
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
  this_ptr->total_content_width = iVar9 / this_ptr->column_count;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  this_ptr->search_text_buffer[0] = '\0';
  _DAT_01bcde20 = 0xffffffff;
  this_ptr->confirmed_flag = 0;
  return;
}
