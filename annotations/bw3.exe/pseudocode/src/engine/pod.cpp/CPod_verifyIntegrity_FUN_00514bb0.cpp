// Name: engine_pod.cpp_CPod_verifyIntegrity_FUN_00514bb0
// Address: 00514bb0
// Address Range: [[00514bb0, 00514c1c]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_00514bb0(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_00514bb0(CPod *this_ptr,char *pod_filename)

{
  int iVar1;
  
  engine_pod_cpp_CPodFile_ctor_FUN_00512f00((CPodFile *)&stack0xfffffbd0);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00512fb0
                    ((CPodFile *)&stack0xfffffbd0,pod_filename,(char *)0x0);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_00513d20((CPodFile *)&stack0xfffffbd0);
    engine_pod_cpp_CPodFile_dtor_FUN_00512f70((CPodFile *)&stack0xfffffbd4,0);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_00512f70((CPodFile *)&stack0xfffffbd0,0);
  return 0;
}
