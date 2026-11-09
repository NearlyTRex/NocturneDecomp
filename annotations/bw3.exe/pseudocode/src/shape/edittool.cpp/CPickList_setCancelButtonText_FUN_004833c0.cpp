// Name: shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004833c0
// Address: 004833c0
// Address Range: [[004833c0, 00483431]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004833c0(CPickList *this_ptr,char *text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004833c0(CPickList *this_ptr,char *text)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (text == (char *)0x0) {
    this_ptr->field_0xc0 = 0;
    return;
  }
  uVar2 = 0xffffffff;
  pcVar3 = text;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (99 < ~uVar2 - 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xec7;
    core_main_c_FUN_004e4330("CPickList::setCancelButtonText - too long!");
  }
  pcVar3 = &this_ptr->field_0xc0;
  do {
    cVar1 = *text;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = text[1];
    text = text + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}
