// Name: crt_tls.c_create_thread_local_data_FUN_0060cac0
// Address: 0060cac0
// Address Range: [[0060cac0, 0060caf6]]
// Convention: __watcallRegister
// Signature: LPVOID __watcallRegister crt_tls_c_create_thread_local_data_FUN_0060cac0(void)

#include "nocturne.h"

LPVOID __watcallRegister create_thread_local_data(void)

{
  int iVar1;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)0x0;
  iVar1 = func_0x0060a2d8(0);
  if (iVar1 != 0) {
    pvVar2 = (*g_TlsGetValueFunc)(g_TLSIndex);
  }
  if (pvVar2 == (LPVOID)0x0) {
    HandleRuntimeError("Thread has no thread-specific data\r\n",1);
  }
  return pvVar2;
}
