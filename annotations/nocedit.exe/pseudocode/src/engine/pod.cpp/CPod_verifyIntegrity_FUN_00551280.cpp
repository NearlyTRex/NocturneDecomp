// Name: engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
// Address: 00551280
// Address Range: [[00551280, 005512ea]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280(CPod * this_ptr, char * pod_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280(CPod *this_ptr,char *pod_filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_0000000c;
  int iStack_428;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffffbd0);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xfffffbd4,in_stack_0000000c);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230((CPodFile *)&iStack_428);
    iStack_428 = 0;
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffffbdc);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&iStack_428);
  return 0;
}
