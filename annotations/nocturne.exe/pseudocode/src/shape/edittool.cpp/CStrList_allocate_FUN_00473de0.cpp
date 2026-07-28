// Name: shape_edittool.cpp_CStrList_allocate_FUN_00473de0
// Address: 00473de0
// Address Range: [[00473de0, 00473e8c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00473de0(CStrList *this_ptr,int new_capacity)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00473de0(CStrList *this_ptr,int new_capacity)

{
  char **ppcVar1;
  
  if (new_capacity < this_ptr->item_count) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x9d4;
    core_main_c_FUN_004c8440("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x9d5;
    core_main_c_FUN_004c8440("CStrList::allocate - invalid count: %d",new_capacity);
  }
  if (this_ptr->capacity < new_capacity) {
    this_ptr->capacity = new_capacity;
    ppcVar1 = (char **)realloc(this_ptr->data_array,new_capacity * 4);
    this_ptr->data_array = ppcVar1;
    if (ppcVar1 == (char **)0x0) {
      PTR_01cc4800 = "..\\shape\\edittool.cpp";
      INT_01cc4804 = 0x9d9;
      core_main_c_FUN_004c8440("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
