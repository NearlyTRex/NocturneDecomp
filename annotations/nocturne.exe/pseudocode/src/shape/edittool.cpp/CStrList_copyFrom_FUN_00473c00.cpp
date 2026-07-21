// Name: shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00
// Address: 00473c00
// Address Range: [[00473c00, 00473c4c]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_00473c00(int param_1,int *param_2)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_00473c00(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))(param_1);
  if (*param_2 < 1) {
    return param_1;
  }
  shape_edittool_cpp_CStrList_allocate_FUN_00473de0(param_1,*param_2);
  for (iVar2 = 0; iVar2 < *param_2; iVar2 = iVar2 + 1) {
    uVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_2,iVar2);
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(param_1,uVar1);
  }
  return param_1;
}
