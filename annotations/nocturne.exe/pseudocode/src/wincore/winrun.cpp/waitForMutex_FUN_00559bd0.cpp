// Name: wincore_winrun.cpp_waitForMutex_FUN_00559bd0
// Address: 00559bd0
// Address Range: [[00559bd0, 00559bed]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_waitForMutex_FUN_00559bd0(HANDLE mutex_handle)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_waitForMutex_FUN_00559bd0(HANDLE mutex_handle)

{
  DWORD DVar1;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  DVar1 = WaitForSingleObject(mutex_handle,0xffffffff);
  return (uint)(DVar1 == 0);
}
