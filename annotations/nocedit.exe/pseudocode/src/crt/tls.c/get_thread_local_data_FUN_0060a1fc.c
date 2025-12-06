// Name: crt_tls.c_get_thread_local_data_FUN_0060a1fc
// Address: 0060a1fc
// Address Range: [[0060a1fc, 0060a23b]]
// Convention: __cdecl
// Signature: LPVOID crt_tls.c_get_thread_local_data_FUN_0060a1fc(void)

#include "nocturne.h"

LPVOID __cdecl crt_tls_c_get_thread_local_data_FUN_0060a1fc(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = (*GetLastError)();
  pvVar1 = (*PTR_TlsGetValue_00611654)(g_TLSIndex);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = crt_tls_c_create_thread_local_data_FUN_0060cac0();
  }
  else if (*(char *)((int)pvVar1 + 0x53) != '\0') {
    pvVar1 = crt_tls_c_getThreadLocalData_FUN_0060caf8();
  }
  (*PTR_SetLastError_00611634)(dwErrCode);
  return pvVar1;
}
