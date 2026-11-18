// Name: crt_unknown.c_debugFreeChecked_FUN_005b7fdc
// Address: 005b7fdc
// Address Range: [[005b7fdc, 005b7fee]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_debugFreeChecked_FUN_005b7fdc(void *ptr)

#include "nocturne.h"

void __cdecl debugFreeChecked(void *ptr)

{
  if (ptr == (void *)0x0) {
    return;
  }
  debugFree(ptr);
  return;
}
