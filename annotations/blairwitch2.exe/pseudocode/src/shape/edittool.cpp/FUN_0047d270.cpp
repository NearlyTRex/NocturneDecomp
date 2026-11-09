// Name: shape_edittool.cpp_FUN_0047d270
// Address: 0047d270
// Address Range: [[0047d270, 0047d72c]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_0047d270(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_0047d270(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

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
    directory_path = &DAT_005d2111;
  }
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(int *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (this_ptr,_DAT_01c25f78 * 0x1e,_DAT_01c25f7c * 2,dialog_title,0);
  pcVar10 = output_buffer;
  if ((flags & 1) == 0) {
    pcVar10 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0047a9d0(local_158,pcVar10,0x14,0);
  local_14 = 0;
  local_18 = DAT_006141cc;
  DAT_006141cc = 0x7f;
  do {
    shape_edittool_cpp_FUN_0047e870(this_ptr);
    strupr((char *)local_158);
    if (*directory_path != '\0') {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Directory: ");
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
      engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
      engine_mini3d_cpp_FUN_004f3570(0x3f800000);
      engine_font_cpp_FUN_004a8df0
                (_DAT_01c25590,local_360,_DAT_01c35e48,_DAT_01c35e4c,_DAT_01c263bc,0xffffffff);
    }
    uVar7 = _DAT_01c263bc;
    if (local_14 != 0) {
      uVar7 = _DAT_01c263c0;
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    engine_mini3d_cpp_FUN_004f3570(0x3f800000);
    uVar13 = 0xffffffff;
    iVar4 = _DAT_01c35e4c + _DAT_01c25f7c;
    iVar5 = _DAT_01c35e48;
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Filename: ");
    engine_font_cpp_FUN_004a8df0(_DAT_01c25590,pcVar10,iVar5,iVar4,uVar7,uVar13);
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Filename: ");
    iVar5 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,pcVar10);
    shape_edittool_cpp_FUN_0047afb0(local_158,iVar5 + _DAT_01c35e48,_DAT_01c35e4c + _DAT_01c25f7c);
    wincore_wddvmem_cpp_FUN_00589560();
    if (local_14 != 0) break;
    while (iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40(), iVar5 != 0) {
      iVar5 = engine_keys_cpp_CKeys_getInputKey_FUN_004dfe90(0x01D02F84);
      if (iVar5 == 0x1b) {
        *output_buffer = '\0';
        shape_edittool_cpp_FUN_0047e760(this_ptr);
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        wincore_wddvmem_cpp_FUN_00589560();
        DAT_006141cc = local_18;
        return 0;
      }
      if ((iVar5 == 0xd) && (local_158[0] != (CInputString)0x0)) {
        pCVar9 = local_158;
        do {
          pCVar8 = pCVar9;
          if (*pCVar9 == (CInputString)0x2e) goto LAB_0047d5c1;
          if (*pCVar9 == (CInputString)0x0) break;
          pCVar8 = pCVar9 + 1;
          if (*pCVar8 == (CInputString)0x2e) goto LAB_0047d5c1;
          pCVar9 = pCVar9 + 2;
        } while (*pCVar8 != (CInputString)0x0);
        pCVar8 = (CInputString *)0x0;
LAB_0047d5c1:
        if (pCVar8 == (CInputString *)0x0) {
          if (*file_extension != '.') {
            pCVar8 = (CInputString *)&DAT_005d2134;
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
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(local_158);
        }
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        local_14 = 1;
      }
      if (iVar5 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0047abd0(local_158);
      }
      else if ((((((&DAT_0061ed94)[(byte)((char)iVar5 + 1)] & 8) != 0) && (iVar5 != 0x5c)) &&
               (iVar5 != 0x3a)) && (((&DAT_0061ed94)[(byte)((char)iVar5 + 1)] & 2) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(local_158);
        shape_edittool_cpp_CInputString_insertChar_FUN_0047aa80(local_158,(char)iVar5,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(local_158);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047acc0(local_158);
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
  shape_edittool_cpp_FUN_0047e760(this_ptr);
  DAT_006141cc = local_18;
  return 1;
}
