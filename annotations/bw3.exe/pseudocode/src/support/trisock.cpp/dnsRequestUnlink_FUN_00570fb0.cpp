// Name: support_trisock.cpp_dnsRequestUnlink_FUN_00570fb0
// Address: 00570fb0
// Address Range: [[00570fb0, 0057102f]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_00570fb0(void *request)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_trisock_cpp_dnsRequestUnlink_FUN_00570fb0(void *request)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_02cfd8a8 != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_00581930(_DAT_02cfd8a8);
  }
  if (request == _DAT_02cfd8b0) {
    _DAT_02cfd8b0 = (void *)0x0;
  }
  piVar2 = (int *)&DAT_02cfd8ac;
  iVar1 = _DAT_02cfd8ac;
  do {
    if (iVar1 == 0) {
LAB_00570fef:
      *(uint *)((int)request + 0x3c0) = 0;
      if (_DAT_02cfd8a8 == (HANDLE)0x0) {
        return;
      }
      wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
      return;
    }
    if (request == (void *)*piVar2) {
      *piVar2 = *(int *)(*piVar2 + 0x3c0);
      goto LAB_00570fef;
    }
    iVar1 = *(int *)(*piVar2 + 0x3c0);
    piVar2 = (int *)(*piVar2 + 0x3c0);
  } while( true );
}
