// Name: crt_memory.c_operator_delete_FUN_00564494
// Address: 00564494
// Address Range: [[00564494, 005644a6]]
// Convention: __cdecl
// Signature: void __cdecl crt_memory_c_operator_delete_FUN_00564494(void *ptr)

#include "nocturne.h"

void __cdecl operator_delete(void *ptr)

{
  if (ptr == (void *)0x0) {
    return;
  }
  free(ptr);
  return;
}
