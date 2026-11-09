// Name: wincore_winrun.cpp_waitForMutexTimeout_FUN_005b3770
// Address: 005b3770
// Address Range: [[005b3770, 005b37ac]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_005b3770(HANDLE mutex_handle,double timeout_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_005b3770(HANDLE mutex_handle,double timeout_seconds)

{
  DWORD DVar1;
  HANDLE hHandle;
  float10 fVar2;
  uint local_8;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  fVar2 = (float10)timeout_seconds * (float10)_DAT_005f9e72;
  round();
  local_8 = (DWORD)(longlong)ROUND(fVar2);
  DVar1 = WaitForSingleObject(hHandle,local_8);
  return (uint)(DVar1 == 0);
}
