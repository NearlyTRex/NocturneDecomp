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
  double dVar2;
  uint uStack_c;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  dVar2 = round(timeout_seconds * _DAT_005f9e72);
  uStack_c = (DWORD)(longlong)ROUND(dVar2);
  DVar1 = WaitForSingleObject(mutex_handle,uStack_c);
  return (uint)(DVar1 == 0);
}
