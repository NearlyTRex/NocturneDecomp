// Name: wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
// Address: 005f40a0
// Address Range: [[005f40a0, 005f40dc]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread,int priority_level)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread,int priority_level)

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
  BVar1 = (*g_SetThreadPriorityFunc)(hThread,nPriority);
  return BVar1;
}
