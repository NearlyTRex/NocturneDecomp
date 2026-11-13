// Name: engine_font.cpp_FUN_004c4d40
// Address: 004c4d40
// Address Range: [[004c4d40, 004c4d75]]
// Convention: unknown
// Signature: int * engine_font_cpp_FUN_004c4d40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * engine_font_cpp_FUN_004c4d40(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  piVar1 = (int *)&DAT_01cc8cec;
  iVar2 = 0;
  if (0 < _DAT_01cc8ce8) {
    do {
      if ((in_stack_00000004 == *piVar1) && (piVar1 != in_stack_00000008)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xe;
    } while (iVar2 < _DAT_01cc8ce8);
  }
  return (int *)0x0;
}
