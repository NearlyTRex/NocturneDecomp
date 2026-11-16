// Name: crt_unknown.c_free_FUN_005c0336
// Address: 005c0336
// Address Range: [[005c0336, 005c0343]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_free_FUN_005c0336(void *ptr)

#include "nocturne.h"

void __cdecl free(void *ptr)

{
  debugFreeChecked(ptr);
  return;
}
