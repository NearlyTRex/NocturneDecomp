// Name: crt_unknown.c_FUN_005a3650
// Address: 005a3650
// Address Range: [[005a3650, 005a365d]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c_FUN_005a3650(ulong size)

#include "nocturne.h"

void * __cdecl FUN_005a3650(ulong size)

{
  void *pvVar1;
  
  pvVar1 = InternalHeapAlloc(size);
  return pvVar1;
}
