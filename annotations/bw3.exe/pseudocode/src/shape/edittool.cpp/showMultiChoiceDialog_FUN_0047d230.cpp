// Name: shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230
// Address: 0047d230
// Address Range: [[0047d230, 0047d8b1]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_showMultiChoiceDialog_FUN_0047d230(CStrList *str_list,char *dialog_title,int dialog_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_showMultiChoiceDialog_FUN_0047d230(CStrList *str_list,char *dialog_title,int dialog_mode)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  void *ptr;
  int iVar7;
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
  
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if ((dialog_title == (char *)0x0) || (iVar2 = *(int *)dialog_title, iVar2 < 1)) {
    return -1;
  }
  uVar3 = operator_new_array(iVar2 * 0xe4 + 4,iVar2,&g_CEdButtonTypeInfo);
  local_44 = (CEdButton *)__vec_new(uVar3);
  iVar9 = 0;
  local_18 = 0;
  pCVar10 = local_44;
  if (0 < iVar2) {
    do {
      local_20 = pCVar10;
      pcVar11 = local_150;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440((CStrList *)dialog_title,iVar9);
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
        if (*pcVar11 == '^') goto LAB_0047d33f;
        if (*pcVar11 == '\0') break;
        pcVar4 = pcVar11 + 1;
        if (*pcVar4 == '^') goto LAB_0047d33f;
        pcVar11 = pcVar11 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0047d33f:
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
        shape_edittool_cpp_CStrList_setStringAt_FUN_004825f0
                  ((CStrList *)dialog_title,iVar9,local_150);
      }
      iVar5 = shape_edittool_cpp_calculateButtonWidth_FUN_004864f0(local_150);
      if (local_18 < iVar5) {
        local_18 = iVar5;
      }
      local_20 = local_20 + 1;
      iVar9 = iVar9 + 1;
      pCVar10 = local_20;
    } while (iVar9 < iVar2);
  }
  iVar9 = shape_edittool_cpp_calculateButtonWidth_FUN_004864f0("Cancel");
  if (local_18 < iVar9) {
    local_18 = shape_edittool_cpp_calculateButtonWidth_FUN_004864f0("Cancel");
  }
  local_40 = (int)((DAT_005fba18 + (DAT_005fba18 >> 0x1f) * -0x80) -
                  (uint)((DAT_005fba18 >> 0x1f) << 6 < 0)) >> 7;
  iVar9 = DAT_005fba1c / 0x60;
  if (dialog_mode == 0) {
    iVar7 = local_40 + -2;
    iVar8 = local_18 * iVar2;
    iVar5 = shape_edittool_cpp_FUN_00486580((char *)0x0);
    iVar5 = iVar5 + -1;
    iVar7 = (iVar2 + -1) * iVar7 + iVar8 + 1;
  }
  else {
    iVar5 = shape_edittool_cpp_FUN_00486580((char *)0x0);
    iVar5 = (iVar9 + -2) * (iVar2 + -1) + iVar5 * iVar2;
    iVar7 = local_18;
  }
  iVar8 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(_DAT_01c5b0e0,(char *)str_list);
  if (iVar8 < iVar7) {
    iVar8 = iVar7;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (g_CEditorToolsPtr,iVar8,iVar5,(char *)str_list,0);
  local_2c = (((_DAT_01c6b5b0 - _DAT_01c6b5a8) + 1) - iVar7) / 2;
  iVar5 = 0;
  if (0 < iVar2) {
    local_34 = iVar9 + -1;
    local_38 = local_40 + -1;
    local_28 = 0;
    local_24 = 0;
    local_30 = local_18;
    local_1c = 0;
    pCVar10 = local_44;
    do {
      iVar9 = _DAT_01c6b5a8 + local_2c;
      if (dialog_mode == 0) {
        iVar9 = iVar9 + local_1c + local_24;
        iVar7 = shape_edittool_cpp_FUN_00486580((char *)0x0);
        local_4c = (_DAT_01c6b5b4 - iVar7) + 1;
        pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440
                            ((CStrList *)dialog_title,iVar5);
        iVar6 = local_18 + iVar9;
        iVar7 = local_4c;
        iVar8 = _DAT_01c6b5b4;
      }
      else {
        iVar7 = shape_edittool_cpp_FUN_00486580((char *)0x0);
        local_48 = iVar7 * iVar5 + _DAT_01c6b5ac + local_28 + -1;
        pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440
                            ((CStrList *)dialog_title,iVar5);
        iVar7 = shape_edittool_cpp_FUN_00486580((char *)0x0);
        iVar8 = iVar7 + local_48 + -1;
        iVar6 = local_18 + iVar9;
        iVar7 = local_48;
      }
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004860d0
                (pCVar10,iVar9,iVar7,iVar6 + -1,iVar8,pcVar11);
      pCVar10 = pCVar10 + 1;
      local_28 = local_28 + local_34;
      iVar5 = iVar5 + 1;
      local_24 = local_24 + local_38;
      local_1c = local_1c + local_30;
    } while (iVar5 < iVar2);
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  local_50 = DAT_005fba2c;
  DAT_005fba2c = 0x7f;
  local_14 = 0;
  local_3c = iVar2 + -1;
  iVar9 = -2;
  do {
    iVar5 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_RETURN);
    if (iVar5 != 0) {
      iVar9 = local_14;
    }
    iVar5 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,DIK_LSHIFT);
    if ((iVar5 == 0) &&
       (iVar5 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_TAB), iVar5 != 0)) {
      local_14 = local_14 + 1;
    }
    iVar5 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,DIK_LSHIFT);
    if ((iVar5 != 0) &&
       (iVar5 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_TAB), iVar5 != 0)) {
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
    if (_DAT_02d21b80 != 0) {
      iVar9 = -1;
      break;
    }
    while (iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800(), iVar5 != 0) {
      iStack_10 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004df590(0x01D70A78);
      cVar1 = (char)local_44->shortcut_key;
      pCVar10 = local_44;
      for (iVar5 = 0; (cVar1 != '\0' && (iVar5 < iVar2)); iVar5 = iVar5 + 1) {
        iVar7 = toupper((uint)(byte)pCVar10->shortcut_key);
        if (iVar7 == iStack_10) {
          iVar9 = iVar5;
        }
        cVar1 = (char)pCVar10[1].shortcut_key;
        pCVar10 = pCVar10 + 1;
      }
      if (iStack_10 == 0x1b) {
        iVar9 = -1;
      }
    }
    iVar5 = 0;
    pCVar10 = local_44;
    if (0 < iVar2) {
      do {
        iVar7 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440(pCVar10);
        if (iVar7 != 0) {
          iVar9 = iVar5;
        }
        if (pCVar10 == _DAT_01c5bb78) {
          local_14 = iVar5;
        }
        iVar5 = iVar5 + 1;
        pCVar10 = pCVar10 + 1;
      } while (iVar5 < iVar2);
    }
    shape_edittool_cpp_FUN_0047fa80(g_CEditorToolsPtr);
    iVar5 = 0;
    pCVar10 = local_44;
    if (0 < iVar2) {
      do {
        bVar12 = iVar5 == local_14;
        iVar5 = iVar5 + 1;
        shape_edittool_cpp_FUN_00486120(pCVar10,bVar12);
        pCVar10 = pCVar10 + 1;
      } while (iVar5 < iVar2);
    }
    shape_edittool_cpp_FUN_00480410(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  } while (iVar9 == -2);
  ptr = __vec_delete(local_44,&g_CEdButtonTypeInfo);
  FUN_005a30b6(ptr);
  DAT_005fba2c = local_50;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
  return iVar9;
}
