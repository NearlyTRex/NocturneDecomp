// Name: crt_thread.c_GetTLS_FUN_0060242c
// Address: 0060242c
// Address Range: [[0060242c, 00602433]]
// Convention: __cdecl
// Signature: ThreadData * crt_thread.c_GetTLS_FUN_0060242c(void)

#include "nocturne.h"

ThreadData * __cdecl crt_thread_c_GetTLS_FUN_0060242c(void)

{
  return (ThreadData *)g_CurrentThreadTlsBlock;
}
