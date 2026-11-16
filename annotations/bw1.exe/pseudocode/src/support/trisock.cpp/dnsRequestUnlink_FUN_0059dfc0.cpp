// Name: support_trisock.cpp_dnsRequestUnlink_FUN_0059dfc0
// Address: 0059dfc0
// Address Range: [[0059dfc0, 0059e03f]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_0059dfc0(void *request)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_0059dfc0(void *request)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_02c8ae58 != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_005b3750(_DAT_02c8ae58);
  }
  if (request == _DAT_02c8ae60) {
    _DAT_02c8ae60 = (void *)0x0;
  }
  piVar2 = (int *)&DAT_02c8ae5c;
  iVar1 = _DAT_02c8ae5c;
  do {
    if (iVar1 == 0) {
LAB_0059dfff:
      *(uint *)((int)request + 0x3c0) = 0;
      if (_DAT_02c8ae58 == (HANDLE)0x0) {
        return;
      }
      wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
      return;
    }
    if (request == (void *)*piVar2) {
      *piVar2 = *(int *)(*piVar2 + 0x3c0);
      goto LAB_0059dfff;
    }
    iVar1 = *(int *)(*piVar2 + 0x3c0);
    piVar2 = (int *)(*piVar2 + 0x3c0);
  } while( true );
}
