// Name: FUN_004f9100
// Address: 004f9100
// Address Range: [[004f9100, 004f916a]]
// Convention: unknown
// Signature: undefined4 FUN_004f9100(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_004f9100(void)

{
  int iVar1;
  uint uVar2;
  uint in_stack_00000008;
  byte local_220 [540];
  
  FUN_004f7a80(local_220);
  iVar1 = FUN_004f7ae0(local_220,in_stack_00000008);
  if (iVar1 != 0) {
    uVar2 = FUN_004f8240(local_220);
    engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(local_220,0);
    return uVar2;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(local_220,0);
  return 0;
}
