// Name: support_trisock.cpp_dnsRequestUnlink_FUN_0059dfc0
// Address: 0059dfc0
// Address Range: [[0059dfc0, 0059e03f]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_0059dfc0(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_0059dfc0(void *request)

{
  byte *puVar1;
  byte **ppuVar2;
  
  if (g_HANDLE_02c8ae58 != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_005b3750(g_HANDLE_02c8ae58);
  }
  if (request == g_PTR_02c8ae60) {
    g_PTR_02c8ae60 = (byte *)0x0;
  }
  ppuVar2 = &g_PTR_02c8ae5c;
  puVar1 = g_PTR_02c8ae5c;
  do {
    if (puVar1 == (byte *)0x0) {
LAB_0059dfff:
      *(uint *)((int)request + 0x3c0) = 0;
      if (g_HANDLE_02c8ae58 == (HANDLE)0x0) {
        return;
      }
      wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_HANDLE_02c8ae58);
      return;
    }
    if (request == *ppuVar2) {
      *ppuVar2 = *(byte **)(*ppuVar2 + 0x3c0);
      goto LAB_0059dfff;
    }
    puVar1 = *(byte **)(*ppuVar2 + 0x3c0);
    ppuVar2 = (byte **)(*ppuVar2 + 0x3c0);
  } while( true );
}
