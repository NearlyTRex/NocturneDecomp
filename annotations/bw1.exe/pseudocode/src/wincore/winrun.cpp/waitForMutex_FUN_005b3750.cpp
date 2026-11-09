// Name: wincore_winrun.cpp_waitForMutex_FUN_005b3750
// Address: 005b3750
// Address Range: [[005b3750, 005b376d]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_waitForMutex_FUN_005b3750(HANDLE mutex_handle)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_waitForMutex_FUN_005b3750(HANDLE mutex_handle)

{
  DWORD DVar1;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  DVar1 = WaitForSingleObject(mutex_handle,0xffffffff);
  return (uint)(DVar1 == 0);
}
