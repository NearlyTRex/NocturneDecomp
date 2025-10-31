// Name: crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388
// Address: 0060a388
// Address Range: [[0060a388, 0060a393]]
// Convention: __cdecl
// Signature: BOOL crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a45f [DATA]
// Function calls:
//   crt_tls.c_cleanup_thread_tls_data_FUN_0060a334

#include "nocturne.h"

BOOL __cdecl crt_tls_c_shutdown_tls_infrastructure_FUN_0060a388(void)

{
  BOOL extraout_EAX;
  BOOL BVar1;
  
  crt_tls_c_cleanup_thread_tls_data_FUN_0060a334(1);
  BVar1 = extraout_EAX;
  if (g_TLSIndex != 0xffffffff) {
    BVar1 = (*PTR_TlsFree_00611650)(g_TLSIndex);
    g_TLSIndex = 0xffffffff;
  }
  return BVar1;
}


// Assembly code:
// 0060a388: PUSH 0x1
//   Label: crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388
// 0060a38a: CALL crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
//   XREF to: 0060a334 (UNCONDITIONAL_CALL)
// 0060a38f: ADD ESP,0x4
// 0060a392: MOV EAX,EAX
