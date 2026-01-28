// Name: shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
// Address: 004a2bc0
// Address Range: [[004a2bc0, 004a2cb6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insert_FUN_004a2bc0 (CStrList *this_ptr,int insert_index,char *string_data)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
          (CStrList *this_ptr,int insert_index,char *string_data)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((insert_index < 0) || (this_ptr->item_count < insert_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb32;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::insert - invalid index");
  }
  iVar2 = this_ptr->item_count;
  iVar5 = iVar2 + 1;
  this_ptr->item_count = iVar5;
  if (this_ptr->capacity < iVar5) {
    shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(this_ptr,iVar2 + 0x15);
  }
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr->data_array + insert_index + 1,this_ptr->data_array + insert_index,
             (this_ptr->item_count - insert_index) * 4 - 4);
  uVar4 = 0xffffffff;
  pcVar3 = string_data;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar4,"..\\shape\\edittool.cpp",0xb3f);
  this_ptr->data_array[insert_index] = pcVar3;
  if (this_ptr->data_array[insert_index] == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::insert - out of memory");
  }
  pcVar3 = this_ptr->data_array[insert_index];
  do {
    cVar1 = *string_data;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = string_data[1];
    string_data = string_data + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}
