// Name: wincore_winrun.cpp_FUN_00581a20
// Address: 00581a20
// Address Range: [[00581a20, 00581a31]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_00581a20(HANDLE param_1)

#include "nocturne.h"

void wincore_winrun_cpp_FUN_00581a20(HANDLE param_1)

{
  if (param_1 == (HANDLE)0x0) {
    return;
  }
  CloseHandle(param_1);
  return;
}
