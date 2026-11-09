// Name: shape_edittool.cpp_FUN_0049a980
// Address: 0049a980
// Address Range: [[0049a980, 0049a9ac]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_0049a980(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_FUN_0049a980(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  shape_edittool_cpp_FUN_0049b060(this_ptr,dialog_title,window_flags);
  *(int *)&this_ptr->field_0x194 = initial_selected_index;
  shape_edittool_cpp_FUN_0049be50(this_ptr);
  return;
}
