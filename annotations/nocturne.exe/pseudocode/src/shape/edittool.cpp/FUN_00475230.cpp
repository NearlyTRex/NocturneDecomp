// Name: shape_edittool.cpp_FUN_00475230
// Address: 00475230
// Address Range: [[00475230, 0047546e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_00475230(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_00475230(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(this_ptr);
  if (*(int *)this_ptr->search_text_buffer != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040
                      (this_ptr,*(int *)(this_ptr->search_text_buffer + 0xc));
    if (iVar1 != 0) {
      return *(int *)(this_ptr->search_text_buffer + 0xc);
    }
    this_ptr->search_text_buffer[0] = '\0';
    this_ptr->search_text_buffer[1] = '\0';
    this_ptr->search_text_buffer[2] = '\0';
    this_ptr->search_text_buffer[3] = '\0';
  }
  iVar1 = (*(((this_ptr->base).vtable._up)->_up).handleInput)(this_ptr);
  if (iVar1 < 0) {
    return -1;
  }
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(this_ptr);
  if (*(int *)(this_ptr->ok_button_text + 0x34) != 0) {
    return -2;
  }
  if (*(int *)(this_ptr->search_text_buffer + 0x60) == 1) {
    *(uint *)(this_ptr->search_text_buffer + 0x2c) =
         *(uint *)(this_ptr->search_text_buffer + 0x10);
    *(int *)(this_ptr->search_text_buffer + 0x30) = (this_ptr->base).item_count;
    *(uint *)(this_ptr->search_text_buffer + 0x34) =
         *(uint *)(this_ptr->search_text_buffer + 0x18);
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920
              ((CEdScrollBar *)(this_ptr->search_text_buffer + 0x2c));
    iVar1 = *(int *)(this_ptr->search_text_buffer + 0x2c);
  }
  else {
    if (*(int *)(this_ptr->search_text_buffer + 0x60) != 2) goto LAB_004752e0;
    *(int *)(this_ptr->search_text_buffer + 0x2c) =
         *(int *)(this_ptr->search_text_buffer + 0x10) /
         *(int *)(this_ptr->search_text_buffer + 0x18);
    *(int *)(this_ptr->search_text_buffer + 0x30) =
         ((this_ptr->base).item_count + *(int *)(this_ptr->search_text_buffer + 0x18) + -1) /
         *(int *)(this_ptr->search_text_buffer + 0x18);
    *(uint *)(this_ptr->search_text_buffer + 0x34) =
         *(uint *)(this_ptr->search_text_buffer + 0x20);
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920
              ((CEdScrollBar *)(this_ptr->search_text_buffer + 0x2c));
    iVar1 = *(int *)(this_ptr->search_text_buffer + 0x2c) *
            *(int *)(this_ptr->search_text_buffer + 0x18);
  }
  *(int *)(this_ptr->search_text_buffer + 0x10) = iVar1;
LAB_004752e0:
  iVar1 = *(int *)(this_ptr->search_text_buffer + 0x18) *
          *(int *)(this_ptr->search_text_buffer + 0x20) +
          *(int *)(this_ptr->search_text_buffer + 0x10);
  if (iVar1 <= *(int *)(this_ptr->search_text_buffer + 0xc)) {
    *(int *)(this_ptr->search_text_buffer + 0xc) = iVar1 + -1;
  }
  if (*(int *)(this_ptr->search_text_buffer + 0xc) < *(int *)(this_ptr->search_text_buffer + 0x10))
  {
    *(int *)(this_ptr->search_text_buffer + 0xc) = *(int *)(this_ptr->search_text_buffer + 0x10);
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
                        (this_ptr,_DAT_01bd1d8c,_DAT_01bd1d90), -1 < iVar1)) {
    DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
    *(int *)(this_ptr->search_text_buffer + 0xc) = iVar1;
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    iVar3 = iVar2 - _DAT_01bcde1c;
    _DAT_01bcde1c = iVar2;
    if ((0 < iVar3) &&
       (((double)iVar3 < 294912 &&
        (_DAT_01bcde20 == *(int *)(this_ptr->search_text_buffer + 0xc))))) {
      this_ptr->search_text_buffer[0] = '\x01';
      this_ptr->search_text_buffer[1] = '\0';
      this_ptr->search_text_buffer[2] = '\0';
      this_ptr->search_text_buffer[3] = '\0';
    }
  }
  _DAT_01bcde20 = iVar1;
  return -2;
}
