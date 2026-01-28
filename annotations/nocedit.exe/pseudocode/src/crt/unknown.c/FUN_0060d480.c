// Name: crt_unknown.c_FUN_0060d480
// Address: 0060d480
// Address Range: [[0060d480, 0060d48b]]
// Convention: unknown
// Signature: undefined1 * crt_unknown_c_FUN_0060d480(void)

#include "nocturne.h"

byte * crt_unknown_c_FUN_0060d480(void)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  return (byte *)((int)&pTVar1->signal_handlers[0xd].flags + 2);
}
