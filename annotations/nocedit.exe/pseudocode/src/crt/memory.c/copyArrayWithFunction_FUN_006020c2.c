// Name: crt_memory.c_copyArrayWithFunction_FUN_006020c2
// Address: 006020c2
// Address Range: [[006020c2, 006020fa]]
// Convention: __cdecl
// Signature: void * crt_memory.c_copyArrayWithFunction_FUN_006020c2(void * dest, void * source, int count, int element_size, void * copy_func)

#include "nocturne.h"

void * __cdecl
crt_memory_c_copyArrayWithFunction_FUN_006020c2
          (void *dest,void *source,int count,int element_size,void *copy_func)

{
  for (; count != 0; count = count + -1) {
    (*(code *)copy_func)();
  }
  return dest;
}
