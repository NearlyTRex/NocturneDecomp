// Name: wincore_winrun.cpp_sleep_FUN_00559cc0
// Address: 00559cc0
// Address Range: [[00559cc0, 00559d15]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_00559cc0(double param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_sleep_FUN_00559cc0(double param_1)

{
  double dVar1;
  float10 fVar2;
  
  if (param_1 <= 0.0) {
    Sleep(0);
    return;
  }
  dVar1 = (double)ceil(param_1 * _DAT_00598149);
  fVar2 = (float10)round((float10)dVar1);
  Sleep((DWORD)(longlong)ROUND(fVar2));
  return;
}
