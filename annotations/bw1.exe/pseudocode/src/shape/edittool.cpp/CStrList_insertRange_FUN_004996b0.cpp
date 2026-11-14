// Name: shape_edittool.cpp_CStrList_insertRange_FUN_004996b0
// Address: 004996b0
// Address Range: [[004996b0, 0049970b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_004996b0(CStrList *this_ptr,int param_2,CStrList *param_3)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_004996b0(CStrList *this_ptr,int param_2,CStrList *param_3)

{
  CStrList_vtable *pCVar1;
  char *string_data;
  int index;
  
  shape_edittool_cpp_CStrList_allocate_FUN_00499600
            (this_ptr,param_3->item_count + this_ptr->item_count);
  index = 0;
  if (param_3->item_count < 1) {
    return;
  }
  do {
    pCVar1 = (this_ptr->vtable)._us;
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(param_3,index);
    index = index + 1;
    (*pCVar1->insert)(this_ptr,param_2,string_data);
    param_2 = param_2 + 1;
  } while (index < param_3->item_count);
  return;
}
