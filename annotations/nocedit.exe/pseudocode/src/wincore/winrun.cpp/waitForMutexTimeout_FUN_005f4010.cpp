// Name: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
// Address: 005f4010
// Address Range: [[005f4010, 005f404c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle,double timeout_seconds)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

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
