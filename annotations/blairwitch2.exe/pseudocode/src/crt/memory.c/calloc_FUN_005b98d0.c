// Name: crt_memory.c_calloc_FUN_005b98d0
// Address: 005b98d0
// Address Range: [[005b98d0, 005b98f4]]
// Convention: unknown
// Signature: void crt_memory_c_calloc_FUN_005b98d0(int param_1,int param_2)

#include "nocturne.h"

void calloc(int param_1,int param_2)

{
  void *dest;
  
  dest = malloc(param_1 * param_2);
  if (dest != (void *)0x0) {
    memset(dest,0,param_1 * param_2);
  }
  return;
}
