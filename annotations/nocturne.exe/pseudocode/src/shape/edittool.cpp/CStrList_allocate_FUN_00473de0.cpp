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
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2516;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2517;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CStrList::allocate - invalid count: %d",new_capacity);
  }
  if (this_ptr->capacity < new_capacity) {
    this_ptr->capacity = new_capacity;
    ppcVar1 = (char **)realloc(this_ptr->data_array,new_capacity * 4);
    this_ptr->data_array = ppcVar1;
    if (ppcVar1 == (char **)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 2521;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
