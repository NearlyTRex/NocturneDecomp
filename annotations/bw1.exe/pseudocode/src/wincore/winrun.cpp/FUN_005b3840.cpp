// Name: wincore_winrun.cpp_FUN_005b3840
// Address: 005b3840
// Address Range: [[005b3840, 005b3851]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_005b3840(HANDLE param_1)

#include "nocturne.h"

void wincore_winrun_cpp_FUN_005b3840(HANDLE param_1)

{
  if (param_1 == (HANDLE)0x0) {
    return;
  }
  CloseHandle(param_1);
  return;
}
