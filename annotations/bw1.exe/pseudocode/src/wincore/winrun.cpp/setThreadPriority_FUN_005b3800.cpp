// Name: wincore_winrun.cpp_setThreadPriority_FUN_005b3800
// Address: 005b3800
// Address Range: [[005b3800, 005b383c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_005b3800(HANDLE hThread,int priority_level)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_005b3800(HANDLE hThread,int priority_level)

{
  int nPriority;
  BOOL BVar1;
  
  if ((uint)priority_level < 2) {
    if (priority_level == 0) {
      nPriority = -1;
    }
    else {
      nPriority = 0;
    }
  }
  else if ((uint)priority_level < 3) {
    nPriority = 1;
  }
  else if (priority_level == 3) {
    nPriority = 2;
  }
  else {
    nPriority = 0;
  }
  BVar1 = SetThreadPriority(hThread,nPriority);
  return BVar1;
}
