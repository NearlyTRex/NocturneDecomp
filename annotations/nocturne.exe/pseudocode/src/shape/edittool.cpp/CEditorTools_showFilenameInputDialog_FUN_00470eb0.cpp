// Name: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0
// Address: 00470eb0
// Address Range: [[00470eb0, 00471352]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

{
  char cVar1;
  char *pcVar2;
  int y;
  int iVar3;
  int iVar4;
  uint uVar5;
  CInputString *pCVar6;
  CInputString *pCVar7;
  char *pcVar8;
  byte bVar9;
  int color_value;
  char local_360 [520];
  CInputString local_158;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  if (directory_path == (char *)0x0) {
    directory_path = &CHAR_00h_0057e72c;
  }
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (this_ptr,_DAT_01bcd9b8 * 0x1e,_DAT_01bcd9bc * 2,dialog_title,0);
  pcVar8 = output_buffer;
  if ((flags & 1) == 0) {
    pcVar8 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0046f0a0(&local_158,pcVar8,0x14,0);
  local_18 = INT_005b7630;
  INT_005b7630 = 0x7f;
  local_14 = 0;
  do {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004722b0(this_ptr);
    strupr(local_158.string_data);
    if (*directory_path != '\0') {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Directory: ");
      pcVar8 = local_360;
      do {
        cVar1 = *pcVar2;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar8 = local_360;
      do {
        pcVar2 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar2 = pcVar8 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar2;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 + -1;
      pcVar8 = directory_path;
      do {
        cVar1 = *pcVar8;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
      engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (_DAT_01bcd070,local_360,g_ClipLeft,g_ClipTop,_DAT_01bcddf0,-1);
    }
    iVar3 = _DAT_01bcddf0;
    if (local_14 != 0) {
      iVar3 = _DAT_01bcddf4;
    }
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    color_value = -1;
    y = g_ClipTop + _DAT_01bcd9bc;
    iVar4 = g_ClipLeft;
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Filename: ");
    engine_font_cpp_CBitFont_drawText_FUN_00490980(_DAT_01bcd070,pcVar8,iVar4,y,iVar3,color_value);
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Filename: ");
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,pcVar8);
    shape_edittool_cpp_CInputString_draw_FUN_0046f680
              (&local_158,iVar3 + g_ClipLeft,g_ClipTop + _DAT_01bcd9bc);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    if (local_14 != 0) break;
    while (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar3 != 0) {
      iVar3 = engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(g_CKeys_PTR_005bac64);
      if (iVar3 == 0x1b) {
        *output_buffer = '\0';
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0(this_ptr);
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        INT_005b7630 = local_18;
        return 0;
      }
      if ((iVar3 == 0xd) && (local_158.string_data[0] != '\0')) {
        pCVar6 = &local_158;
        do {
          pCVar7 = pCVar6;
          if (pCVar6->string_data[0] == '.') goto LAB_004711e7;
          if (pCVar6->string_data[0] == '\0') break;
          pCVar7 = (CInputString *)(pCVar6->string_data + 1);
          if (pCVar7->string_data[0] == '.') goto LAB_004711e7;
          pCVar6 = (CInputString *)(pCVar6->string_data + 2);
        } while (pCVar7->string_data[0] != '\0');
        pCVar7 = (CInputString *)0x0;
LAB_004711e7:
        if (pCVar7 == (CInputString *)0x0) {
          if (*file_extension != '.') {
            pcVar8 = ".";
            iVar4 = -1;
            pCVar6 = &local_158;
            do {
              pCVar7 = pCVar6;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pCVar7 = (CInputString *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
              pcVar2 = pCVar6->string_data;
              pCVar6 = pCVar7;
            } while (*pcVar2 != '\0');
            pcVar2 = (char *)((int)&pCVar7[-1].mask_mode + 3);
            do {
              cVar1 = *pcVar8;
              *pcVar2 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              pcVar2[1] = cVar1;
              pcVar2 = pcVar2 + 2;
            } while (cVar1 != '\0');
          }
          iVar4 = -1;
          pCVar6 = &local_158;
          do {
            pCVar7 = pCVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pCVar7 = (CInputString *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
            pcVar8 = pCVar6->string_data;
            pCVar6 = pCVar7;
          } while (*pcVar8 != '\0');
          pcVar2 = (char *)((int)&pCVar7[-1].mask_mode + 3);
          pcVar8 = file_extension;
          do {
            cVar1 = *pcVar8;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          uVar5 = 0xffffffff;
          pCVar6 = &local_158;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pCVar6->string_data;
            pCVar6 = (CInputString *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
          } while (*pcVar8 != '\0');
          local_158.current_length = ~uVar5 - 1;
          local_158.cursor_position = local_158.current_length;
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(&local_158);
        }
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        local_14 = 1;
      }
      if (iVar3 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0046f2a0(&local_158);
      }
      else if (((((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 8) != 0) &&
                (iVar3 != 0x5c)) && (iVar3 != 0x3a)) &&
              ((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 2) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(&local_158);
        shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(&local_158,(char)iVar3,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(&local_158);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0046f390(&local_158);
  } while( true );
  pCVar6 = &local_158;
  do {
    cVar1 = pCVar6->string_data[0];
    *output_buffer = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar6->string_data[1];
    pCVar6 = (CInputString *)(pCVar6->string_data + 2);
    output_buffer[1] = cVar1;
    output_buffer = output_buffer + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0(this_ptr);
  INT_005b7630 = local_18;
  return 1;
}
