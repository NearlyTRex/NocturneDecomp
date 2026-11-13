// Name: wincore_winrun.cpp_FUN_00582580
// Address: 00582580
// Address Range: [[00582580, 005825dc]]
// Convention: unknown
// Signature: float wincore_winrun_cpp_FUN_00582580(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float wincore_winrun_cpp_FUN_00582580(void)

{
  int *piVar1;
  float fStack_4;
  
  fStack_4 = _DAT_02d224f0;
  if (_DAT_02d224f4 < _DAT_02d224f0) {
    fStack_4 = _DAT_02d224f4;
  }
  piVar1 = (int *)0x2d22c24;
  do {
    if ((*piVar1 != 0) && ((float)piVar1[0x2a] < fStack_4)) {
      fStack_4 = (float)piVar1[0x2a];
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != (int *)0x2d22ed4);
  return fStack_4;
}
