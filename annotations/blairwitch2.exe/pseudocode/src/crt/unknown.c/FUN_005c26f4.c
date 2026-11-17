// Name: crt_unknown.c_FUN_005c26f4
// Address: 005c26f4
// Address Range: [[005c26f4, 005c274b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c26f4(void)

#include "nocturne.h"

void FUN_005c26f4(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_02681074) {
    iVar2 = 0;
    do {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(g_PTR_02681078 + iVar2));
      puVar1 = (uint *)(g_PTR_02681078 + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      debugFree((void *)*puVar1);
    } while (iVar3 < g_INT_02681074);
  }
  if (g_PTR_02681078 != (byte *)0x0) {
    debugFree(g_PTR_02681078);
  }
  return;
}
