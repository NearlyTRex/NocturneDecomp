// Name: support_trisock.cpp_FUN_00572290
// Address: 00572290
// Address Range: [[00572290, 005722e4]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_00572290(void *param_1)

#include "nocturne.h"

uint support_trisock_cpp_FUN_00572290(void *param_1)

{
  int iVar1;
  uint uVar2;
  char acStack_100 [256];
  
  memset(param_1,0,0x2b8);
  iVar1 = gethostname(acStack_100,0x100);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = support_trisock_cpp_FUN_00572190(acStack_100,param_1);
  return uVar2;
}
