// Name: unkafter_asgaya.cpp_FUN_005aded0
// Address: 005aded0
// Address Range: [[005aded0, 005adf09]]
// Convention: unknown
// Signature: void * unkafter_asgaya_cpp_FUN_005aded0(undefined4 param_1)

#include "nocturne.h"

void * unkafter_asgaya_cpp_FUN_005aded0(uint param_1)

{
  ulong size;
  int iVar1;
  void *pvVar2;
  
  iVar1 = unkafter_asgaya_cpp_FUN_005afd50(param_1);
  size = (iVar1 + 1) * 2;
  pvVar2 = FUN_005a3650(size);
  if (pvVar2 != (void *)0x0) {
    unkafter_asgaya_cpp_FUN_005afd80(pvVar2,param_1,size);
  }
  return pvVar2;
}
