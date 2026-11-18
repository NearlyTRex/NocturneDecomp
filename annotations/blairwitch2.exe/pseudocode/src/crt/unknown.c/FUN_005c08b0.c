// Name: crt_unknown.c_FUN_005c08b0
// Address: 005c08b0
// Address Range: [[005c08b0, 005c08fc]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c08b0(void)

#include "nocturne.h"

uint FUN_005c08b0(void)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)g_INT_0061f4dc < g_MaxHandleCount) {
    uVar1 = 0;
  }
  else {
    if (0 < g_INT_0061f4dc) {
      iVar2 = 0;
      do {
        if (*(int *)((int)g_IOControlBlock->standard_handles + iVar2) == 0) {
          return 0;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < g_INT_0061f4dc * 4);
    }
    uVar1 = 1;
  }
  return uVar1;
}
