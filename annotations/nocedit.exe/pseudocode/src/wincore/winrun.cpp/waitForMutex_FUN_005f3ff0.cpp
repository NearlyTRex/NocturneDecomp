// Name: wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
// Address: 005f3ff0
// Address Range: [[005f3ff0, 005f400d]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)

{
  DWORD DVar1;
  
  if (mutex_handle == (HANDLE)0x0) {
    return (int)mutex_handle;
  }
  DVar1 = (*WaitForSingleObject)(mutex_handle,0xffffffff);
  return (uint)(DVar1 == 0);
}
