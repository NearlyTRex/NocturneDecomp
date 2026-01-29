// Name: crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
// Address: 0060a2d8
// Address Range: [[0060a2d8, 0060a333]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_tls_c_initialize_thread_tls_data_FUN_0060a2d8(void *init_param)

#include "nocturne.h"

BOOL __cdecl initialize_thread_tls_data(void *init_param)

{
  void *thread_param;
  BOOL BVar1;
  void *unaff_ESI;
  
  if (g_TLSIndex == 0xffffffff) {
    return 0;
  }
  thread_param = crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(unaff_ESI);
  BVar1 = 0;
  if (thread_param != (void *)0x0) {
    BVar1 = register_thread_data
                      (*(void **)((int)thread_param + 0xda),thread_param);
    if (BVar1 == 0) {
      free(thread_param);
      return 0;
    }
    (*g_TlsSetValueFunc)(g_TLSIndex,thread_param);
    BVar1 = 1;
  }
  return BVar1;
}
