// Name: crt_unknown.c_staticFinal_FUN_0060a4cc
// Address: 0060a4cc
// Address Range: [[0060a4cc, 0060a559]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_staticFinal_FUN_0060a4cc(void)

#include "nocturne.h"

void __cdecl staticFinal(void)

{
  void **ppvVar1;
  
  ppvVar1 = &g_TlsDataBase;
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)(&g_GlobalSystemCriticalSection);
  do {
    (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)(ppvVar1);
    ppvVar1 = (void **)((int)ppvVar1 + 0x10);
  } while ((ReentrantCriticalSection *)ppvVar1 != &g_GlobalMemoryCriticalSection);
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)(&g_GlobalRuntimeCriticalSection);
  DeleteCritcalSectionsMaybe();
  FUN_0060ccb4();
  CompactHeapBlocks();
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)(&g_GlobalMemoryCriticalSection);
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)(&g_GlobalThreadCriticalSection);
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)(&g_GlobalIoCriticalSection);
  (*PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)(&g_GlobalInitLock);
  FUN_00609fc8();
  FUN_0060a394();
  return;
}
