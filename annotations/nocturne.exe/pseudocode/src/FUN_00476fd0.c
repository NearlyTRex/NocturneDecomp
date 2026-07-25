// Name: FUN_00476fd0
// Address: 00476fd0
// Address Range: [[00476fd0, 00477072]]
// Convention: unknown
// Signature: undefined4 FUN_00476fd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00476fd0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *in_stack_00000004;
  
  bVar1 = DAT_01bd1d94;
  if ((((*in_stack_00000004 == 0) && (in_stack_00000004[1] <= _DAT_01bd1d8c)) &&
      (in_stack_00000004[2] <= _DAT_01bd1d90)) &&
     ((_DAT_01bd1d8c < in_stack_00000004[3] && (_DAT_01bd1d90 < in_stack_00000004[4])))) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (_DAT_01bcde24 == in_stack_00000004) {
    in_stack_00000004[5] = iVar3;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01bcde24 = (int *)((uint)_DAT_01bcde24 ^ (uint)in_stack_00000004), iVar3 != 0)) {
      in_stack_00000004[5] = 0;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (((_DAT_01bcde24 == (int *)0x0) && ((DAT_01bd1d94 & 1) != 0)) && (iVar3 != 0)) {
    in_stack_00000004[5] = 1;
    _DAT_01bcde24 = in_stack_00000004;
    return 0;
  }
  return 0;
}
