// Name: engine_prim.c_FUN_004faca0
// Address: 004faca0
// Address Range: [[004faca0, 004facd5]]
// Convention: unknown
// Signature: int * engine_prim_c_FUN_004faca0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * engine_prim_c_FUN_004faca0(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  piVar1 = (int *)&DAT_01e52f00;
  iVar2 = 0;
  if (0 < _DAT_01e52efc) {
    do {
      if ((in_stack_00000004 == *piVar1) && (piVar1 != in_stack_00000008)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < _DAT_01e52efc);
  }
  return (int *)0x0;
}
