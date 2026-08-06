// Name: crt_memory.c_operator_new_FUN_0056497c
// Address: 0056497c
// Address Range: [[0056497c, 005649be]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_operator_new_FUN_0056497c(ulong size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl operator_new(ulong size)

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
    } while ((_DAT_02de548c != (code *)0x0) && (iVar2 = (*_DAT_02de548c)(size), iVar2 != 0));
    if (_DAT_02de5488 == (code *)0x0) break;
    (*_DAT_02de5488)();
  }
  return (void *)0x0;
}
