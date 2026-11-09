// Name: unkafter_winrun.cpp_FUN_0059085c
// Address: 0059085c
// Address Range: [[0059085c, 005908bc]]
// Convention: unknown
// Signature: float unkafter_winrun_cpp_FUN_0059085c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float unkafter_winrun_cpp_FUN_0059085c(void)

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
