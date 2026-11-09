// Name: support_trisock.cpp_FUN_0057a980
// Address: 0057a980
// Address Range: [[0057a980, 0057a9ff]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0057a980(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trisock_cpp_FUN_0057a980(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_0265363c != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_0058fca0(_DAT_0265363c);
  }
  if (param_1 == _DAT_02653644) {
    _DAT_02653644 = 0;
  }
  piVar2 = (int *)&DAT_02653640;
  iVar1 = _DAT_02653640;
  do {
    if (iVar1 == 0) {
LAB_0057a9bf:
      *(uint *)(param_1 + 0x3c0) = 0;
      if (_DAT_0265363c == (HANDLE)0x0) {
        return;
      }
      wincore_winrun_cpp_releaseMutex_FUN_0058fd00(_DAT_0265363c);
      return;
    }
    if (param_1 == *piVar2) {
      *piVar2 = *(int *)(*piVar2 + 0x3c0);
      goto LAB_0057a9bf;
    }
    iVar1 = *(int *)(*piVar2 + 0x3c0);
    piVar2 = (int *)(*piVar2 + 0x3c0);
  } while( true );
}
