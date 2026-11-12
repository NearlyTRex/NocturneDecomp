// Name: engine_font.cpp_FUN_004b391e
// Address: 004b391e
// Address Range: [[004b391e, 004b3955]]
// Convention: unknown
// Signature: int * engine_font_cpp_FUN_004b391e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_font_cpp_FUN_004b391e(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01d1ad7c;
  iVar2 = 0;
  if (0 < _DAT_01d1ad78) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xe;
    } while (iVar2 < _DAT_01d1ad78);
  }
  return (int *)0x0;
}
