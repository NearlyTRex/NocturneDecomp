// Name: engine_font.cpp_FUN_004c4d3e
// Address: 004c4d3e
// Address Range: [[004c4d3e, 004c4d75]]
// Convention: unknown
// Signature: int * engine_font_cpp_FUN_004c4d3e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_font_cpp_FUN_004c4d3e(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01cc8cec;
  iVar2 = 0;
  if (0 < _DAT_01cc8ce8) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xe;
    } while (iVar2 < _DAT_01cc8ce8);
  }
  return (int *)0x0;
}
