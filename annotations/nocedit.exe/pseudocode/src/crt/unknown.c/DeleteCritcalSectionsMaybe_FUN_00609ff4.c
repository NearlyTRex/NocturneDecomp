// Name: crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4
// Address: 00609ff4
// Address Range: [[00609ff4, 0060a04b]]
// Convention: unknown
// Signature: void crt_unknown_c_DeleteCritcalSectionsMaybe_FUN_00609ff4(void)

#include "nocturne.h"

void DeleteCritcalSectionsMaybe(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_DynamicCriticalSectionCounter) {
    iVar2 = 0;
    do {
      (*g_DeleteCriticalSectionFunc)
                (*(LPCRITICAL_SECTION *)(iVar2 + (int)g_DynamicCriticalSectionArray));
      puVar1 = (uint *)(iVar2 + (int)g_DynamicCriticalSectionArray);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      free((void *)*puVar1);
    } while (iVar3 < (int)g_DynamicCriticalSectionCounter);
  }
  if (g_DynamicCriticalSectionArray != (LPCRITICAL_SECTION *)0x0) {
    free(g_DynamicCriticalSectionArray);
  }
  return;
}
