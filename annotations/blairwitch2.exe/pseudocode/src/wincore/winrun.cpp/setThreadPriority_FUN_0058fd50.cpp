// Name: wincore_winrun.cpp_setThreadPriority_FUN_0058fd50
// Address: 0058fd50
// Address Range: [[0058fd50, 0058fd8c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_0058fd50(HANDLE hThread,int priority_level)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_0058fd50(HANDLE hThread,int priority_level)

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
