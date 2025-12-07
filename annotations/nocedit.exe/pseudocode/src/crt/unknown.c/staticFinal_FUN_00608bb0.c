// Name: crt_unknown.c_staticFinal_FUN_00608bb0
// Address: 00608bb0
// Address Range: [[00608bb0, 00608bcb]]
// Convention: __cdecl
// Signature: void crt_unknown.c_staticFinal_FUN_00608bb0(void)

#include "nocturne.h"

void __cdecl crt_unknown_c_staticFinal_FUN_00608bb0(void)

{
  if (g_IOControlBlock != (SIOControlBlock *)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_IOControlBlock);
    g_IOControlBlock = (SIOControlBlock *)0x0;
  }
  return;
}
