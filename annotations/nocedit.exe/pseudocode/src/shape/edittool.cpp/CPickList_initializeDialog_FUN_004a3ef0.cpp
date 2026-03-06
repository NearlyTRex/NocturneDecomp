// Name: shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
// Address: 004a3ef0
// Address Range: [[004a3ef0, 004a3f1c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
            (this_ptr,dialog_title,window_flags);
  this_ptr->current_index = initial_selected_index;
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(this_ptr);
  return;
}
