// Name: crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
// Address: 0060a2d8
// Address Range: [[0060a2d8, 0060a333]]
// Convention: __cdecl
// Signature: BOOL crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8(void * init_param)

#include "nocturne.h"

BOOL __cdecl crt_tls_c_initialize_thread_tls_data_FUN_0060a2d8(void *init_param)

{
  byte *thread_param;
  BOOL BVar1;
  void *unaff_ESI;
  
  if (g_TLSIndex == 0xffffffff) {
    return 0;
  }
  thread_param = (byte *)crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(unaff_ESI);
  if (thread_param != (byte *)0x0) {
    BVar1 = crt_tls_c_register_thread_data_FUN_0060cbd0
                      (*(void **)(thread_param + 0xda),thread_param);
    if (BVar1 == 0) {
      crt_memory_c_free_FUN_00601cd0(thread_param);
      return 0;
    }
    (*PTR_TlsSetValue_00611658)(g_TLSIndex,thread_param);
    thread_param = &DAT_00000001;
  }
  return (BOOL)thread_param;
}
