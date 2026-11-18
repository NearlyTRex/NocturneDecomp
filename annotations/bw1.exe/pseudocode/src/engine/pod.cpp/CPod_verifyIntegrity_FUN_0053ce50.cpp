// Name: engine_pod.cpp_CPod_verifyIntegrity_FUN_0053ce50
// Address: 0053ce50
// Address Range: [[0053ce50, 0053cebc]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_0053ce50(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_0053ce50(CPod *this_ptr,char *pod_filename)

{
  int iVar1;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0((CPodFile *)&stack0xfffffbd0);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0053b250
                    ((CPodFile *)&stack0xfffffbd0,pod_filename,(char *)0x0);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_0053bfc0((CPodFile *)&stack0xfffffbd0);
    engine_pod_cpp_CPodFile_dtor_FUN_0053b210((CPodFile *)&stack0xfffffbd4,0);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0053b210((CPodFile *)&stack0xfffffbd0,0);
  return 0;
}
