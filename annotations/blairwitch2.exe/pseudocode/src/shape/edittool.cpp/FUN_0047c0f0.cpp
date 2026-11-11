// Name: shape_edittool.cpp_FUN_0047c0f0
// Address: 0047c0f0
// Address Range: [[0047c0f0, 0047c756]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_0047c0f0(CStrList *str_list,char *dialog_title,int dialog_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_0047c0f0(CStrList *str_list,char *dialog_title,int dialog_mode)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *ptr;
  int iVar8;
  int iVar9;
  CEdButton *pCVar10;
  char *pcVar11;
  bool bVar12;
  char local_150 [256];
  uint local_50;
  int local_4c;
  int local_48;
  CEdButton *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CEdButton *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iStack_10;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  if ((dialog_title == (char *)0x0) || (iVar2 = *(int *)dialog_title, iVar2 < 1)) {
    return -1;
  }
  uVar3 = operator_new_array(iVar2 * 0xe4 + 4,iVar2,&g_CEdButtonTypeInfo);
  local_44 = (CEdButton *)__vec_new(uVar3);
  iVar8 = 0;
  local_18 = 0;
  pCVar10 = local_44;
  if (0 < iVar2) {
    do {
      local_20 = pCVar10;
      pcVar11 = local_150;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240((CStrList *)dialog_title,iVar8);
      do {
        cVar1 = *pcVar4;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar11 = local_150;
      do {
        pcVar4 = pcVar11;
        if (*pcVar11 == '^') goto LAB_0047c1ff;
        if (*pcVar11 == '\0') break;
        pcVar4 = pcVar11 + 1;
        if (*pcVar4 == '^') goto LAB_0047c1ff;
        pcVar11 = pcVar11 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0047c1ff:
      if (pcVar4 != (char *)0x0) {
        pcVar11 = pcVar4 + 1;
        *(char *)&local_20->shortcut_key = pcVar4[1];
        do {
          cVar1 = *pcVar11;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_CStrList_setStringAt_FUN_004813f0
                  ((CStrList *)dialog_title,iVar8,local_150);
      }
      iVar5 = shape_edittool_cpp_calculateButtonWidth_FUN_004852f0(local_150);
      if (local_18 < iVar5) {
        local_18 = iVar5;
      }
      local_20 = local_20 + 1;
      iVar8 = iVar8 + 1;
      pCVar10 = local_20;
    } while (iVar8 < iVar2);
  }
  iVar8 = shape_edittool_cpp_calculateButtonWidth_FUN_004852f0("Cancel");
  if (local_18 < iVar8) {
    local_18 = shape_edittool_cpp_calculateButtonWidth_FUN_004852f0("Cancel");
  }
  iVar8 = (int)((DAT_006141b8 + (DAT_006141b8 >> 0x1f) * -0x80) -
               (uint)((DAT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  local_40 = DAT_006141bc / 0x60;
  if (dialog_mode == 0) {
    iVar9 = local_18 * iVar2;
    iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_00485380(0);
    iVar5 = iVar5 + -1;
    iVar9 = iVar9 + (iVar2 + -1) * (iVar8 + -2) + 1;
  }
  else {
    iVar9 = local_40 + -2;
    iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_00485380(0);
    iVar5 = iVar9 * (iVar2 + -1) + iVar5 * iVar2;
    iVar9 = local_18;
  }
  iVar6 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,str_list);
  if (iVar6 < iVar9) {
    iVar6 = iVar9;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (g_CEditorToolsPtr,iVar6,iVar5,(char *)str_list,0);
  local_2c = (((_DAT_01c35e50 - _DAT_01c35e48) + 1) - iVar9) / 2;
  iVar5 = 0;
  if (0 < iVar2) {
    local_34 = local_40 + -1;
    local_38 = iVar8 + -1;
    local_28 = 0;
    local_24 = 0;
    local_30 = local_18;
    local_1c = 0;
    pCVar10 = local_44;
    do {
      iVar8 = _DAT_01c35e48 + local_2c;
      if (dialog_mode == 0) {
        iVar8 = iVar8 + local_1c + local_24;
        iVar9 = shape_edittool_cpp_calculateButtonHeight_FUN_00485380(0);
        local_4c = (_DAT_01c35e54 - iVar9) + 1;
        pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240
                            ((CStrList *)dialog_title,iVar5);
        iVar7 = local_18 + iVar8;
        iVar9 = local_4c;
        iVar6 = _DAT_01c35e54;
      }
      else {
        iVar9 = shape_edittool_cpp_calculateButtonHeight_FUN_00485380(0);
        local_48 = iVar9 * iVar5 + _DAT_01c35e4c + local_28 + -1;
        pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240
                            ((CStrList *)dialog_title,iVar5);
        iVar9 = shape_edittool_cpp_calculateButtonHeight_FUN_00485380(0);
        iVar6 = iVar9 + local_48 + -1;
        iVar7 = local_18 + iVar8;
        iVar9 = local_48;
      }
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0
                (pCVar10,iVar8,iVar9,iVar7 + -1,iVar6,pcVar11);
      pCVar10 = pCVar10 + 1;
      local_28 = local_28 + local_34;
      iVar5 = iVar5 + 1;
      local_24 = local_24 + local_38;
      local_1c = local_1c + local_30;
    } while (iVar5 < iVar2);
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  local_50 = DAT_006141cc;
  DAT_006141cc = 0x7f;
  local_14 = 0;
  local_3c = iVar2 + -1;
  iVar8 = -2;
  do {
    iVar5 = (*0x01D02F84->vtable->getAndClearKeyState)(0x01D02F84,DIK_RETURN);
    if (iVar5 != 0) {
      iVar8 = local_14;
    }
    iVar5 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,DIK_LSHIFT);
    if ((iVar5 == 0) &&
       (iVar5 = (*0x01D02F84->vtable->getAndClearKeyState)(0x01D02F84,DIK_TAB), iVar5 != 0)) {
      local_14 = local_14 + 1;
    }
    iVar5 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,DIK_LSHIFT);
    if ((iVar5 != 0) &&
       (iVar5 = (*0x01D02F84->vtable->getAndClearKeyState)(0x01D02F84,DIK_TAB), iVar5 != 0)) {
      local_14 = local_14 + -1;
    }
    if (local_14 < iVar2) {
      if (local_14 < 0) {
        local_14 = local_3c;
      }
    }
    else {
      local_14 = 0;
    }
    while (iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40(), iVar5 != 0) {
      iStack_10 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(0x01D02F84);
      cVar1 = (char)local_44->shortcut_key;
      pCVar10 = local_44;
      for (iVar5 = 0; (cVar1 != '\0' && (iVar5 < iVar2)); iVar5 = iVar5 + 1) {
        iVar9 = toupper((uint)(byte)pCVar10->shortcut_key);
        if (iVar9 == iStack_10) {
          iVar8 = iVar5;
        }
        cVar1 = (char)pCVar10[1].shortcut_key;
        pCVar10 = pCVar10 + 1;
      }
      if (iStack_10 == 0x1b) {
        iVar8 = -1;
      }
    }
    iVar5 = 0;
    pCVar10 = local_44;
    if (0 < iVar2) {
      do {
        iVar9 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(pCVar10);
        if (iVar9 != 0) {
          iVar8 = iVar5;
        }
        if (pCVar10 == _DAT_01c26410) {
          local_14 = iVar5;
        }
        iVar5 = iVar5 + 1;
        pCVar10 = pCVar10 + 1;
      } while (iVar5 < iVar2);
    }
    shape_edittool_cpp_FUN_0047e870(g_CEditorToolsPtr);
    iVar5 = 0;
    pCVar10 = local_44;
    if (0 < iVar2) {
      do {
        bVar12 = iVar5 == local_14;
        iVar5 = iVar5 + 1;
        shape_edittool_cpp_FUN_00484f20(pCVar10,bVar12);
        pCVar10 = pCVar10 + 1;
      } while (iVar5 < iVar2);
    }
    shape_edittool_cpp_FUN_0047f210(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  } while (iVar8 == -2);
  ptr = (void *)__vec_delete(local_44,&g_CEdButtonTypeInfo);
  FUN_005b7fce(ptr);
  DAT_006141cc = local_50;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
  return iVar8;
}
