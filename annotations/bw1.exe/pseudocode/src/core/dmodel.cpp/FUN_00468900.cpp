// Name: FUN_00468900
// Address: 00468900
// Address Range: [[00468900, 00468946]]
// Convention: unknown
// Signature: undefined4 FUN_00468900(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00468900(int param_1)

{
  if (*(int *)(param_1 + 0x178) != 0) {
    return *(uint *)(param_1 + 0x178);
  }
  _DAT_01d1d400 = "..\\core\\dmodel.cpp";
  _DAT_01d1d404 = 0x52d;
  FUN_005030e0("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",param_1 + 0x78);
  return *(uint *)(param_1 + 0x178);
}
