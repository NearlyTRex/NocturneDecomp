// Name: unkafter_trisock.cpp_FUN_00579820
// Address: 00579820
// Address Range: [[00579820, 00579874]]
// Convention: unknown
// Signature: undefined4 unkafter_trisock_cpp_FUN_00579820(void *param_1)

#include "nocturne.h"

uint unkafter_trisock_cpp_FUN_00579820(void *param_1)

{
  int iVar1;
  uint uVar2;
  char acStack_100 [256];
  
  memset(param_1,0,0x2b8);
  iVar1 = gethostname(acStack_100,0x100);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = unkafter_trisock_cpp_FUN_00579720(acStack_100,param_1);
  return uVar2;
}
