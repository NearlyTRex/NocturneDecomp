// Name: unkafter_winrun.cpp_FUN_00582500
// Address: 00582500
// Address Range: [[00582500, 00582575]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_00582500(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_winrun_cpp_FUN_00582500(float param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x2d22c24;
  _DAT_02d224f0 = _DAT_02d224f0 + param_1;
  _DAT_02d224f4 = _DAT_02d224f4 + param_1;
  do {
    while (*piVar1 != 0) {
      if (*piVar1 == 4) {
        piVar1[0x2a] = (int)_DAT_02d224f0;
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == (int *)0x2d22ed4) {
          return;
        }
      }
      else {
        piVar1[0x2a] = (int)((float)piVar1[0x2a] + param_1);
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == (int *)0x2d22ed4) {
          return;
        }
      }
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != (int *)0x2d22ed4);
  return;
}
