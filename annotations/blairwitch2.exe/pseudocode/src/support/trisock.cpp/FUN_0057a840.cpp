// Name: support_trisock.cpp_FUN_0057a840
// Address: 0057a840
// Address Range: [[0057a840, 0057a8af] [0057a906, 0057a93f]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0057a840(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trisock_cpp_FUN_0057a840(int param_1)

{
  int iVar1;
  int *piVar2;
  
  memset((void *)(param_1 + 0x104),0,0x2b8);
  if ((_DAT_0265363c == (HANDLE)0x0) &&
     (_DAT_0265363c = wincore_winrun_cpp_createMutex_FUN_0058fc90(), _DAT_0265363c == (HANDLE)0x0))
  {
    _DAT_01d046a0 = "..\\support\\trisock.cpp";
    _DAT_01d046a4 = 0x70a;
    core_main_c_FUN_004e4500("Can't create mutex");
  }
  wincore_winrun_cpp_waitForMutex_FUN_0058fca0(_DAT_0265363c);
  *(uint *)(param_1 + 0x3bc) = 1;
  piVar2 = (int *)&DAT_02653640;
  for (iVar1 = _DAT_02653640; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c0)) {
    iVar1 = *piVar2;
    piVar2 = (int *)(iVar1 + 0x3c0);
  }
  *piVar2 = param_1;
  *(uint *)(param_1 + 0x3c0) = 0;
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
