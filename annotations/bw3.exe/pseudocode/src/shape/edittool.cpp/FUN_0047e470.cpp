// Name: shape_edittool.cpp_FUN_0047e470
// Address: 0047e470
// Address Range: [[0047e470, 0047e939]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_0047e470(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_0047e470(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

{
  CInputString CVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  CInputString *pCVar8;
  CInputString *pCVar9;
  char *pcVar10;
  CInputString *pCVar11;
  byte bVar12;
  uint uVar13;
  char local_360 [520];
  CInputString local_158 [304];
  int local_28;
  int local_24;
  uint local_18;
  int local_14;
  
  bVar12 = 0;
  if (directory_path == (char *)0x0) {
    directory_path = &DAT_005bcf6c;
  }
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(int *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = engine_font_cpp_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (this_ptr,_DAT_01c5bae0 * 0x1e,_DAT_01c5bae4 * 2,dialog_title,0);
  pcVar10 = output_buffer;
  if ((flags & 1) == 0) {
    pcVar10 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0047ba60(local_158,pcVar10,0x14,0);
  local_14 = 0;
  local_18 = DAT_005fba2c;
  DAT_005fba2c = 0x7f;
  do {
    shape_edittool_cpp_FUN_0047fa80(this_ptr);
    strupr((char *)local_158);
    if (*directory_path != '\0') {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Directory: ");
      pcVar10 = local_360;
      do {
        cVar2 = *pcVar3;
        *pcVar10 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar10[1] = cVar2;
        pcVar10 = pcVar10 + 2;
      } while (cVar2 != '\0');
      iVar5 = -1;
      pcVar10 = local_360;
      do {
        pcVar3 = pcVar10;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar3 = pcVar10 + (uint)bVar12 * -2 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar3;
      } while (cVar2 != '\0');
      pcVar3 = pcVar3 + -1;
      pcVar10 = directory_path;
      do {
        cVar2 = *pcVar10;
        *pcVar3 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar3[1] = cVar2;
        pcVar3 = pcVar3 + 2;
      } while (cVar2 != '\0');
      engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
      engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
      engine_font_cpp_FUN_004b0a20
                (_DAT_01c5b0e0,local_360,_DAT_01c6b5a8,_DAT_01c6b5ac,_DAT_01c5bb24,0xffffffff);
    }
    uVar7 = _DAT_01c5bb24;
    if (local_14 != 0) {
      uVar7 = _DAT_01c5bb28;
    }
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
    uVar13 = 0xffffffff;
    iVar4 = _DAT_01c6b5ac + _DAT_01c5bae4;
    iVar5 = _DAT_01c6b5a8;
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Filename: ");
    engine_font_cpp_FUN_004b0a20(_DAT_01c5b0e0,pcVar10,iVar5,iVar4,uVar7,uVar13);
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Filename: ");
    iVar5 = engine_font_cpp_FUN_004b2a80(_DAT_01c5b0e0,pcVar10);
    shape_edittool_cpp_FUN_0047c050(local_158,iVar5 + _DAT_01c6b5a8,_DAT_01c6b5ac + _DAT_01c5bae4);
    wincore_wddvmem_cpp_FUN_0057a8a0();
    if (local_14 != 0) break;
    while (iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800(), iVar5 != 0) {
      iVar5 = engine_keys_cpp_CKeys_getInputKey_FUN_004df580(0x01D70A78);
      if ((iVar5 == 0x1b) || (_DAT_02d21b80 != 0)) {
        *output_buffer = '\0';
        shape_edittool_cpp_FUN_0047f970(this_ptr);
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        wincore_wddvmem_cpp_FUN_0057a8a0();
        DAT_005fba2c = local_18;
        return 0;
      }
      if ((iVar5 == 0xd) && (local_158[0] != (CInputString)0x0)) {
        pCVar9 = local_158;
        do {
          pCVar8 = pCVar9;
          if (*pCVar9 == (CInputString)0x2e) goto LAB_0047e7ce;
          if (*pCVar9 == (CInputString)0x0) break;
          pCVar8 = pCVar9 + 1;
          if (*pCVar8 == (CInputString)0x2e) goto LAB_0047e7ce;
          pCVar9 = pCVar9 + 2;
        } while (*pCVar8 != (CInputString)0x0);
        pCVar8 = (CInputString *)0x0;
LAB_0047e7ce:
        if (pCVar8 == (CInputString *)0x0) {
          if (*file_extension != '.') {
            pCVar8 = (CInputString *)&DAT_005bcf8f;
            iVar4 = -1;
            pCVar9 = local_158;
            do {
              pCVar11 = pCVar9;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pCVar11 = pCVar9 + (uint)bVar12 * -2 + 1;
              CVar1 = *pCVar9;
              pCVar9 = pCVar11;
            } while (CVar1 != (CInputString)0x0);
            pCVar11 = pCVar11 + -1;
            do {
              CVar1 = *pCVar8;
              *pCVar11 = CVar1;
              if (CVar1 == (CInputString)0x0) break;
              CVar1 = pCVar8[1];
              pCVar8 = pCVar8 + 2;
              pCVar11[1] = CVar1;
              pCVar11 = pCVar11 + 2;
            } while (CVar1 != (CInputString)0x0);
          }
          iVar4 = -1;
          pCVar9 = local_158;
          do {
            pCVar8 = pCVar9;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pCVar8 = pCVar9 + (uint)bVar12 * -2 + 1;
            CVar1 = *pCVar9;
            pCVar9 = pCVar8;
          } while (CVar1 != (CInputString)0x0);
          pCVar8 = pCVar8 + -1;
          pCVar9 = (CInputString *)file_extension;
          do {
            CVar1 = *pCVar9;
            *pCVar8 = CVar1;
            if (CVar1 == (CInputString)0x0) break;
            CVar1 = pCVar9[1];
            pCVar9 = pCVar9 + 2;
            pCVar8[1] = CVar1;
            pCVar8 = pCVar8 + 2;
          } while (CVar1 != (CInputString)0x0);
          uVar6 = 0xffffffff;
          pCVar9 = local_158;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            CVar1 = *pCVar9;
            pCVar9 = pCVar9 + (uint)bVar12 * -2 + 1;
          } while (CVar1 != (CInputString)0x0);
          local_28 = ~uVar6 - 1;
          local_24 = local_28;
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(local_158);
        }
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        local_14 = 1;
      }
      if (iVar5 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0047bc60(local_158);
      }
      else if ((((((&DAT_006074b8)[(byte)((char)iVar5 + 1)] & 8) != 0) && (iVar5 != 0x5c)) &&
               (iVar5 != 0x3a)) && (((&DAT_006074b8)[(byte)((char)iVar5 + 1)] & 2) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(local_158);
        shape_edittool_cpp_CInputString_insertChar_FUN_0047bb10(local_158,(char)iVar5,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(local_158);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047bd50(local_158);
  } while( true );
  pCVar9 = local_158;
  do {
    CVar1 = *pCVar9;
    *output_buffer = (char)CVar1;
    if (CVar1 == (CInputString)0x0) break;
    CVar1 = pCVar9[1];
    pCVar9 = pCVar9 + 2;
    *(CInputString *)(output_buffer + 1) = CVar1;
    output_buffer = output_buffer + 2;
  } while (CVar1 != (CInputString)0x0);
  shape_edittool_cpp_FUN_0047f970(this_ptr);
  DAT_005fba2c = local_18;
  return 1;
}
