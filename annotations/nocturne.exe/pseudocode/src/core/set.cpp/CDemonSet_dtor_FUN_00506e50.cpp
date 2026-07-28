// Name: core_set.cpp_CDemonSet_dtor_FUN_00506e50
// Address: 00506e50
// Address Range: [[00506e50, 00506eb0]]
// Convention: unknown
// Signature: int core_set_cpp_CDemonSet_dtor_FUN_00506e50(CDemonSet *param_1)

#include "nocturne.h"

int core_set_cpp_CDemonSet_dtor_FUN_00506e50(CDemonSet *param_1)

{
  int iVar1;
  
  core_set_cpp_CDemonSet_clear_FUN_00506ec0(param_1);
  iVar1 = core_set_cpp_FUN_0050eb60(&param_1->rooms[5].rotation_matrix,0);
  iVar1 = core_set_cpp_FUN_0050eb40(iVar1 + -0x554,0);
  iVar1 = core_set_cpp_FUN_0050eb20(iVar1 + -0x141490,0);
  iVar1 = core_set_cpp_FUN_0050eb00(iVar1 + -0x19644,0);
  return iVar1 + -4;
}
