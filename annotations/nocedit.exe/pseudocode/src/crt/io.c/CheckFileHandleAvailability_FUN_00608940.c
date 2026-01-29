// Name: crt_io.c_CheckFileHandleAvailability_FUN_00608940
// Address: 00608940
// Address Range: [[00608940, 0060898c]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_CheckFileHandleAvailability_FUN_00608940(void)

#include "nocturne.h"

int __cdecl CheckFileHandleAvailability(void)

{
  int iVar1;
  
  if ((uint)g_CurrentHandleCount < g_MaxHandleCount) {
    iVar1 = 0;
  }
  else {
    if (0 < g_CurrentHandleCount) {
      iVar1 = 0;
      do {
        if (*(int *)((int)g_IOControlBlock->standard_handles + iVar1) == 0) {
          return 0;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < g_CurrentHandleCount * 4);
    }
    iVar1 = 1;
  }
  return iVar1;
}
