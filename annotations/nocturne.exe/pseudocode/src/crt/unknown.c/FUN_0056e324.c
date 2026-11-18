// Name: crt_unknown.c_FUN_0056e324
// Address: 0056e324
// Address Range: [[0056e324, 0056e37b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e324(void)

#include "nocturne.h"

void FUN_0056e324(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_02de5c14) {
    iVar2 = 0;
    do {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(g_PTR_02de5c18 + iVar2));
      puVar1 = (uint *)(g_PTR_02de5c18 + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      free((void *)*puVar1);
    } while (iVar3 < g_INT_02de5c14);
  }
  if (g_PTR_02de5c18 != (byte *)0x0) {
    free(g_PTR_02de5c18);
  }
  return;
}
