// Name: wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
// Address: 005f40a0
// Address Range: [[005f40a0, 005f40dc]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread, int priority_level)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread,int priority_level)

{
  int nPriority;
  
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
  (*SetThreadPriority)(hThread,nPriority);
  return;
}
