// Name: shape_edittool.cpp_CPickList_initializeDialog_FUN_00483520
// Address: 00483520
// Address Range: [[00483520, 0048354c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00483520(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00483520(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00483c00
            (this_ptr,dialog_title,window_flags);
  this_ptr->current_index = initial_selected_index;
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004849f0(this_ptr);
  return;
}
