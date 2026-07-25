// Name: FUN_00532ff0
// Address: 00532ff0
// Address Range: [[00532ff0, 0053300b]]
// Convention: unknown
// Signature: void FUN_00532ff0(void)

#include "nocturne.h"

void FUN_00532ff0(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x558);
  if (iVar1 == 0) {
    return;
  }
  core_spike_cpp_CSpike_ctor_FUN_00533020(iVar1);
  return;
}
