// Name: support_trisock.cpp_dnsRequestQueue_FUN_0057a840
// Address: 0057a840
// Address Range: [[0057a840, 0057a97c]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestQueue_FUN_0057a840(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestQueue_FUN_0057a840(void *request)

{
  byte *puVar1;
  byte **ppuVar2;
  
  memset((void *)((int)request + 0x104),0,0x2b8);
  if ((g_HANDLE_0265363c == (HANDLE)0x0) &&
     (g_HANDLE_0265363c = wincore_winrun_cpp_createMutex_FUN_0058fc90(),
     g_HANDLE_0265363c == (HANDLE)0x0)) {
    g_CurrentFilename = "..\\support\\trisock.cpp";
    g_CurrentLineNumber = 1802;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't create mutex");
  }
  wincore_winrun_cpp_waitForMutex_FUN_0058fca0(g_HANDLE_0265363c);
  *(uint *)((int)request + 0x3bc) = 1;
  ppuVar2 = &g_PTR_02653640;
  for (puVar1 = g_PTR_02653640; puVar1 != (byte *)0x0; puVar1 = *(byte **)(puVar1 + 0x3c0)
      ) {
    puVar1 = *ppuVar2;
    ppuVar2 = (byte **)(puVar1 + 0x3c0);
  }
  *ppuVar2 = request;
  *(uint *)((int)request + 0x3c0) = 0;
  while ((g_INT_02653648 != 0 && (g_INT_02653648 != 2))) {
    wincore_winrun_cpp_sleep_FUN_0058fd90(0.0);
  }
  if (g_INT_02653648 < 1) {
    g_INT_02653648 = 1;
    wincore_winrun_cpp_createThread_FUN_0058fd20
              (support_trisock_cpp_dnsLookupThreadProc_FUN_0057a480,(LPVOID)0x0);
    while (g_INT_02653648 == 1) {
      wincore_winrun_cpp_sleep_FUN_0058fd90(0.0);
    }
  }
  wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_HANDLE_0265363c);
  return;
}
