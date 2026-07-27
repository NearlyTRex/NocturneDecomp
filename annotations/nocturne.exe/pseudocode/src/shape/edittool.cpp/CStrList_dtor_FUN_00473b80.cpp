// Name: shape_edittool.cpp_CStrList_dtor_FUN_00473b80
// Address: 00473b80
// Address Range: [[00473b80, 00473bce]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00473b80(int param_1,byte param_2)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00473b80(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&g_CStrListTypeInfo_0059caf0);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_shape_edittool_cpp_CStrList_dtor_FUN_00473b80_0059ca74;
  shape_edittool_cpp_CStrList_clear_FUN_00473c50(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
