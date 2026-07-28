// Name: shape_edittool.cpp_CStrList_copy_FUN_00473bd0
// Address: 00473bd0
// Address Range: [[00473bd0, 00473bfa]]
// Convention: unknown
// Signature: CStrList * shape_edittool_cpp_CStrList_copy_FUN_00473bd0(CStrList *param_1,CStrList *param_2)

#include "nocturne.h"

CStrList * shape_edittool_cpp_CStrList_copy_FUN_00473bd0(CStrList *param_1,CStrList *param_2)

{
  param_1->vtable = (CStrList_vtable *)&PTR_shape_edittool_cpp_CStrList_dtor_FUN_00473b80_0059ca74;
  param_1->item_count = 0;
  param_1->data_array = (char **)0x0;
  shape_edittool_cpp_CStrList_copyFrom_FUN_00473c00(param_1,param_2);
  return param_1;
}
