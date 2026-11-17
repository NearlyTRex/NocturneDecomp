// Name: crt_unknown.c_FUN_005c8b70
// Address: 005c8b70
// Address Range: [[005c8b70, 005c8bbc]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c8b70(void)

#include "nocturne.h"

uint FUN_005c8b70(void)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)g_INT_0062683c < g_MaxHandleCount) {
    uVar1 = 0;
  }
  else {
    if (0 < g_INT_0062683c) {
      iVar2 = 0;
      do {
        if (*(int *)((int)g_IOControlBlock->standard_handles + iVar2) == 0) {
          return 0;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < g_INT_0062683c * 4);
    }
    uVar1 = 1;
  }
  return uVar1;
}
