// Name: shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
// Address: 004a3120
// Address Range: [[004a3120, 004a31ed]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120(CStrList * this_ptr, int index, char * new_string)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(CStrList *this_ptr,int index,char *new_string)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  int in_stack_00000014;
  
  bVar5 = 0;
  if ((index < 0) || (this_ptr->item_count <= index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc13;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::set - invalid index");
  }
  pcVar4 = new_string;
  if (new_string == (char *)0x0) {
    pcVar4 = &s_EmpyStringLiteral_006238a5;
  }
  uVar3 = 0xffffffff;
  pcVar2 = pcVar4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->data_array[(int)new_string],~uVar3,"..\\shape\\edittool.cpp",
                      0xc1b);
  this_ptr->data_array[(int)new_string] = pcVar2;
  if (this_ptr->data_array[(int)new_string] == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc1c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::set - out of memory!");
  }
  pcVar2 = this_ptr->data_array[in_stack_00000014];
  do {
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
