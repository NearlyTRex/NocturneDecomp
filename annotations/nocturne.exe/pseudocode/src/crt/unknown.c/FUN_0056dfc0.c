// Name: crt_unknown.c_FUN_0056dfc0
// Address: 0056dfc0
// Address Range: [[0056dfc0, 0056e00c]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0056dfc0(void)

#include "nocturne.h"

uint FUN_0056dfc0(void)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)g_INT_005c1f58 < g_MaxHandleCount) {
    uVar1 = 0;
  }
  else {
    if (0 < g_INT_005c1f58) {
      iVar2 = 0;
      do {
        if (*(int *)((int)g_IOControlBlock->standard_handles + iVar2) == 0) {
          return 0;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < g_INT_005c1f58 * 4);
    }
    uVar1 = 1;
  }
  return uVar1;
}
