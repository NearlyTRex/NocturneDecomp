// Name: shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70
// Address: 00474e70
// Address Range: [[00474e70, 00474e9c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(int param_1,uint param_2,uint param_3,uint param_4)

{
  shape_edittool_cpp_FUN_00475470(param_1,param_2,param_4);
  *(uint *)(param_1 + 0x118) = param_3;
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(param_1);
  return;
}
