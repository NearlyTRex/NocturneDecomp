// Name: support_trisock.cpp_dnsRequestUnlink_FUN_00570fb0
// Address: 00570fb0
// Address Range: [[00570fb0, 0057102f]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_00570fb0(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_00570fb0(void *request)

{
  byte *puVar1;
  byte **ppuVar2;
  
  if (g_HANDLE_02cfd8a8 != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_00581930(g_HANDLE_02cfd8a8);
  }
  if (request == g_PTR_02cfd8b0) {
    g_PTR_02cfd8b0 = (byte *)0x0;
  }
  ppuVar2 = &g_PTR_02cfd8ac;
  puVar1 = g_PTR_02cfd8ac;
  do {
    if (puVar1 == (byte *)0x0) {
LAB_00570fef:
      *(uint *)((int)request + 0x3c0) = 0;
      if (g_HANDLE_02cfd8a8 == (HANDLE)0x0) {
        return;
      }
      wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cfd8a8);
      return;
    }
    if (request == *ppuVar2) {
      *ppuVar2 = *(byte **)(*ppuVar2 + 0x3c0);
      goto LAB_00570fef;
    }
    puVar1 = *(byte **)(*ppuVar2 + 0x3c0);
    ppuVar2 = (byte **)(*ppuVar2 + 0x3c0);
  } while( true );
}
