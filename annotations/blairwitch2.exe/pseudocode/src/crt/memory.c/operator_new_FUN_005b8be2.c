// Name: crt_memory.c_operator_new_FUN_005b8be2
// Address: 005b8be2
// Address Range: [[005b8be2, 005b8c24]]
// Convention: unknown
// Signature: void * crt_memory_c_operator_new_FUN_005b8be2(ulong param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * operator_new(ulong param_1)

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
    } while ((_DAT_026807cc != (code *)0x0) && (iVar2 = (*_DAT_026807cc)(param_1), iVar2 != 0));
    if (_DAT_026807c8 == (code *)0x0) break;
    (*_DAT_026807c8)();
  }
  return (void *)0x0;
}
