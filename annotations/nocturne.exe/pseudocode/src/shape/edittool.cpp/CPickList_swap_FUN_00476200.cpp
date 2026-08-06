// Name: shape_edittool.cpp_CPickList_swap_FUN_00476200
// Address: 00476200
// Address Range: [[00476200, 00476251]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_swap_FUN_00476200(CPickList *this_ptr,int index1,int index2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_swap_FUN_00476200(CPickList *this_ptr,int index1,int index2)

{
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3637;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CPickList::swap - can't do this after enableing/disabling items (yet)");
  }
  shape_edittool_cpp_CStrList_swap_FUN_00474300(&this_ptr->base,index1,index2);
  return;
}
