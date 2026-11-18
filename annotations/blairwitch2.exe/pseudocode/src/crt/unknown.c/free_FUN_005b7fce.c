// Name: crt_unknown.c_free_FUN_005b7fce
// Address: 005b7fce
// Address Range: [[005b7fce, 005b7fdb]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_free_FUN_005b7fce(void *ptr)

#include "nocturne.h"

void __cdecl free(void *ptr)

{
  debugFreeChecked(ptr);
  return;
}
