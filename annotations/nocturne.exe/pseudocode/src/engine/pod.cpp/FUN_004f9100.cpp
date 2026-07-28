// Name: engine_pod.cpp_FUN_004f9100
// Address: 004f9100
// Address Range: [[004f9100, 004f916a]]
// Convention: unknown
// Signature: int engine_pod_cpp_FUN_004f9100(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int engine_pod_cpp_FUN_004f9100(void)

{
  int iVar1;
  uint in_stack_00000008;
  byte local_220 [540];
  
  engine_pod_cpp_FUN_004f7a80(local_220);
  iVar1 = engine_pod_cpp_FUN_004f7ae0(local_220,in_stack_00000008);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_004f8240((CPodFile *)local_220);
    engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0((CPodFile *)local_220,0);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0((CPodFile *)local_220,0);
  return 0;
}
