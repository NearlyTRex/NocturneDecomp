// Name: crt_memory.c_free_FUN_005638d0
// Address: 005638d0
// Address Range: [[005638d0, 005638dd]]
// Convention: __cdecl
// Signature: void __cdecl crt_memory_c_free_FUN_005638d0(void *ptr)

#include "nocturne.h"

void __cdecl free(void *ptr)

{
  ValidateHeapIntegrity(ptr);
  return;
}
