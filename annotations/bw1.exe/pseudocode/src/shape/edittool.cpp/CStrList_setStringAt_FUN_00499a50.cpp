// Name: shape_edittool.cpp_CStrList_setStringAt_FUN_00499a50
// Address: 00499a50
// Address Range: [[00499a50, 00499b13]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_00499a50(CStrList *this_ptr,int index,char *new_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_00499a50(CStrList *this_ptr,int index,char *new_string)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((index < 0) || (this_ptr->item_count <= index)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xd0c;
    core_main_c_FUN_005030e0("CStrList::set - invalid index");
  }
  if (new_string == (char *)0x0) {
    new_string = &DAT_005dc4f9;
  }
  uVar3 = 0xffffffff;
  pcVar2 = new_string;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)realloc(this_ptr->data_array[index],~uVar3);
  this_ptr->data_array[index] = pcVar2;
  if (this_ptr->data_array[index] == (char *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xd15;
    core_main_c_FUN_005030e0("CStrList::set - out of memory!");
  }
  pcVar2 = this_ptr->data_array[index];
  do {
    cVar1 = *new_string;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = new_string[1];
    new_string = new_string + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
