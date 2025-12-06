// Name: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
// Address: 005f4010
// Address Range: [[005f4010, 005f404c]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle, double timeout_seconds)

#include "nocturne.h"

int __cdecl
wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle,double timeout_seconds)

{
  uint in_EAX;
  DWORD DVar1;
  float10 fVar2;
  double dVar3;
  uint uStack_4;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  fVar2 = (float10)timeout_seconds * (float10)1000;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(mutex_handle,in_EAX));
  uStack_4 = (DWORD)(longlong)ROUND(fVar2);
  DVar1 = (*WaitForSingleObject)((HANDLE)((ulonglong)dVar3 >> 0x20),uStack_4);
  return (uint)(DVar1 == 0);
}
