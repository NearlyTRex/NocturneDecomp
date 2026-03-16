// Name: crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388
// Address: 0060a388
// Address Range: [[0060a388, 0060a393]]
// Convention: __cdecl
// Signature: void __cdecl crt_tls_c_shutdown_tls_infrastructure_FUN_0060a388(void)

#include "nocturne.h"

void __cdecl shutdown_tls_infrastructure(void)

{
  cleanup_thread_tls_data(1);
  if (g_TLSIndex != 0xffffffff) {
    (*g_TlsFreeFunc)(g_TLSIndex);
    g_TLSIndex = 0xffffffff;
  }
  return;
}
