// Name: crt_sync.c_allocate_critical_section_FUN_00609f24
// Address: 00609f24
// Address Range: [[00609f24, 00609fc6]]
// Convention: __cdecl
// Signature: LPCRITICAL_SECTION __cdecl crt_sync_c_allocate_critical_section_FUN_00609f24(void)

#include "nocturne.h"

LPCRITICAL_SECTION __cdecl allocate_critical_section(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((int)g_StaticCriticalSectionCounter < SYSTEM_MAX_STATIC_CRITICAL_SECTIONS) {
    lpCriticalSection = g_StaticCriticalSectionArray + g_StaticCriticalSectionCounter;
    g_StaticCriticalSectionCounter = g_StaticCriticalSectionCounter + 1;
  }
  else {
    lpCriticalSection = calloc(1,SYSTEM_CRITICAL_SECTION_SIZE);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      HandleRuntimeError("Unable to allocate semaphore data\r\n",1);
    }
    g_DynamicCriticalSectionArray =
         realloc
                   (g_DynamicCriticalSectionArray,(g_DynamicCriticalSectionCounter + 1) * 4);
    if (g_DynamicCriticalSectionArray == (LPCRITICAL_SECTION *)0x0) {
      HandleRuntimeError("Unable to allocate semaphore data\r\n",1);
    }
    g_DynamicCriticalSectionArray[g_DynamicCriticalSectionCounter] = lpCriticalSection;
    g_DynamicCriticalSectionCounter = g_DynamicCriticalSectionCounter + 1;
  }
  (*g_InitializeCriticalSectionFunc)(lpCriticalSection);
  return lpCriticalSection;
}
