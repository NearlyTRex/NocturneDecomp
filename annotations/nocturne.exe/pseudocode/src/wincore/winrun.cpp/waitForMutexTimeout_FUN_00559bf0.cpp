// Name: wincore_winrun.cpp_waitForMutexTimeout_FUN_00559bf0
// Address: 00559bf0
// Address Range: [[00559bf0, 00559c2c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_00559bf0(HANDLE mutex_handle,double timeout_seconds)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_00559bf0(HANDLE mutex_handle,double timeout_seconds)

{
  DWORD DVar1;
  double dVar2;
  uint uStack_c;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  dVar2 = round(timeout_seconds * 1000);
  uStack_c = (DWORD)(longlong)ROUND(dVar2);
  DVar1 = WaitForSingleObject(mutex_handle,uStack_c);
  return (uint)(DVar1 == 0);
}
