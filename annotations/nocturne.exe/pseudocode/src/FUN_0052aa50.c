// Name: FUN_0052aa50
// Address: 0052aa50
// Address Range: [[0052aa50, 0052aa83]]
// Convention: unknown
// Signature: void FUN_0052aa50(undefined4 param_1,double param_2,double param_3,double param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052aa50(uint param_1,double param_2,double param_3,double param_4)

{
  if (_DAT_02dc9220 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc9220 + 0x38))(_DAT_02dc9220,(float)param_2,(float)param_3,(float)param_4,0)
  ;
  return;
}
