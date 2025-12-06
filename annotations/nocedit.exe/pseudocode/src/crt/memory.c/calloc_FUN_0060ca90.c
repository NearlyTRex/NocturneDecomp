// Name: crt_memory.c_calloc_FUN_0060ca90
// Address: 0060ca90
// Address Range: [[0060ca90, 0060cab4]]
// Convention: __cdecl
// Signature: void * crt_memory.c_calloc_FUN_0060ca90(ulong count, ulong size)

#include "nocturne.h"

void * __cdecl crt_memory_c_calloc_FUN_0060ca90(ulong count,ulong size)

{
  void *dest;
  
  dest = crt_memory_c_malloc_FUN_00601bb0(count * size);
  if (dest != (void *)0x0) {
    dest = crt_memory_c_memset_FUN_005fde40(dest,0,count * size);
  }
  return dest;
}
