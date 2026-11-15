// Name: engine_pod.cpp_FUN_00514bb0
// Address: 00514bb0
// Address Range: [[00514bb0, 00514c1c]]
// Convention: unknown
// Signature: int engine_pod_cpp_FUN_00514bb0(undefined4 param_1,char *param_2)

#include "nocturne.h"

int engine_pod_cpp_FUN_00514bb0(uint param_1,char *param_2)

{
  int iVar1;
  
  engine_pod_cpp_CPodFile_ctor_FUN_00512f00((CPodFile *)&stack0xfffffbd0);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00512fb0
                    ((CPodFile *)&stack0xfffffbd0,param_2,(char *)0x0);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_FUN_00513d20((CPodFile *)&stack0xfffffbd0);
    engine_pod_cpp_CPodFile_dtor_FUN_00512f70((CPodFile *)&stack0xfffffbd4,0);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_00512f70((CPodFile *)&stack0xfffffbd0,0);
  return 0;
}
