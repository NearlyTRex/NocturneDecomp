// Name: shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
// Address: 004a3ef0
// Address Range: [[004a3ef0, 004a3f1c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, int config_parameter)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
          (CPickList *this_ptr,char *dialog_title,int initial_selected_index,int config_parameter)

{
  shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
            (this_ptr,dialog_title,config_parameter);
  this_ptr->current_index = config_parameter;
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(this_ptr);
  return;
}
