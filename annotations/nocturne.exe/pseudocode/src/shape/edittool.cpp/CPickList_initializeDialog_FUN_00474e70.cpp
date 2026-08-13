// Name: shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70
// Address: 00474e70
// Address Range: [[00474e70, 00474e9c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00475470
            (this_ptr,dialog_title,window_flags);
  this_ptr->current_index = initial_selected_index;
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(this_ptr);
  return;
}
