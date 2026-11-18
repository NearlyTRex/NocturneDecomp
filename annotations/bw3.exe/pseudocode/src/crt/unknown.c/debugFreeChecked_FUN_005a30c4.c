// Name: crt_unknown.c_debugFreeChecked_FUN_005a30c4
// Address: 005a30c4
// Address Range: [[005a30c4, 005a30d6]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_debugFreeChecked_FUN_005a30c4(void *ptr)

#include "nocturne.h"

void __cdecl debugFreeChecked(void *ptr)

{
  if (ptr == (void *)0x0) {
    return;
  }
  debugFree(ptr);
  return;
}
