// Name: shape_edittool.cpp_CStrList_insert_FUN_00473cf0
// Address: 00473cf0
// Address Range: [[00473cf0, 00473ddc]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insert_FUN_00473cf0(CStrList *this_ptr,int insert_index,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insert_FUN_00473cf0(CStrList *this_ptr,int insert_index,char *string_data)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((insert_index < 0) || (this_ptr->item_count < insert_index)) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0x9ba;
    core_main_c_FUN_004c8440("CStrList::insert - invalid index");
  }
  iVar2 = this_ptr->item_count;
  iVar5 = iVar2 + 1;
  this_ptr->item_count = iVar5;
  if (this_ptr->capacity < iVar5) {
    shape_edittool_cpp_CStrList_allocate_FUN_00473de0(this_ptr,iVar2 + 0x15);
  }
  memmove
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
  pcVar3 = (char *)malloc(~uVar4);
  this_ptr->data_array[insert_index] = pcVar3;
  if (this_ptr->data_array[insert_index] == (char *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0x9c8;
    core_main_c_FUN_004c8440("CStrList::insert - out of memory");
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
