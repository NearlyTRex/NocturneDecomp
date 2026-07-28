// Name: sound_sndmain.cpp_convertDoubleToFixed_FUN_005235b0
// Address: 005235b0
// Address Range: [[005235b0, 0052360e]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_convertDoubleToFixed_FUN_005235b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound_sndmain_cpp_convertDoubleToFixed_FUN_005235b0(void)

{
  double dVar1;
  uint unaff_retaddr;
  uint in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  uint local_14;
  uint uStack_10;
  
  dVar1 = (double)floor();
  dVar1 = round(dVar1);
  uStack_10 = (uint)(longlong)ROUND(dVar1);
  dVar1 = (__BITCAST_DOUBLE(CONCAT44(in_stack_00000004,unaff_retaddr)) -
          (double)((longlong)ROUND(dVar1) & 0xffffffff)) * _DAT_0059293e;
  *in_stack_00000008 = uStack_10;
  dVar1 = round(dVar1);
  local_14 = (uint)(longlong)ROUND(dVar1);
  *in_stack_0000000c = local_14;
  return;
}
