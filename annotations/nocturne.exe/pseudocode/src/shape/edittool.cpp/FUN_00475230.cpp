// Name: shape_edittool.cpp_FUN_00475230
// Address: 00475230
// Address Range: [[00475230, 0047546e]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_00475230(CPickList *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint shape_edittool_cpp_FUN_00475230(CPickList *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(param_1);
  if (*(int *)param_1->search_text_buffer != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040
                      (param_1,*(int *)(param_1->search_text_buffer + 0xc));
    if (iVar1 != 0) {
      return *(uint *)(param_1->search_text_buffer + 0xc);
    }
    param_1->search_text_buffer[0] = '\0';
    param_1->search_text_buffer[1] = '\0';
    param_1->search_text_buffer[2] = '\0';
    param_1->search_text_buffer[3] = '\0';
  }
  iVar1 = (*((param_1->base).vtable)->handleInput)(&param_1->base);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(param_1);
  if (*(int *)(param_1->ok_button_text + 0x34) != 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1->search_text_buffer + 0x60) == 1) {
    *(uint *)(param_1->search_text_buffer + 0x2c) =
         *(uint *)(param_1->search_text_buffer + 0x10);
    *(int *)(param_1->search_text_buffer + 0x30) = (param_1->base).item_count;
    *(uint *)(param_1->search_text_buffer + 0x34) =
         *(uint *)(param_1->search_text_buffer + 0x18);
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(param_1->search_text_buffer + 0x2c);
    iVar1 = *(int *)(param_1->search_text_buffer + 0x2c);
  }
  else {
    if (*(int *)(param_1->search_text_buffer + 0x60) != 2) goto LAB_004752e0;
    *(int *)(param_1->search_text_buffer + 0x2c) =
         *(int *)(param_1->search_text_buffer + 0x10) / *(int *)(param_1->search_text_buffer + 0x18)
    ;
    *(int *)(param_1->search_text_buffer + 0x30) =
         ((param_1->base).item_count + *(int *)(param_1->search_text_buffer + 0x18) + -1) /
         *(int *)(param_1->search_text_buffer + 0x18);
    *(uint *)(param_1->search_text_buffer + 0x34) =
         *(uint *)(param_1->search_text_buffer + 0x20);
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(param_1->search_text_buffer + 0x2c);
    iVar1 = *(int *)(param_1->search_text_buffer + 0x2c) *
            *(int *)(param_1->search_text_buffer + 0x18);
  }
  *(int *)(param_1->search_text_buffer + 0x10) = iVar1;
LAB_004752e0:
  iVar1 = *(int *)(param_1->search_text_buffer + 0x18) *
          *(int *)(param_1->search_text_buffer + 0x20) +
          *(int *)(param_1->search_text_buffer + 0x10);
  if (iVar1 <= *(int *)(param_1->search_text_buffer + 0xc)) {
    *(int *)(param_1->search_text_buffer + 0xc) = iVar1 + -1;
  }
  if (*(int *)(param_1->search_text_buffer + 0xc) < *(int *)(param_1->search_text_buffer + 0x10)) {
    *(int *)(param_1->search_text_buffer + 0xc) = *(int *)(param_1->search_text_buffer + 0x10);
  }
  iVar1 = _DAT_01bd1d8c;
  if (_DAT_01bd1d8c < _DAT_01c00c58) {
    iVar1 = _DAT_01c00c58;
  }
  if (_DAT_01c00c60 < iVar1) {
    iVar1 = _DAT_01c00c60;
  }
  iVar2 = _DAT_01bd1d90;
  if (_DAT_01bd1d90 < _DAT_01c00c5c) {
    iVar2 = _DAT_01c00c5c;
  }
  if (_DAT_01c00c64 < iVar2) {
    iVar2 = _DAT_01c00c64;
  }
  wincore_winrun_cpp_setCursorPosition_FUN_00558d60(iVar1,iVar2);
  iVar1 = _DAT_01bcde20;
  if (((DAT_01bd1d94 & 1) != 0) &&
     (iVar1 = shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00475f10
                        (param_1,_DAT_01bd1d8c,_DAT_01bd1d90), -1 < iVar1)) {
    DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
    *(int *)(param_1->search_text_buffer + 0xc) = iVar1;
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    iVar3 = iVar2 - _DAT_01bcde1c;
    _DAT_01bcde1c = iVar2;
    if ((0 < iVar3) &&
       (((double)iVar3 < 294912 &&
        (_DAT_01bcde20 == *(int *)(param_1->search_text_buffer + 0xc))))) {
      param_1->search_text_buffer[0] = '\x01';
      param_1->search_text_buffer[1] = '\0';
      param_1->search_text_buffer[2] = '\0';
      param_1->search_text_buffer[3] = '\0';
    }
  }
  _DAT_01bcde20 = iVar1;
  return 0xfffffffe;
}
