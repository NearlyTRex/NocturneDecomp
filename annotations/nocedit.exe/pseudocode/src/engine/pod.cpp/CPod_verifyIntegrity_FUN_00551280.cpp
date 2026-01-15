// Name: engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
// Address: 00551280
// Address Range: [[00551280, 005512ea]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280(CPod * this_ptr, char * pod_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280(CPod *this_ptr,char *pod_filename)

{
  int iVar1;
  CPodFile local_430;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_430);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_430,pod_filename);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230(&local_430);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_430);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_430);
  return 0;
}
