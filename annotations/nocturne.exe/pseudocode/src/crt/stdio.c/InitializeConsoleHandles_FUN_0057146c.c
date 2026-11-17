// Name: crt_stdio.c_InitializeConsoleHandles_FUN_0057146c
// Address: 0057146c
// Address Range: [[0057146c, 005714dc]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_stdio_c_InitializeConsoleHandles_FUN_0057146c(void)

#include "nocturne.h"

void __watcallRegister InitializeConsoleHandles(void)

{
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(0);
  if (g_HANDLE_005c20d0 == (HANDLE)0xffffffff) {
    g_HANDLE_005c20d0 =
         CreateFileA("conin$",0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  }
  if (g_HANDLE_005c20d4 == (HANDLE)0xffffffff) {
    g_HANDLE_005c20d4 =
         CreateFileA("conout$",0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(0);
  return;
}
