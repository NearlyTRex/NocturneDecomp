// Name: crt_memory.c_calloc_FUN_005c1cb0
// Address: 005c1cb0
// Address Range: [[005c1cb0, 005c1cd4]]
// Convention: unknown
// Signature: void crt_memory_c_calloc_FUN_005c1cb0(int param_1,int param_2)

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
