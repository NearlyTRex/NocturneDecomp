// Name: shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
// Address: 004a2bc0
// MANUAL RECONSTRUCTION
// Address Range: [[004a2bc0, 004a2cb6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insert_FUN_004a2bc0(CStrList *this_ptr,int insert_index,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insert_FUN_004a2bc0(CStrList *this_ptr,int insert_index,char *string_data)

{
  int iVar2;
  char *pcVar3;
  int iVar5;

  if ((insert_index < 0) || (this_ptr->item_count < insert_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2866;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::insert - invalid index");
  }
  iVar2 = this_ptr->item_count;
  iVar5 = iVar2 + 1;
  this_ptr->item_count = iVar5;
  if (this_ptr->capacity < iVar5) {
    shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(this_ptr,iVar2 + 0x15);
  }
  memmove
            (this_ptr->data_array + insert_index + 1,this_ptr->data_array + insert_index,
             (this_ptr->item_count - insert_index) * 4 - 4);
  pcVar3 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(strlen(string_data) + 1,"..\\shape\\edittool.cpp",2879);
  this_ptr->data_array[insert_index] = pcVar3;
  if (this_ptr->data_array[insert_index] == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2880;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::insert - out of memory");
  }
  strcpy(this_ptr->data_array[insert_index],string_data);
  return;
}
