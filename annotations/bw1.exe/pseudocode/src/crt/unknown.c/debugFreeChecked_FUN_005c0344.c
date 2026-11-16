// Name: crt_unknown.c_debugFreeChecked_FUN_005c0344
// Address: 005c0344
// Address Range: [[005c0344, 005c0356]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_debugFreeChecked_FUN_005c0344(void *ptr)

#include "nocturne.h"

void __cdecl debugFreeChecked(void *ptr)

{
  if (ptr == (void *)0x0) {
    return;
  }
  debugFree(ptr);
  return;
}
