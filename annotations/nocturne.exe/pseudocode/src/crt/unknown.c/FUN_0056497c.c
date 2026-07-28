// Name: crt_unknown.c_FUN_0056497c
// Address: 0056497c
// Address Range: [[0056497c, 005649be]]
// Convention: unknown
// Signature: void * crt_unknown_c_FUN_0056497c(ulong param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_0056497c(ulong param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    do {
      pvVar1 = malloc(param_1);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
    } while ((_DAT_02de548c != (code *)0x0) && (iVar2 = (*_DAT_02de548c)(param_1), iVar2 != 0));
    if (_DAT_02de5488 == (code *)0x0) break;
    (*_DAT_02de5488)();
  }
  return (void *)0x0;
}
