// Name: shape_edittool.cpp_FUN_00470eb0
// Address: 00470eb0
// Address Range: [[00470eb0, 00471352]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_00470eb0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5,byte param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint shape_edittool_cpp_FUN_00470eb0(uint param_1,uint param_2,char *param_3,char *param_4,char *param_5,byte param_6)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char local_360 [520];
  char local_158 [304];
  int local_28;
  int local_24;
  uint local_18;
  int local_14;
  
  bVar9 = 0;
  if (param_3 == (char *)0x0) {
    param_3 = &CHAR_00h_0057e72c;
  }
  if (_DAT_01bcd070 == 0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(int *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (param_1,_DAT_01bcd9b8 * 0x1e,_DAT_01bcd9bc * 2,param_2,0);
  pcVar7 = param_5;
  if ((param_6 & 1) == 0) {
    pcVar7 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0046f0a0(local_158,pcVar7,0x14,0);
  local_18 = DAT_005b7630;
  DAT_005b7630 = 0x7f;
  local_14 = 0;
  do {
    shape_edittool_cpp_FUN_004722b0(param_1);
    strupr(local_158);
    if (*param_3 != '\0') {
      pcVar2 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Directory: ");
      pcVar7 = local_360;
      do {
        cVar1 = *pcVar2;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar4 = -1;
      pcVar7 = local_360;
      do {
        pcVar2 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar2 = pcVar7 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar2;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 + -1;
      pcVar7 = param_3;
      do {
        cVar1 = *pcVar7;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
      engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (_DAT_01bcd070,local_360,_DAT_01c00c58,_DAT_01c00c5c,_DAT_01bcddf0,0xffffffff);
    }
    uVar3 = _DAT_01bcddf0;
    if (local_14 != 0) {
      uVar3 = _DAT_01bcddf4;
    }
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    uVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                      ("Filename: ",_DAT_01c00c58,_DAT_01c00c5c + _DAT_01bcd9bc,uVar3,
                       0xffffffff);
    engine_font_cpp_CBitFont_drawText_FUN_00490980(_DAT_01bcd070,uVar3);
    uVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Filename: ");
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,uVar3);
    shape_edittool_cpp_CInputString_draw_FUN_0046f680
              (local_158,iVar4 + _DAT_01c00c58,_DAT_01c00c5c + _DAT_01bcd9bc);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    if (local_14 != 0) break;
    while (iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar4 != 0) {
      iVar4 = engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(INT_005bac64);
      if (iVar4 == 0x1b) {
        *param_5 = '\0';
        shape_edittool_cpp_FUN_004720c0(param_1);
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        DAT_005b7630 = local_18;
        return 0;
      }
      if ((iVar4 == 0xd) && (local_158[0] != '\0')) {
        pcVar7 = local_158;
        do {
          pcVar2 = pcVar7;
          if (*pcVar7 == '.') goto LAB_004711e7;
          if (*pcVar7 == '\0') break;
          pcVar2 = pcVar7 + 1;
          if (*pcVar2 == '.') goto LAB_004711e7;
          pcVar7 = pcVar7 + 2;
        } while (*pcVar2 != '\0');
        pcVar2 = (char *)0x0;
LAB_004711e7:
        if (pcVar2 == (char *)0x0) {
          if (*param_4 != '.') {
            pcVar2 = ".";
            iVar5 = -1;
            pcVar7 = local_158;
            do {
              pcVar8 = pcVar7;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar8;
            } while (cVar1 != '\0');
            pcVar8 = pcVar8 + -1;
            do {
              cVar1 = *pcVar2;
              *pcVar8 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
          }
          iVar5 = -1;
          pcVar7 = local_158;
          do {
            pcVar2 = pcVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar2 = pcVar7 + (uint)bVar9 * -2 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar2;
          } while (cVar1 != '\0');
          pcVar2 = pcVar2 + -1;
          pcVar7 = param_4;
          do {
            cVar1 = *pcVar7;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          uVar6 = 0xffffffff;
          pcVar7 = local_158;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          local_28 = ~uVar6 - 1;
          local_24 = local_28;
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(local_158);
        }
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        local_14 = 1;
      }
      if (iVar4 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0046f2a0(local_158);
      }
      else if ((((((&DAT_005c168c)[(byte)((char)iVar4 + 1)] & 8) != 0) && (iVar4 != 0x5c)) &&
               (iVar4 != 0x3a)) && (((&DAT_005c168c)[(byte)((char)iVar4 + 1)] & 2) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(local_158);
        shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(local_158,iVar4,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(local_158);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0046f390(local_158);
  } while( true );
  pcVar7 = local_158;
  do {
    cVar1 = *pcVar7;
    *param_5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    param_5[1] = cVar1;
    param_5 = param_5 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_FUN_004720c0(param_1);
  DAT_005b7630 = local_18;
  return 1;
}
