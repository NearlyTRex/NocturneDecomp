// Name: engine_pod.cpp_FUN_00514bb0
// Address: 00514bb0
// Address Range: [[00514bb0, 00514c1c]]
// Convention: unknown
// Signature: undefined4 engine_pod_cpp_FUN_00514bb0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_00514bb0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  CPodFile CStack_430;
  
  engine_pod_cpp_CPodFile_ctor_FUN_00512f00(&CStack_430);
  iVar1 = engine_pod_cpp_FUN_00512fb0(&CStack_430,param_2,0);
  if (iVar1 != 0) {
    uVar2 = engine_pod_cpp_FUN_00513d20(&CStack_430);
    engine_pod_cpp_CPodFile_dtor_FUN_00512f70(&CStack_430,0);
    return uVar2;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_00512f70(&CStack_430,0);
  return 0;
}
