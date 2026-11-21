// Name: shape_edittool.cpp_CStrList_allocate_FUN_00499600
// Address: 00499600
// Address Range: [[00499600, 004996ac]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00499600(CStrList *this_ptr,int new_capacity)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00499600(CStrList *this_ptr,int new_capacity)

{
  char **ppcVar1;
  
  if (new_capacity < this_ptr->item_count) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3141;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3142;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CStrList::allocate - invalid count: %d");
  }
  if (this_ptr->capacity < new_capacity) {
    this_ptr->capacity = new_capacity;
    ppcVar1 = (char **)realloc(this_ptr->data_array,new_capacity * 4);
    this_ptr->data_array = ppcVar1;
    if (ppcVar1 == (char **)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 3146;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
