// Name: engine_pod.cpp_FUN_0053ce50
// Address: 0053ce50
// Address Range: [[0053ce50, 0053cebc]]
// Convention: unknown
// Signature: int engine_pod_cpp_FUN_0053ce50(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

int engine_pod_cpp_FUN_0053ce50(uint param_1,uint param_2)

{
  int iVar1;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0((CPodFile *)&stack0xfffffbd0);
  iVar1 = engine_pod_cpp_FUN_0053b250(&stack0xfffffbd0,param_2,0);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_FUN_0053bfc0((CPodFile *)&stack0xfffffbd0);
    engine_pod_cpp_CPodFile_dtor_FUN_0053b210((CPodFile *)&stack0xfffffbd4,0);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0053b210((CPodFile *)&stack0xfffffbd0,0);
  return 0;
}
