// Name: FUN_0044fd20
// Address: 0044fd20
// Address Range: [[0044fd20, 0044fd66]]
// Convention: unknown
// Signature: undefined4 FUN_0044fd20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044fd20(int param_1)

{
  if (*(int *)(param_1 + 0x178) != 0) {
    return *(uint *)(param_1 + 0x178);
  }
  _DAT_01d046a0 = "..\\core\\dmodel.cpp";
  _DAT_01d046a4 = 0x52d;
  FUN_004e4500("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",param_1 + 0x78);
  return *(uint *)(param_1 + 0x178);
}
