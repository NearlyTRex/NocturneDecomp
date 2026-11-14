// Name: engine_pod.cpp_CPod_verifyIntegrity_FUN_0051b8d0
// Address: 0051b8d0
// Address Range: [[0051b8d0, 0051b93a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_0051b8d0(CPod *this_ptr,char *param_2)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_0051b8d0(CPod *this_ptr,char *param_2)

{
  int iVar1;
  uint uVar2;
  CPodFile CStack_430;
  
  engine_pod_cpp_CPodFile_ctor_FUN_00519e50(&CStack_430);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00(&CStack_430,param_2);
  if (iVar1 != 0) {
    uVar2 = engine_pod_cpp_FUN_0051aa80(&CStack_430);
    engine_pod_cpp_CPodFile_dtor_FUN_00519ec0(&CStack_430,0);
    return uVar2;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_00519ec0(&CStack_430,0);
  return 0;
}
