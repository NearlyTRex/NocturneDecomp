// Name: shape_edittool.cpp_FUN_00473e90
// Address: 00473e90
// Address Range: [[00473e90, 00473eeb]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00473e90(int *param_1,int param_2,int *param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_00473e90(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  shape_edittool_cpp_CStrList_allocate_FUN_00473de0(param_1,*param_3 + *param_1);
  iVar3 = 0;
  if (*param_3 < 1) {
    return;
  }
  do {
    iVar1 = param_1[3];
    uVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_3,iVar3);
    iVar3 = iVar3 + 1;
    (**(code **)(iVar1 + 0xc))(param_1,param_2,uVar2);
    param_2 = param_2 + 1;
  } while (iVar3 < *param_3);
  return;
}
