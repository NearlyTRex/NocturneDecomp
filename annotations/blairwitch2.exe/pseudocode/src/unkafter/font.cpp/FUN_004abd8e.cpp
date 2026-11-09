// Name: unkafter_font.cpp_FUN_004abd8e
// Address: 004abd8e
// Address Range: [[004abd8e, 004abdc5]]
// Convention: unknown
// Signature: int * unkafter_font_cpp_FUN_004abd8e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * unkafter_font_cpp_FUN_004abd8e(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01cb025c;
  iVar2 = 0;
  if (0 < _DAT_01cb0258) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xe;
    } while (iVar2 < _DAT_01cb0258);
  }
  return (int *)0x0;
}
