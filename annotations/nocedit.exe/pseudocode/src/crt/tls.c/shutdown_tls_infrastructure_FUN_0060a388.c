// Name: crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388
// Address: 0060a388
// Address Range: [[0060a388, 0060a393]]
// Convention: __cdecl
// Signature: BOOL crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388(void)

#include "nocturne.h"

BOOL __cdecl crt_tls_c_shutdown_tls_infrastructure_FUN_0060a388(void)

{
  BOOL extraout_EAX;
  BOOL BVar1;
  
  crt_tls_c_cleanup_thread_tls_data_FUN_0060a334(1);
  BVar1 = extraout_EAX;
  if (g_TLSIndex != 0xffffffff) {
    BVar1 = (*g_TlsFreeFunc)(g_TLSIndex);
    g_TLSIndex = 0xffffffff;
  }
  return BVar1;
}
