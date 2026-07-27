// Name: shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
// Address: 00474cf0
// Address Range: [[00474cf0, 00474d64]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(int param_1,byte param_2)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CPickListTypeInfo_0059cad0);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_shape_edittool_cpp_CPickList_dtor_FUN_00474cf0_0059ca94;
  shape_edittool_cpp_FUN_00476160(param_1);
  iVar1 = shape_edittool_cpp_FUN_00476490(param_1 + 0x138,0);
  iVar1 = shape_edittool_cpp_CStrList_dtor_FUN_00473b80(iVar1 + -0x138,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
