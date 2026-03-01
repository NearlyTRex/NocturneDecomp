// Name: shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
// Address: 004a3120
// Address Range: [[004a3120, 004a31ed]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(CStrList *this_ptr,int index,char *new_string)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(CStrList *this_ptr,int index,char *new_string)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((index < 0) || (this_ptr->item_count <= index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc13;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::set - invalid index");
  }
  if (new_string == (char *)0x0) {
    new_string = &s_EmptyChar_006238a5;
  }
  uVar3 = 0xffffffff;
  pcVar2 = new_string;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->data_array[index],~uVar3,"..\\shape\\edittool.cpp",0xc1b);
  this_ptr->data_array[index] = pcVar2;
  if (this_ptr->data_array[index] == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc1c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::set - out of memory!");
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
