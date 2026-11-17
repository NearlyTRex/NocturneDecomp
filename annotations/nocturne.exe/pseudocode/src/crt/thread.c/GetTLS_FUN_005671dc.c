// Name: crt_thread.c_GetTLS_FUN_005671dc
// Address: 005671dc
// Address Range: [[005671dc, 005671e3]]
// Convention: __cdecl
// Signature: ThreadData * __cdecl crt_thread_c_GetTLS_FUN_005671dc(void)

#include "nocturne.h"

ThreadData * __cdecl GetTLS(void)

{
  return (ThreadData *)g_CurrentThreadTlsBlock;
}
