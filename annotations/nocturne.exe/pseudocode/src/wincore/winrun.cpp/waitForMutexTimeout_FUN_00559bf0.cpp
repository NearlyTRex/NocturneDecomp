// Name: wincore_winrun.cpp_waitForMutexTimeout_FUN_00559bf0
// Address: 00559bf0
// Address Range: [[00559bf0, 00559c2c]]
// Convention: __cdecl
// Signature: bool __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_00559bf0(HANDLE param_1,double param_2)

#include "nocturne.h"

bool __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_00559bf0(HANDLE param_1,double param_2)

{
  DWORD DVar1;
  float10 fVar2;
  uint uStack_c;
  
  if (param_1 == (HANDLE)0x0) {
    return false;
  }
  fVar2 = (float10)round((float10)param_2 * (float10)1000);
  uStack_c = (DWORD)(longlong)ROUND(fVar2);
  DVar1 = WaitForSingleObject(param_1,uStack_c);
  return DVar1 == 0;
}
