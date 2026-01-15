// Name: crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
// Address: 0060a334
// Address Range: [[0060a334, 0060a387]]
// Convention: __cdecl
// Signature: void crt_tls.c_cleanup_thread_tls_data_FUN_0060a334(int shutdownMode)

#include "nocturne.h"

void __cdecl crt_tls_c_cleanup_thread_tls_data_FUN_0060a334(int shutdownMode)

{
  HANDLE hObject;
  LPVOID pvVar1;
  
  if (g_TLSIndex != 0xffffffff) {
    pvVar1 = (*PTR_TlsGetValue_00611654)(g_TLSIndex);
    if (pvVar1 != (LPVOID)0x0) {
      hObject = *(HANDLE *)((int)pvVar1 + 0xde);
      crt_tls_c_unregister_thread_data_FUN_0060cc3c(*(void **)((int)pvVar1 + 0xda));
      (*PTR_TlsSetValue_00611658)(g_TLSIndex,(LPVOID)0x0);
      if ((hObject != (HANDLE)0x0) && (shutdownMode != 0)) {
        (*CloseHandle)(hObject);
      }
    }
  }
  return;
}
