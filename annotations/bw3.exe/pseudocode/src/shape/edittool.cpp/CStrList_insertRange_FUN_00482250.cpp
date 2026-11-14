// Name: shape_edittool.cpp_CStrList_insertRange_FUN_00482250
// Address: 00482250
// Address Range: [[00482250, 004822ab]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00482250(CStrList *this_ptr,int param_2,CStrList *param_3)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00482250(CStrList *this_ptr,int param_2,CStrList *param_3)

{
  CStrList_vtable *pCVar1;
  char *string_data;
  int index;
  
  shape_edittool_cpp_CStrList_allocate_FUN_004821a0
            (this_ptr,param_3->item_count + this_ptr->item_count);
  index = 0;
  if (param_3->item_count < 1) {
    return;
  }
  do {
    pCVar1 = (this_ptr->vtable)._us;
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(param_3,index);
    index = index + 1;
    (*pCVar1->insert)(this_ptr,param_2,string_data);
    param_2 = param_2 + 1;
  } while (index < param_3->item_count);
  return;
}
