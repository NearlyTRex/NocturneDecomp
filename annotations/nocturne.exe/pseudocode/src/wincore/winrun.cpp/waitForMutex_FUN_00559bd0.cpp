// Name: wincore_winrun.cpp_waitForMutex_FUN_00559bd0
// Address: 00559bd0
// Address Range: [[00559bd0, 00559bed]]
// Convention: __cdecl
// Signature: bool __cdecl wincore_winrun_cpp_waitForMutex_FUN_00559bd0(HANDLE param_1)

#include "nocturne.h"

bool __cdecl wincore_winrun_cpp_waitForMutex_FUN_00559bd0(HANDLE param_1)

{
  DWORD DVar1;
  
  if (param_1 == (HANDLE)0x0) {
    return false;
  }
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  return DVar1 == 0;
}
