// Name: crt_unknown.c_FUN_005ad864
// Address: 005ad864
// Address Range: [[005ad864, 005ad8bb]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ad864(void)

#include "nocturne.h"

void FUN_005ad864(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_02d261b4) {
    iVar2 = 0;
    do {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(g_PTR_02d261b8 + iVar2));
      puVar1 = (uint *)(g_PTR_02d261b8 + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      debugFree((void *)*puVar1);
    } while (iVar3 < g_INT_02d261b4);
  }
  if (g_PTR_02d261b8 != (byte *)0x0) {
    debugFree(g_PTR_02d261b8);
  }
  return;
}
