// Name: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470
// Address: 0047e470
// Address Range: [[0047e470, 0047e939]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  CInputString *pCVar7;
  CInputString *pCVar8;
  char *pcVar9;
  byte bVar10;
  uint uVar11;
  char local_360 [520];
  CInputString local_158;
  uint local_18;
  int local_14;
  
  bVar10 = 0;
  if (directory_path == (char *)0x0) {
    directory_path = &DAT_005bcf6c;
  }
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (this_ptr,_DAT_01c5bae0 * 0x1e,_DAT_01c5bae4 * 2,dialog_title,0);
  pcVar9 = output_buffer;
  if ((flags & 1) == 0) {
    pcVar9 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0047ba60(&local_158,pcVar9,0x14,0);
  local_14 = 0;
  local_18 = DAT_005fba2c;
  DAT_005fba2c = 0x7f;
  do {
    shape_edittool_cpp_FUN_0047fa80(this_ptr);
    strupr(local_158.string_data);
    if (*directory_path != '\0') {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Directory: ");
      pcVar9 = local_360;
      do {
        cVar1 = *pcVar2;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      iVar4 = -1;
      pcVar9 = local_360;
      do {
        pcVar2 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar2 = pcVar9 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar2;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 + -1;
      pcVar9 = directory_path;
      do {
        cVar1 = *pcVar9;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
      engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
      engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
      engine_font_cpp_FUN_004b0a20
                (_DAT_01c5b0e0,local_360,_DAT_01c6b5a8,_DAT_01c6b5ac,_DAT_01c5bb24,0xffffffff);
    }
    uVar6 = _DAT_01c5bb24;
    if (local_14 != 0) {
      uVar6 = _DAT_01c5bb28;
    }
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
    uVar11 = 0xffffffff;
    iVar3 = _DAT_01c6b5ac + _DAT_01c5bae4;
    iVar4 = _DAT_01c6b5a8;
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Filename: ");
    engine_font_cpp_FUN_004b0a20(_DAT_01c5b0e0,pcVar9,iVar4,iVar3,uVar6,uVar11);
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Filename: ");
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(_DAT_01c5b0e0,pcVar9);
    shape_edittool_cpp_FUN_0047c050(&local_158,iVar4 + _DAT_01c6b5a8,_DAT_01c6b5ac + _DAT_01c5bae4);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    if (local_14 != 0) break;
    while (iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800(), iVar4 != 0) {
      iVar4 = engine_keys_cpp_CKeys_getInputKey_FUN_004df580(0x01D70A78);
      if ((iVar4 == 0x1b) || (_DAT_02d21b80 != 0)) {
        *output_buffer = '\0';
        shape_edittool_cpp_FUN_0047f970(this_ptr);
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
        DAT_005fba2c = local_18;
        return 0;
      }
      if ((iVar4 == 0xd) && (local_158.string_data[0] != '\0')) {
        pCVar7 = &local_158;
        do {
          pCVar8 = pCVar7;
          if (pCVar7->string_data[0] == '.') goto LAB_0047e7ce;
          if (pCVar7->string_data[0] == '\0') break;
          pCVar8 = (CInputString *)(pCVar7->string_data + 1);
          if (pCVar8->string_data[0] == '.') goto LAB_0047e7ce;
          pCVar7 = (CInputString *)(pCVar7->string_data + 2);
        } while (pCVar8->string_data[0] != '\0');
        pCVar8 = (CInputString *)0x0;
LAB_0047e7ce:
        if (pCVar8 == (CInputString *)0x0) {
          if (*file_extension != '.') {
            pcVar9 = &DAT_005bcf8f;
            iVar3 = -1;
            pCVar7 = &local_158;
            do {
              pCVar8 = pCVar7;
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              pCVar8 = (CInputString *)((int)pCVar7 + (uint)bVar10 * -2 + 1);
              pcVar2 = pCVar7->string_data;
              pCVar7 = pCVar8;
            } while (*pcVar2 != '\0');
            pcVar2 = (char *)((int)&pCVar8[-1].mask_mode + 3);
            do {
              cVar1 = *pcVar9;
              *pcVar2 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar9[1];
              pcVar9 = pcVar9 + 2;
              pcVar2[1] = cVar1;
              pcVar2 = pcVar2 + 2;
            } while (cVar1 != '\0');
          }
          iVar3 = -1;
          pCVar7 = &local_158;
          do {
            pCVar8 = pCVar7;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pCVar8 = (CInputString *)((int)pCVar7 + (uint)bVar10 * -2 + 1);
            pcVar9 = pCVar7->string_data;
            pCVar7 = pCVar8;
          } while (*pcVar9 != '\0');
          pcVar2 = (char *)((int)&pCVar8[-1].mask_mode + 3);
          pcVar9 = file_extension;
          do {
            cVar1 = *pcVar9;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          uVar5 = 0xffffffff;
          pCVar7 = &local_158;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar9 = pCVar7->string_data;
            pCVar7 = (CInputString *)((int)pCVar7 + (uint)bVar10 * -2 + 1);
          } while (*pcVar9 != '\0');
          local_158.current_length = ~uVar5 - 1;
          local_158.cursor_position = local_158.current_length;
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(&local_158);
        }
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        local_14 = 1;
      }
      if (iVar4 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0047bc60(&local_158);
      }
      else if ((((((&DAT_006074b8)[(byte)((char)iVar4 + 1)] & 8) != 0) && (iVar4 != 0x5c)) &&
               (iVar4 != 0x3a)) && (((&DAT_006074b8)[(byte)((char)iVar4 + 1)] & 2) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(&local_158);
        shape_edittool_cpp_CInputString_insertChar_FUN_0047bb10(&local_158,(char)iVar4,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(&local_158);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047bd50(&local_158);
  } while( true );
  pCVar7 = &local_158;
  do {
    cVar1 = pCVar7->string_data[0];
    *output_buffer = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar7->string_data[1];
    pCVar7 = (CInputString *)(pCVar7->string_data + 2);
    output_buffer[1] = cVar1;
    output_buffer = output_buffer + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_FUN_0047f970(this_ptr);
  DAT_005fba2c = local_18;
  return 1;
}
