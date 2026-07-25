// Name: FUN_004774b0
// Address: 004774b0
// Address Range: [[004774b0, 004775a3]]
// Convention: unknown
// Signature: undefined4 FUN_004774b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_004774b0(void)

{
  byte bVar1;
  int iVar2;
  int *in_stack_00000004;
  
  bVar1 = DAT_01bd1d94;
  if ((((in_stack_00000004[2] == 0) && (in_stack_00000004[4] <= _DAT_01bd1d8c)) &&
      (in_stack_00000004[5] <= _DAT_01bd1d90)) &&
     ((_DAT_01bd1d8c < in_stack_00000004[6] && (_DAT_01bd1d90 < in_stack_00000004[7])))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (_DAT_01bcde24 == in_stack_00000004) {
    in_stack_00000004[8] = iVar2;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01bcde24 = (int *)((uint)_DAT_01bcde24 ^ (uint)in_stack_00000004), iVar2 != 0)) {
      in_stack_00000004[8] = 0;
      if (*in_stack_00000004 == 1) {
        iVar2 = in_stack_00000004[1];
        in_stack_00000004[1] = iVar2 + 1;
        if (2 < iVar2 + 1) {
          in_stack_00000004[1] = 0;
          return 1;
        }
      }
      else {
        in_stack_00000004[1] = (uint)(in_stack_00000004[1] == 0);
      }
      return 1;
    }
    return 0;
  }
  if (((_DAT_01bcde24 == (int *)0x0) && ((DAT_01bd1d94 & 1) != 0)) && (iVar2 != 0)) {
    in_stack_00000004[8] = 1;
    _DAT_01bcde24 = in_stack_00000004;
    return 0;
  }
  return 0;
}
