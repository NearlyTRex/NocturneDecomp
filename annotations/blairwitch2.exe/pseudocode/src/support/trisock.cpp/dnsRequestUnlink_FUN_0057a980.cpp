// Name: support_trisock.cpp_dnsRequestUnlink_FUN_0057a980
// Address: 0057a980
// Address Range: [[0057a980, 0057a9ff]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_0057a980(void *request)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_0057a980(void *request)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_0265363c != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_0058fca0(_DAT_0265363c);
  }
  if (request == _DAT_02653644) {
    _DAT_02653644 = (void *)0x0;
  }
  piVar2 = (int *)&DAT_02653640;
  iVar1 = _DAT_02653640;
  do {
    if (iVar1 == 0) {
LAB_0057a9bf:
      *(uint *)((int)request + 0x3c0) = 0;
      if (_DAT_0265363c == (HANDLE)0x0) {
        return;
      }
      wincore_winrun_cpp_releaseMutex_FUN_0058fd00(_DAT_0265363c);
      return;
    }
    if (request == (void *)*piVar2) {
      *piVar2 = *(int *)(*piVar2 + 0x3c0);
      goto LAB_0057a9bf;
    }
    iVar1 = *(int *)(*piVar2 + 0x3c0);
    piVar2 = (int *)(*piVar2 + 0x3c0);
  } while( true );
}
