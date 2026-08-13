// Name: engine_pod.cpp_CPod_verifyIntegrity_FUN_004f9100
// Address: 004f9100
// Address Range: [[004f9100, 004f916a]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_004f9100(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_004f9100(CPod *this_ptr,char *pod_filename)

{
  int iVar1;
  CPodFile local_220;
  
  engine_pod_cpp_CPodFile_ctor_FUN_004f7a80(&local_220);
  iVar1 = engine_pod_cpp_CPodFile_FUN_004f7ae0(&local_220,pod_filename);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_004f8240(&local_220);
    engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(&local_220,0);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(&local_220,0);
  return 0;
}
