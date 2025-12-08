// Name: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
// Address: 005f4010
// Address Range: [[005f4010, 005f404c]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle, double timeout_seconds)

#include "nocturne.h"

int __cdecl
wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle,double timeout_seconds)

{
  DWORD DVar1;
  HANDLE hHandle;
  double dVar2;
  uint uStack_c;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  dVar2 = crt_math_c_round_FUN_005fe6b0(timeout_seconds * 1000);
  uStack_c = (DWORD)(longlong)ROUND(dVar2);
  DVar1 = (*WaitForSingleObject)(hHandle,uStack_c);
  return (uint)(DVar1 == 0);
}
