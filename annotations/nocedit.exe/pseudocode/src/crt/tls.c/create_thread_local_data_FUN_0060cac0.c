// Name: crt_tls.c_create_thread_local_data_FUN_0060cac0
// Address: 0060cac0
// Address Range: [[0060cac0, 0060caf6]]
// Convention: __watcallRegister
// Signature: LPVOID crt_tls.c_create_thread_local_data_FUN_0060cac0(void)

#include "nocturne.h"

LPVOID crt_tls_c_create_thread_local_data_FUN_0060cac0(void)

{
  BOOL BVar1;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)0x0;
  BVar1 = crt_tls_c_initialize_thread_tls_data_FUN_0060a2d8((void *)0x0);
  if (BVar1 != 0) {
    pvVar2 = (*PTR_TlsGetValue_00611654)(g_TLSIndex);
  }
  if (pvVar2 == (LPVOID)0x0) {
    crt_startup_c_HandleRuntimeError_FUN_00606660("Thread has no thread-specific data\r\n",1);
  }
  return pvVar2;
}
