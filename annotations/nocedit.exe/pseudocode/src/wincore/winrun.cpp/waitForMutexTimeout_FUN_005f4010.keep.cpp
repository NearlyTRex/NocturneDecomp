// Name: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
// Address: 005f4010
// MANUAL RECONSTRUCTION
// Address Range: [[005f4010, 005f404c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle,double timeout_seconds)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle,double timeout_seconds)

{
  DWORD DVar1;
  uint local_8;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  local_8 = (DWORD)(longlong)ROUND(ROUND(timeout_seconds * 1000));
  DVar1 = (*g_WaitForSingleObjectFunc)(mutex_handle,local_8);
  return (uint)(DVar1 == 0);
}
