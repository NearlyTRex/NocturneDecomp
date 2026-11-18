// Name: support_trisock.cpp_dnsRequestUnlink_FUN_0057a980
// Address: 0057a980
// Address Range: [[0057a980, 0057a9ff]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_0057a980(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_0057a980(void *request)

{
  byte *puVar1;
  byte **ppuVar2;
  
  if (g_HANDLE_0265363c != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_0058fca0(g_HANDLE_0265363c);
  }
  if (request == g_PTR_02653644) {
    g_PTR_02653644 = (byte *)0x0;
  }
  ppuVar2 = &g_PTR_02653640;
  puVar1 = g_PTR_02653640;
  do {
    if (puVar1 == (byte *)0x0) {
LAB_0057a9bf:
      *(uint *)((int)request + 0x3c0) = 0;
      if (g_HANDLE_0265363c == (HANDLE)0x0) {
        return;
      }
      wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_HANDLE_0265363c);
      return;
    }
    if (request == *ppuVar2) {
      *ppuVar2 = *(byte **)(*ppuVar2 + 0x3c0);
      goto LAB_0057a9bf;
    }
    puVar1 = *(byte **)(*ppuVar2 + 0x3c0);
    ppuVar2 = (byte **)(*ppuVar2 + 0x3c0);
  } while( true );
}
