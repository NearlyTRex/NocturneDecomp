// Name: engine_pod.cpp_FUN_0053ce50
// Address: 0053ce50
// Address Range: [[0053ce50, 0053cebc]]
// Convention: unknown
// Signature: undefined4 engine_pod_cpp_FUN_0053ce50(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_0053ce50(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  CPodFile CStack_430;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0(&CStack_430);
  iVar1 = engine_pod_cpp_FUN_0053b250(&CStack_430,param_2,0);
  if (iVar1 != 0) {
    uVar2 = engine_pod_cpp_FUN_0053bfc0(&CStack_430);
    engine_pod_cpp_CPodFile_dtor_FUN_0053b210(&CStack_430,0);
    return uVar2;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0053b210(&CStack_430,0);
  return 0;
}
