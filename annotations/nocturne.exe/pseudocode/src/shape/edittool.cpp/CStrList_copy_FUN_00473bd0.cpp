// Name: shape_edittool.cpp_CStrList_copy_FUN_00473bd0
// Address: 00473bd0
// Address Range: [[00473bd0, 00473bfa]]
// Convention: unknown
// Signature: undefined4 * shape_edittool_cpp_CStrList_copy_FUN_00473bd0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * shape_edittool_cpp_CStrList_copy_FUN_00473bd0(uint *param_1,uint param_2)

{
  param_1[3] = &PTR_shape_edittool_cpp_CStrList_dtor_FUN_00473b80_0059ca74;
  *param_1 = 0;
  param_1[2] = 0;
  shape_edittool_cpp_CStrList_copyFrom_FUN_00473c00(param_1,param_2);
  return param_1;
}
