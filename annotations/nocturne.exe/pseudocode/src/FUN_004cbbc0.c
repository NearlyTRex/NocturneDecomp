// Name: FUN_004cbbc0
// Address: 004cbbc0
// Address Range: [[004cbbc0, 004cbc44]]
// Convention: unknown
// Signature: void FUN_004cbbc0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cbbc0(int param_1,float param_2)

{
  int iVar1;
  uint local_10;
  
  local_10 = (param_2 * (float)_DAT_0058816a) / (float)_DAT_00588172;
  iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x38);
  if (iVar1 != 0) {
    local_10 = local_10 * (float)_DAT_0058817a;
  }
  iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x33);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - local_10;
  }
  iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x34);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_10;
  }
  FUN_0040a000(param_1);
  return;
}
