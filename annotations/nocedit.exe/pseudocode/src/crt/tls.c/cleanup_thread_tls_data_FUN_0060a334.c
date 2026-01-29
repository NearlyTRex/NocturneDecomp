// Name: crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
// Address: 0060a334
// Address Range: [[0060a334, 0060a387]]
// Convention: __cdecl
// Signature: void __cdecl crt_tls_c_cleanup_thread_tls_data_FUN_0060a334(int shutdownMode)

#include "nocturne.h"

void __cdecl cleanup_thread_tls_data(int shutdownMode)

{
  HANDLE hObject;
  LPVOID pvVar1;
  
  if (g_TLSIndex != 0xffffffff) {
    pvVar1 = (*g_TlsGetValueFunc)(g_TLSIndex);
    if (pvVar1 != (LPVOID)0x0) {
      hObject = *(HANDLE *)((int)pvVar1 + 0xde);
      unregister_thread_data(*(void **)((int)pvVar1 + 0xda));
      (*g_TlsSetValueFunc)(g_TLSIndex,(LPVOID)0x0);
      if ((hObject != (HANDLE)0x0) && (shutdownMode != 0)) {
        (*g_CloseHandleFunc)(hObject);
      }
    }
  }
  return;
}
