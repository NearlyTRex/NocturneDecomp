// Name: crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
// Address: 005a3cb2
// Address Range: [[005a3cb2, 005a3cf4]]
// Convention: unknown
// Signature: void * crt_unknown_c_debugAllocTracked1_FUN_005a3cb2(ulong param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * debugAllocTracked1(ulong param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    do {
      pvVar1 = FUN_005a3650(param_1);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
    } while ((_DAT_02d2590c != (code *)0x0) && (iVar2 = (*_DAT_02d2590c)(param_1), iVar2 != 0));
    if (_DAT_02d25908 == (code *)0x0) break;
    (*_DAT_02d25908)();
  }
  return (void *)0x0;
}
