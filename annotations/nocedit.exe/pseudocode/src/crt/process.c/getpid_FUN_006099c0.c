// Name: crt_process.c_getpid_FUN_006099c0
// Address: 006099c0
// Address Range: [[006099c0, 006099c7]]
// Convention: __cdecl
// Signature: void __cdecl crt_process_c_getpid_FUN_006099c0(void)

#include "nocturne.h"

void __cdecl getpid(void)

{
  (*g_GetCurrentProcessIdFunc)();
  return;
}
