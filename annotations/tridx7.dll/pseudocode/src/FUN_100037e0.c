// Name: FUN_100037e0
// Address: 100037e0
// Address Range: [[100037e0, 10003824]]
// Convention: unknown
// Signature: void FUN_100037e0(uint param_1,int param_2)

#include "nocturne.h"

void FUN_100037e0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xff;
  if (((&DAT_101390c8)[uVar1] != param_1) || ((&DAT_101394c8)[uVar1] != param_2)) {
    (&DAT_101390c8)[uVar1] = param_1;
    (&DAT_101394c8)[uVar1] = param_2;
    FUN_100047b0();
    (**(code **)(*DAT_100141e0 + 0x58))(DAT_100141e0,param_1,param_2);
  }
  return;
}
