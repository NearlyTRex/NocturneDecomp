// Name: FUN_005235b0
// Address: 005235b0
// Address Range: [[005235b0, 0052360e]]
// Convention: unknown
// Signature: void FUN_005235b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_005235b0(void)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  uint unaff_retaddr;
  uint in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  uint local_14;
  uint uStack_10;
  
  dVar1 = (double)floor();
  fVar2 = (float10)round((float10)dVar1);
  uStack_10 = (uint)(longlong)ROUND(fVar2);
  fVar3 = (float10)_DAT_0059293e;
  *in_stack_00000008 = uStack_10;
  fVar3 = (float10)round
                             (((float10)__BITCAST_DOUBLE(CONCAT44(in_stack_00000004,unaff_retaddr)) -
                              (float10)((longlong)ROUND(fVar2) & 0xffffffff)) * fVar3);
  local_14 = (uint)(longlong)ROUND(fVar3);
  *in_stack_0000000c = local_14;
  return;
}
