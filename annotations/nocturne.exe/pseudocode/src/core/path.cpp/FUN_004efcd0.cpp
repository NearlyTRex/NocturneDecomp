// Name: FUN_004efcd0
// Address: 004efcd0
// Address Range: [[004efcd0, 004efd4e]]
// Convention: unknown
// Signature: void FUN_004efcd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004efcd0(void)

{
  int iVar1;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if (_DAT_01e4008c == _DAT_01e40090) {
    _DAT_01cc4800 = "..\\core\\path.cpp";
    _DAT_01cc4804 = 0xdf;
    FUN_004c8440("queuePop - empty queue?!");
  }
  *in_stack_00000004 = *(uint *)(&DAT_01e3162c + _DAT_01e4008c * 0xc);
  *in_stack_00000008 = *(uint *)(&DAT_01e31630 + _DAT_01e4008c * 0xc);
  iVar1 = _DAT_01e4008c + 1;
  *in_stack_0000000c = *(uint *)(&DAT_01e31634 + _DAT_01e4008c * 0xc);
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e4008c = iVar1;
  return;
}
