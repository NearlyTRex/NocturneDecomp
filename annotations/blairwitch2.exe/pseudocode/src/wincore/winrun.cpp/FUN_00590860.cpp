// Name: wincore_winrun.cpp_FUN_00590860
// Address: 00590860
// Address Range: [[00590860, 005908bc]]
// Convention: unknown
// Signature: float wincore_winrun_cpp_FUN_00590860(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float wincore_winrun_cpp_FUN_00590860(void)

{
  int *piVar1;
  float fStack_4;
  
  fStack_4 = _DAT_02664fa0;
  if (_DAT_02664fa4 < _DAT_02664fa0) {
    fStack_4 = _DAT_02664fa4;
  }
  piVar1 = (int *)0x26656c4;
  do {
    if ((*piVar1 != 0) && ((float)piVar1[0x2a] < fStack_4)) {
      fStack_4 = (float)piVar1[0x2a];
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != (int *)0x2665974);
  return fStack_4;
}
