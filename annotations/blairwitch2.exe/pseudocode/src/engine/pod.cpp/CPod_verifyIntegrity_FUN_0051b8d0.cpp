// Name: engine_pod.cpp_CPod_verifyIntegrity_FUN_0051b8d0
// Address: 0051b8d0
// Address Range: [[0051b8d0, 0051b93a]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_0051b8d0(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_0051b8d0(CPod *this_ptr,char *pod_filename)

{
  int iVar1;
  
  engine_pod_cpp_CPodFile_ctor_FUN_00519e50((CPodFile *)&stack0xfffffbd0);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00
                    ((CPodFile *)&stack0xfffffbd0,pod_filename);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_0051aa80((CPodFile *)&stack0xfffffbd0);
    engine_pod_cpp_CPodFile_dtor_FUN_00519ec0((CPodFile *)&stack0xfffffbd4,0);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_00519ec0((CPodFile *)&stack0xfffffbd0,0);
  return 0;
}
