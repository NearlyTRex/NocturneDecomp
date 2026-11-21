// Name: shape_edittool.cpp_CStrList_allocate_FUN_00480fa0
// Address: 00480fa0
// Address Range: [[00480fa0, 0048104c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00480fa0(CStrList *this_ptr,int new_capacity)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00480fa0(CStrList *this_ptr,int new_capacity)

{
  char **ppcVar1;
  
  if (new_capacity < this_ptr->item_count) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3020;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3021;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CStrList::allocate - invalid count: %d");
  }
  if (this_ptr->capacity < new_capacity) {
    this_ptr->capacity = new_capacity;
    ppcVar1 = (char **)realloc(this_ptr->data_array,new_capacity * 4);
    this_ptr->data_array = ppcVar1;
    if (ppcVar1 == (char **)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 3025;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
