// Name: shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0
// Address: 00474ea0
// Address Range: [[00474ea0, 00475229]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(CPickList *param_1)

#include "nocturne.h"

uint shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(CPickList *param_1)

{
  char *str1;
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  CPickList *pCVar6;
  int iVar7;
  byte bVar8;
  char cStack_14;
  
  bVar8 = 0;
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x1c);
  if ((iVar2 != 0) &&
     (iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040
                        (param_1,*(int *)(param_1->search_text_buffer + 0xc)), iVar2 != 0)) {
LAB_0047509f:
    param_1->search_text_buffer[0] = '\x01';
    param_1->search_text_buffer[1] = '\0';
    param_1->search_text_buffer[2] = '\0';
    param_1->search_text_buffer[3] = '\0';
    return 0;
  }
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(&param_1->base);
    }
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(&param_1->base);
    }
  }
  str1 = param_1->cancel_button_text;
  do {
    do {
      while( true ) {
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70();
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x48);
          if (iVar2 != 0) {
            iVar2 = *(int *)(param_1->search_text_buffer + 0xc);
            param_1->cancel_button_text[0] = '\0';
            *(int *)(param_1->search_text_buffer + 0xc) = iVar2 + -1;
          }
          iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x50);
          if (iVar2 != 0) {
            iVar2 = *(int *)(param_1->search_text_buffer + 0xc);
            param_1->cancel_button_text[0] = '\0';
            *(int *)(param_1->search_text_buffer + 0xc) = iVar2 + 1;
          }
          iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x47);
          if (iVar2 != 0) {
            param_1->cancel_button_text[0] = '\0';
            param_1->search_text_buffer[0xc] = '\0';
            param_1->search_text_buffer[0xd] = '\0';
            param_1->search_text_buffer[0xe] = '\0';
            param_1->search_text_buffer[0xf] = '\0';
          }
          iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4f);
          if (iVar2 != 0) {
            iVar2 = (param_1->base).item_count;
            param_1->cancel_button_text[0] = '\0';
            *(int *)(param_1->search_text_buffer + 0xc) = iVar2;
          }
          iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x49);
          if (iVar2 != 0) {
            iVar2 = *(int *)(param_1->search_text_buffer + 0xc);
            iVar7 = *(int *)(param_1->search_text_buffer + 0x14);
            iVar4 = *(int *)(param_1->search_text_buffer + 0x10);
            param_1->cancel_button_text[0] = '\0';
            *(int *)(param_1->search_text_buffer + 0xc) = iVar2 - iVar7;
            *(int *)(param_1->search_text_buffer + 0x10) =
                 iVar4 - *(int *)(param_1->search_text_buffer + 0x14);
          }
          iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x51);
          if (iVar2 != 0) {
            iVar2 = *(int *)(param_1->search_text_buffer + 0xc);
            iVar7 = *(int *)(param_1->search_text_buffer + 0x14);
            iVar4 = *(int *)(param_1->search_text_buffer + 0x10);
            param_1->cancel_button_text[0] = '\0';
            *(int *)(param_1->search_text_buffer + 0xc) = iVar2 + iVar7;
            *(int *)(param_1->search_text_buffer + 0x10) =
                 iVar4 + *(int *)(param_1->search_text_buffer + 0x14);
          }
          iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4b);
          if (iVar2 != 0) {
            iVar2 = *(int *)(param_1->search_text_buffer + 0xc);
            iVar7 = *(int *)(param_1->search_text_buffer + 0x18);
            param_1->cancel_button_text[0] = '\0';
            *(int *)(param_1->search_text_buffer + 0xc) = iVar2 - iVar7;
          }
          iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4d);
          if (iVar2 != 0) {
            iVar2 = *(int *)(param_1->search_text_buffer + 0xc);
            iVar7 = *(int *)(param_1->search_text_buffer + 0x18);
            param_1->cancel_button_text[0] = '\0';
            *(int *)(param_1->search_text_buffer + 0xc) = iVar2 + iVar7;
          }
          return 0;
        }
        iVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0((CKeys *)INT_005bac64);
        if (iVar2 == 8) {
          param_1->cancel_button_text[0] = '\0';
        }
        cVar1 = (char)param_1->tab_column_widths[1];
        if (cVar1 == '\0') break;
        pCVar6 = param_1;
        for (iVar7 = 0; (cVar1 != '\0' && (iVar7 < (param_1->base).item_count)); iVar7 = iVar7 + 1)
        {
          iVar4 = toupper((uint)(byte)pCVar6->tab_column_widths[1]);
          if (iVar4 == iVar2) {
            *(int *)(param_1->search_text_buffer + 0xc) = iVar7;
            shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(param_1);
            iVar4 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040
                              (param_1,*(int *)(param_1->search_text_buffer + 0xc));
            if (iVar4 != 0) goto LAB_0047509f;
          }
          cVar1 = *(char *)((int)pCVar6->tab_column_widths + 5);
          pCVar6 = (CPickList *)((int)&(pCVar6->base).item_count + 1);
        }
      }
      cStack_14 = (char)iVar2;
      if (((&DAT_005c168c)[(byte)(cStack_14 + 1)] & 0xe0) != 0) {
        uVar5 = 0xffffffff;
        pcVar3 = str1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        if (uVar5 - 1 < 99) {
          param_1->ok_button_text[uVar5 + 99] = cStack_14;
          param_1->cancel_button_text[uVar5] = '\0';
        }
      }
    } while (param_1->cancel_button_text[0] == '\0');
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                       (&param_1->base,*(int *)(param_1->search_text_buffer + 0xc));
    iVar2 = _stricmp(str1,pcVar3);
    if (iVar2 < 1) {
      param_1->search_text_buffer[0xc] = '\0';
      param_1->search_text_buffer[0xd] = '\0';
      param_1->search_text_buffer[0xe] = '\0';
      param_1->search_text_buffer[0xf] = '\0';
    }
    while (*(int *)(param_1->search_text_buffer + 0xc) < (param_1->base).item_count) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                         (&param_1->base,*(int *)(param_1->search_text_buffer + 0xc));
      iVar2 = _stricmp(str1,pcVar3);
      if (iVar2 < 1) break;
      *(int *)(param_1->search_text_buffer + 0xc) = *(int *)(param_1->search_text_buffer + 0xc) + 1;
    }
  } while( true );
}
