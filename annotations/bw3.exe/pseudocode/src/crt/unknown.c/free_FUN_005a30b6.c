// Name: crt_unknown.c_free_FUN_005a30b6
// Address: 005a30b6
// Address Range: [[005a30b6, 005a30c3]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_free_FUN_005a30b6(void *ptr)

#include "nocturne.h"

void __cdecl free(void *ptr)

{
  debugFreeChecked(ptr);
  return;
}
