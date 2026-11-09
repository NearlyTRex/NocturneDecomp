// Name: support_trisock.cpp_FUN_0057a8b0
// Address: 0057a8b0
// Address Range: [[0057a8b0, 0057a905] [0057a940, 0057a97c]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0057a8b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trisock_cpp_FUN_0057a8b0(void)

{
  int *in_EAX;
  int unaff_EBX;
  
  *in_EAX = unaff_EBX;
  *(uint *)(unaff_EBX + 0x3c0) = 0;
  while ((_DAT_02653648 != 0 && (_DAT_02653648 != 2))) {
    wincore_winrun_cpp_sleep_FUN_0058fd90(0.0);
  }
  if (_DAT_02653648 < 1) {
    _DAT_02653648 = 1;
    wincore_winrun_cpp_createThread_FUN_0058fd20((LPTHREAD_START_ROUTINE)0x57a480,(LPVOID)0x0);
    while (_DAT_02653648 == 1) {
      wincore_winrun_cpp_sleep_FUN_0058fd90(0.0);
    }
  }
  wincore_winrun_cpp_releaseMutex_FUN_0058fd00(_DAT_0265363c);
  return;
}
