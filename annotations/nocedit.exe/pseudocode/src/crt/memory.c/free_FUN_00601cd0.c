// Name: crt_memory.c_free_FUN_00601cd0
// Address: 00601cd0
// Address Range: [[00601cd0, 00601cdd]]
// Convention: __cdecl
// Signature: void __cdecl crt_memory_c_free_FUN_00601cd0(void *ptr)

#include "nocturne.h"

void __cdecl free(void *ptr)

{
  ValidateHeapIntegrity(ptr);
  return;
}
