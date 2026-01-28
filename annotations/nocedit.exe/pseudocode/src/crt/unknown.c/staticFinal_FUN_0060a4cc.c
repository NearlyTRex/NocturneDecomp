// Name: crt_unknown.c_staticFinal_FUN_0060a4cc
// Address: 0060a4cc
// Address Range: [[0060a4cc, 0060a559]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_staticFinal_FUN_0060a4cc(void)

#include "nocturne.h"

void __cdecl crt_unknown_c_staticFinal_FUN_0060a4cc(void)

{
  void **ppvVar1;
  
  ppvVar1 = &g_TlsDataBase;
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  do {
    (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
    ppvVar1 = (void **)((int)ppvVar1 + 0x10);
  } while ((ReentrantCriticalSection *)ppvVar1 != &g_GlobalMemoryCriticalSection);
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  crt_unknown_c_DeleteCritcalSectionsMaybe_FUN_00609ff4();
  crt_unknown_c_FUN_0060ccb4();
  crt_heap_c_CompactHeapBlocks_FUN_0060c920();
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  crt_unknown_c_FUN_00609fc8();
  crt_unknown_c_FUN_0060a394();
  return;
}
