// Name: shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
// Address: 004a2cc0
// Address Range: [[004a2cc0, 004a2d76]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0(CStrList * this_ptr, int new_capacity)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(CStrList *this_ptr,int new_capacity)

{
  char **ppcVar1;
  
  if (new_capacity < this_ptr->item_count) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb4c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb4d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::allocate - invalid count: %d",new_capacity);
  }
  if (this_ptr->capacity < new_capacity) {
    this_ptr->capacity = new_capacity;
    ppcVar1 = (char **)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (this_ptr->data_array,new_capacity * 4,
                                  "..\\shape\\edittool.cpp",0xb50);
    this_ptr->data_array = ppcVar1;
    if (ppcVar1 == (char **)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0xb51;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
