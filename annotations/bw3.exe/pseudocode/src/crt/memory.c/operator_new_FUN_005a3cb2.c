// Name: crt_memory.c_operator_new_FUN_005a3cb2
// Address: 005a3cb2
// Address Range: [[005a3cb2, 005a3cf4]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_operator_new_FUN_005a3cb2(uint size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl operator_new(uint size)

{
  void *pvVar1;
  int iVar2;
  
  if (size == 0) {
    size = 1;
  }
  while( true ) {
    do {
      pvVar1 = malloc(size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
    } while ((_DAT_02d2590c != (code *)0x0) && (iVar2 = (*_DAT_02d2590c)(size), iVar2 != 0));
    if (_DAT_02d25908 == (code *)0x0) break;
    (*_DAT_02d25908)();
  }
  return (void *)0x0;
}
