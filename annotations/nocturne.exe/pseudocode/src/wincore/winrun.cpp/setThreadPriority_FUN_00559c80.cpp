// Name: wincore_winrun.cpp_setThreadPriority_FUN_00559c80
// Address: 00559c80
// Address Range: [[00559c80, 00559cbc]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setThreadPriority_FUN_00559c80(HANDLE param_1,uint param_2)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setThreadPriority_FUN_00559c80(HANDLE param_1,uint param_2)

{
  int nPriority;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      nPriority = -1;
    }
    else {
      nPriority = 0;
    }
  }
  else if (param_2 < 3) {
    nPriority = 1;
  }
  else if (param_2 == 3) {
    nPriority = 2;
  }
  else {
    nPriority = 0;
  }
  SetThreadPriority(param_1,nPriority);
  return;
}
